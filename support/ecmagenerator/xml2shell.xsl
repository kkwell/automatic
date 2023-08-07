<?xml version="1.0" encoding="UTF-8"?>

<!-- *** DO NOT USE AUTO FORMAT / tidy *** -->

<!DOCTYPE xsl:stylesheet [
<!ENTITY endl "<xsl:text>&#xa;</xsl:text>">
]>

<xsl:stylesheet version="1.0"
    xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
    xmlns:func="http://exslt.org/functions"
    xmlns:date="http://exslt.org/dates-and-times"
    xmlns:rs="http://www.ribbonsoft.com"
    xmlns:str="http://exslt.org/strings"
    xmlns:com="http://exslt.org/common"
    extension-element-prefixes="func date str">

<xsl:import href="xml2cpp.xsl"/>

<xsl:include href="query.xsl" />
<xsl:include href="replace.xsl"/>

<xsl:output method="text" />
<xsl:param name="mode"/>
<xsl:param name="name" select="/unit/class/@name" />
<xsl:param name="ecmaName" select="rs:toEcmaName($name)" />
<xsl:param name="prefix">
    <xsl:choose>
    <xsl:when test="$mode='h'">
        <xsl:value-of select="''"/>
    </xsl:when>
    <xsl:otherwise>
        <xsl:value-of select="concat(rs:toEcmaName(/unit/class[@isScriptable = 'true']/@name), '::')"/>
    </xsl:otherwise>
    </xsl:choose>
</xsl:param>
<xsl:param name="static">
    <xsl:choose>
    <xsl:when test="$mode='h'">
        <xsl:value-of select="'static '"/>
    </xsl:when>
    <xsl:otherwise>
        <xsl:value-of select="''"/>
    </xsl:otherwise>
    </xsl:choose>
</xsl:param>
<xsl:param name="hasShell">
    <!--
    <xsl:value-of select="boolean(/unit/class/method[@isVirtual='true'])"/>
    -->
    <xsl:value-of select="boolean(/unit/class[@hasShell = 'true'])"/>
</xsl:param>
<xsl:param name="isShell">
    <xsl:value-of select="'true'"/>
</xsl:param>


<xsl:template match="/">
    <xsl:choose>
    <xsl:when test="$hasShell='true'">
        <xsl:apply-templates mode="shell"/>
    </xsl:when>
    <xsl:otherwise>
        <xsl:message>No shell needed for class <xsl:value-of select="$name"/>.</xsl:message>
    </xsl:otherwise>
    </xsl:choose>
</xsl:template>

<xsl:template match="unit" mode="shell">
	<xsl:apply-templates select="class[@isScriptable = 'true']" mode="shell"/>
</xsl:template>

<xsl:template match="class" mode="shell">

	<xsl:variable name="uName" select="rs:toUppercase($name)" />
	<xsl:variable name="uEcmaName" select="rs:toUppercase($ecmaName)" />
    <!--
	<xsl:variable name="hasStreamOperator" select="@hasStreamOperator = 'true'" />
	<xsl:variable name="isAbstract" select="@isAbstract = 'true'" />
    -->
	<xsl:variable name="isScriptable" select="@isScriptable = 'true'" />


	// ***** AUTOGENERATED CODE, DO NOT EDIT *****
    <!--
	// ***** <xsl:value-of select="date:format-date(date:date-time(),'yyyy-MM-dd HH:mm:ss')" />
    -->

    <xsl:choose>
      <xsl:when test="$mode='h'">
        #ifndef <xsl:value-of select="$uEcmaName" />_H
        #define <xsl:value-of select="$uEcmaName" />_H

        #include &lt;QScriptEngine&gt;
        #include &lt;QScriptValue&gt;
        #include &lt;QScriptContextInfo&gt;
        #include &lt;QDebug&gt;

        <xsl:choose>
            <xsl:when test="@typedef">
                <xsl:if test="contains($name, 'Pointer')">
                    #include "<xsl:value-of select="concat(rs:replace($name, 'Pointer', ''), '.h')"/>"
                </xsl:if>

                typedef <xsl:value-of select="@typedef" /><xsl:text> </xsl:text><xsl:value-of select="$name" />;
            </xsl:when>
            <xsl:otherwise>
                #include &quot;<xsl:value-of select="$name" />.h&quot;
            </xsl:otherwise>
        </xsl:choose>

        /**
         * \ingroup scripting_ecmaapi
         */
        class <xsl:value-of select="$ecmaName" /> : public <xsl:value-of select="$name" /> {

        public:
      </xsl:when>
      <xsl:otherwise>
        #include "<xsl:value-of select="$ecmaName" />.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        <xsl:for-each select="../class_decl">
            <xsl:choose>
            <xsl:when test="starts-with(@name, 'R')">
                #include "<xsl:value-of select="@name" />.h"
            </xsl:when>
            <xsl:otherwise>
                #include &lt;<xsl:value-of select="@name" />&gt;
            </xsl:otherwise>
            </xsl:choose>
        </xsl:for-each>
            
        // includes for base ecma wrapper classes
        <xsl:for-each select="/unit/class/baseClass">
          <xsl:if test="starts-with(@name , 'R')">
            #include "<xsl:value-of select="concat('REcma', substring(@name,2))"/>.h"
          </xsl:if>
        </xsl:for-each>

            #define QTSCRIPT_IS_GENERATED_FUNCTION(fun) ((fun.data().toUInt32() &amp; 0xFFFF0000) == 0xBABE0000)
            #define QTSCRIPT_IS_FUNCTION_IN_CALL(fun) ((fun.data().toUInt32() &amp; 0x0000F000) == 0x0000B000)

        </xsl:otherwise>
    </xsl:choose>

    <xsl:call-template name="destructor"/>
	<xsl:call-template name="getSelf" />
	<xsl:call-template name="getSelfShell" />

    <xsl:apply-templates mode="shell"/>

    <!-- methods from base classes
    <xsl:variable name="baseClasses">
      <xsl:call-template name="getAllBaseClasses">
        <xsl:with-param name="baseClassNodes" select="/unit/class/baseClass[@specifier='public']"/>
      </xsl:call-template>
    </xsl:variable>

    <xsl:message>base classes: <xsl:value-of select="$baseClasses"/></xsl:message>

    <xsl:for-each select="com:node-set($baseClasses)">
      <xsl:if test="starts-with(@name , 'R') and rs:isClassScriptable(@name)">
        // methods of base class <xsl:value-of select="@name"/>:
        <xsl:apply-templates select="document(rs:getXmlFile(@name))/unit/class/method[@specifier='public']" mode="shell">
            <xsl:with-param name="overrideClassName" select="$name"/>
        </xsl:apply-templates>
      </xsl:if>
    </xsl:for-each>
    -->

    <xsl:for-each select="/unit/class/baseClass[@specifier='public']">
      <xsl:if test="starts-with(@name , 'R') and rs:isClassScriptable(@name)">
        // methods of 1st level base class <xsl:value-of select="@name"/>:
        <xsl:apply-templates select="document(rs:getXmlFile(@name))/unit/class/method[@specifier='public']" mode="shell">
            <xsl:with-param name="overrideClassName" select="$name"/>
        </xsl:apply-templates>

        <xsl:variable name="name1st">
            <xsl:value-of select="@name"/>
        </xsl:variable>

        <xsl:for-each select="document(rs:getXmlFile(@name))/unit/class/baseClass[@specifier='public']">
          <xsl:if test="starts-with(@name , 'R') and rs:isClassScriptable(@name)">
            // methods of 2nd level base class <xsl:value-of select="@name"/>:
            <xsl:apply-templates select="document(rs:getXmlFile(@name))/unit/class/method[@specifier='public']" mode="shell">
                <xsl:with-param name="overrideClassName" select="$name"/>
                <xsl:with-param name="overrideClassName2" select="$name1st"/>
            </xsl:apply-templates>
          </xsl:if>
        </xsl:for-each>

      </xsl:if>
    </xsl:for-each>

    <!--
    <xsl:for-each select="rs:getAllBaseClasses()">
        <xsl:call-template name="baseClassNames">
            <xsl:with-param name="baseClassNodes" select="document(rs:getXmlFile(@name))/unit/class/baseClass[@specifier='public']"/>
        </xsl:call-template>
    </xsl:for-each>
    -->

    // protected methods (only available for ECMA shell classes) (generated by xsl2xpp.xsl):
	<xsl:apply-templates select="method[@specifier='protected']" />

    <!--
	<xsl:call-template name="throwError" />
    -->

    <xsl:choose>
        <xsl:when test="$mode='h'">
            <xsl:text>QScriptValue __qtscript_self;
            };</xsl:text>
            Q_DECLARE_METATYPE(<xsl:value-of select="$ecmaName" />*)
        </xsl:when>
        <xsl:otherwise>
        </xsl:otherwise>
    </xsl:choose>

    <xsl:choose>
    <xsl:when test="$mode='h'">
	#endif
    </xsl:when>
    <xsl:otherwise>
    </xsl:otherwise>
    </xsl:choose>
</xsl:template>

<xsl:template match="class/constructor" mode="shell">
    // Constructors:
    <xsl:apply-templates  mode="shell"/>
</xsl:template>

<xsl:template match="/unit/class/constructor/variant" mode="shell">
    <xsl:choose>
        <xsl:when test="$mode='h'">
            <xsl:value-of select="$ecmaName" />(
                <xsl:apply-templates select="arg" mode="shell" />
            );
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$ecmaName" />::<xsl:value-of select="$ecmaName" />(
                <xsl:apply-templates select="arg" mode="shell" />
            ) : <xsl:value-of select="$name" />(
                <xsl:apply-templates select="arg" mode="shellArgOut"/>
                ) {
            }
        </xsl:otherwise>
    </xsl:choose>
</xsl:template>

<xsl:template name="destructor">
    // Destructor:
    <xsl:choose>
        <xsl:when test="$mode='h'">
            ~<xsl:value-of select="$ecmaName" />();
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$ecmaName" />::~<xsl:value-of select="$ecmaName" />() {}
        </xsl:otherwise>
    </xsl:choose>
</xsl:template>

<xsl:template match="/unit/class/method" mode="shell">
    <xsl:param name="overrideClassName" select="ancestor::class/@name"/>
    <xsl:param name="overrideClassName2" select="ancestor::class/@name"/>
    <xsl:param name="overrideClassName3" select="ancestor::class/@name"/>

    <xsl:if test="@isScriptOverwritable='true'">

        <!--
        <xsl:message>***</xsl:message>
        <xsl:message>class: <xsl:value-of select="/unit/class/@name"/></xsl:message>
        <xsl:message>method: <xsl:value-of select="@name"/></xsl:message>
        <xsl:message>override 1: <xsl:value-of select="$overrideClassName"/></xsl:message>
        <xsl:message>override 2: <xsl:value-of select="$overrideClassName2"/></xsl:message>
        <xsl:message>override 3: <xsl:value-of select="$overrideClassName3"/></xsl:message>
        -->

        <xsl:variable name="methodName" select="@name"/>

        <!-- make sure that we don't duplicate methods from a secondary base class: -->
        <xsl:if test="$overrideClassName=ancestor::class/@name or 
           not(document(rs:getXmlFile($overrideClassName))/unit/class/method[@name=$methodName and @specifier='public'])">
            <xsl:if test="$overrideClassName2=ancestor::class/@name or 
                not(document(rs:getXmlFile($overrideClassName2))/unit/class/method[@name=$methodName and @specifier='public'])">
                <xsl:if test="$overrideClassName3=ancestor::class/@name or 
                    not(document(rs:getXmlFile($overrideClassName3))/unit/class/method[@name=$methodName and @specifier='public'])">
                      <xsl:apply-templates mode="shell"/>
                </xsl:if>
            </xsl:if>
        </xsl:if>
    </xsl:if>
</xsl:template>

<xsl:template match="/unit/class/method/variant" mode="shell">
    <xsl:choose>
        <xsl:when test="$mode='h'">
            <xsl:value-of select="@returnType" /><xsl:text> </xsl:text><xsl:value-of select="../@name" />(
                <xsl:apply-templates select="arg" mode="shell" />
            );
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="@returnType" /><xsl:text> </xsl:text><xsl:value-of select="$ecmaName" />::<xsl:value-of select="../@name" />(
                <xsl:apply-templates select="arg" mode="shell" />
            ) {
                QScriptEngine* engine = __qtscript_self.engine();
                //REcmaHelper::shellFunctionStart("<xsl:value-of select="$ecmaName" />::<xsl:value-of select="../@name" />", engine);
                QScriptValue _q_function = __qtscript_self.property("<xsl:value-of select="../@name" />");

<!-- 
                QString calleeFunctionBody;
                QScriptContext* context = __qtscript_self.engine()->currentContext();
                if (context!=NULL) {
                    QScriptContext* parentContext = context->parentContext();
                    if (parentContext!=NULL) {
                        QScriptValue callee = parentContext->callee();
                        calleeFunctionBody = callee.toString();
                    }
                }
-->

                if (!_q_function.isFunction() || 
                    QTSCRIPT_IS_GENERATED_FUNCTION(_q_function) ||
                    QTSCRIPT_IS_FUNCTION_IN_CALL(_q_function)
<!--                    
                    ||
                    /* wrapper was called from ECMAScript implementation of <xsl:value-of select="$name" />::<xsl:value-of select="../@name" /> */
                    calleeFunctionBody.contains("<xsl:value-of select="$name" />.prototype.<xsl:value-of select="../@name" />.call")
-->                    
                    /* function might have more arguments than expected:
                    || _q_function.property("length").toInt32()!=<xsl:value-of select="count(./arg)"/>*/
                    /*|| (__qtscript_self.propertyFlags("atEnd") &amp; QScriptValue::QObjectMember)*/
                    ) {
                    //QString cppSig = "<xsl:value-of select="$name" />::<xsl:value-of select="../@name" />";
                    <xsl:choose>
                      <xsl:when test="@isPureVirtual='true'">
                        qFatal("<xsl:value-of select="$name" />::<xsl:value-of select="../@name" /> is pure virtual.");
                      </xsl:when>
                      <xsl:otherwise>
                        // re-enable recursion for calls from C++ into ECMAScript functions
                        // leave it marked as generated though if appropriate:
                        <!--qDebug() &lt;&lt; "re-enable recursion for: " &lt;&lt; cppSig;-->
                        quint32 prev = _q_function.data().toUInt32();
                        //if (cppSig!="RGraphicsViewQt::event") {
                            _q_function.setData(QScriptValue(engine, prev &amp; 0xFFFF0000));
                        //}
                        <xsl:if test="not(@returnType='void')">
                            <xsl:value-of select="@returnType"/> ret =
                        </xsl:if>
                        <xsl:value-of select="$name" />::<xsl:value-of select="../@name" />(
                            <xsl:apply-templates select="arg" mode="shellArgOut"/>
                        );

                        // block recursion again:
                        _q_function.setData(QScriptValue(engine, prev));

                        //REcmaHelper::shellFunctionEnd("<xsl:value-of select="$ecmaName" />::<xsl:value-of select="../@name" />", engine);

                        <xsl:choose>
                          <xsl:when test="not(@returnType='void')">
                            return ret;
                          </xsl:when>
                          <xsl:otherwise>
                            return;
                          </xsl:otherwise>
                        </xsl:choose>
                      </xsl:otherwise>
                    </xsl:choose>
                <!--} else {-->
                }
                    // prevent recursion if script implementation calls base implementation
                    // mark function as 'in call':
                    quint32 prev = _q_function.data().toUInt32();
                    _q_function.setData(QScriptValue(engine, uint(prev | 0x0000B000)));
                    <xsl:if test="../@specifier='protected'">
                        // temporary make protected function scriptable, only from the context of this function call:
                        QScriptValue proto = engine->defaultPrototype(qMetaTypeId&lt;<xsl:value-of select="$name" />*&gt;());
                        REcmaHelper::registerFunction(engine, &amp;proto, <xsl:value-of select="../@name" />, "<xsl:value-of select="../@name" />");
                        <!--
                        QScriptValue fun = engine->newFunction(<xsl:value-of select="../@name" />);
                        // prevent recursion:
                        fun.setData(QScriptValue(engine, uint(0xBABE0000)));
                        proto.setProperty("<xsl:value-of select="../@name" />", fun,
                           QScriptValue::SkipInEnumeration);
                        -->
                    </xsl:if>

                    <xsl:variable name="returnTypeStripped">
                      <xsl:choose>
                        <xsl:when test="rs:isReference(@returnType)">
                          <xsl:value-of select="rs:stripReferenceOrPointer(@returnType)" /><xsl:text>*</xsl:text>
                        </xsl:when>
                        <xsl:otherwise>
                          <xsl:value-of select="@returnType" /> 
                        </xsl:otherwise>
                      </xsl:choose>
                    </xsl:variable>

                    <xsl:if test="not(@returnType='void')">
                      <xsl:value-of select="$returnTypeStripped" /> res;
                      <xsl:choose>
                        <xsl:when test="starts-with($returnTypeStripped, 'QList')">
                          REcmaHelper::fromScriptValue(engine, 
                        </xsl:when>
                        <xsl:otherwise>
                          res = qscriptvalue_cast&lt; 
                            <xsl:value-of select="$returnTypeStripped" />
                          &gt;(
                        </xsl:otherwise>
                      </xsl:choose>
                    </xsl:if>

                    <xsl:choose>
                        <xsl:when test="count(arg)=0">
                            _q_function.call(__qtscript_self)
                        </xsl:when>
                        <xsl:otherwise>
                            _q_function.call(__qtscript_self,
                                QScriptValueList()
                                <xsl:apply-templates select="arg" mode="shellArgOutEcma"/>
                            )
                        </xsl:otherwise>
                    </xsl:choose>

                    <xsl:if test="starts-with($returnTypeStripped, 'QList')">
                      , res
                    </xsl:if>
                    <xsl:if test="not(@returnType='void')">
                      )
                    </xsl:if>
                    ;
                    _q_function.setData(QScriptValue(engine, prev));

                    //REcmaHelper::shellFunctionEnd("<xsl:value-of select="$ecmaName" />::<xsl:value-of select="../@name" />", engine);

                    <xsl:if test="not(@returnType='void')">
                      <xsl:choose>
                        <xsl:when test="rs:isReference(@returnType)">
                            return *res;
                        </xsl:when>
                          <xsl:otherwise>
                            return res;
                          </xsl:otherwise>
                        </xsl:choose>
                    </xsl:if>
                <!--}-->
            }
        </xsl:otherwise>
    </xsl:choose>
</xsl:template>

<xsl:template match="arg" mode="shell">
    <xsl:if test="@isConst='true'">
        <xsl:text>const </xsl:text>
    </xsl:if>
    <xsl:value-of select="@type"/><xsl:text> </xsl:text>
    <xsl:choose>
        <xsl:when test="@name!=''">
            <xsl:value-of select="@name"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:text>arg</xsl:text><xsl:value-of select="position()"/>
        </xsl:otherwise>
    </xsl:choose>
    <xsl:if test="$mode='h' and @hasDefault='true'">
        = <xsl:value-of select="@default"/>
    </xsl:if>
    <xsl:if test="not(position()=last())">
        <xsl:text>, </xsl:text>
    </xsl:if>
</xsl:template>

<xsl:template match="arg" mode="shellArgOut">
    <xsl:choose>
        <xsl:when test="@name!=''">
            <xsl:value-of select="@name"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:text>arg</xsl:text><xsl:value-of select="position()"/>
        </xsl:otherwise>
    </xsl:choose>
    <xsl:if test="not(position()=last())">
        <xsl:text>, </xsl:text>
    </xsl:if>
</xsl:template>

<xsl:template match="arg" mode="shellArgOutEcma">
    <xsl:variable name="varName">
       <xsl:choose>
           <xsl:when test="@name!=''">
               <xsl:value-of select="@name"/>
           </xsl:when>
           <xsl:otherwise>
               <xsl:text>arg</xsl:text><xsl:value-of select="position()"/>
           </xsl:otherwise>
       </xsl:choose>
    </xsl:variable>



    // type: <xsl:value-of select="@type"/>, copyable: <xsl:value-of select="rs:isCopyable(rs:stripReferenceOrPointer(@type))"/>

    <xsl:choose>
      <xsl:when test="starts-with(@type, 'QList')">
        // List of ...:
        &lt;&lt; REcmaHelper::listToScriptValue(engine, 
          <xsl:value-of select="$varName"/>
        )
      </xsl:when>

      <xsl:when test="@type='REntity &amp;'">
        // REntity &amp;:
        &lt;&lt; REcmaHelper::toScriptValue(engine, 
          &amp;<xsl:value-of select="$varName"/>
        )
      </xsl:when>

      <xsl:when test="@type='REntity *'">
        // REntity *:
        &lt;&lt; REcmaHelper::toScriptValue(engine, 
          <xsl:value-of select="$varName"/>
        )
      </xsl:when>
        
      <xsl:otherwise>
        &lt;&lt; qScriptValueFromValue(engine, 

        <xsl:if test="@isConst='true' and contains(@type, '&amp;') and not(contains(@type, 'QString'))">
            // const reference argument - make a new object:
            <xsl:text>new </xsl:text>
            <xsl:value-of select="rs:stripReferenceOrPointer(@type)"/>
            <xsl:text>(</xsl:text>
        </xsl:if>

        <xsl:if test="contains(@type, '&amp;') and not(rs:isCopyable(rs:stripReferenceOrPointer(@type))) and @isConst='false'">
            <xsl:text>&amp;</xsl:text>
        </xsl:if>

        <xsl:value-of select="$varName"/>

        <xsl:if test="@isConst='true' and contains(@type, '&amp;') and not(contains(@type, 'QString'))">
            <xsl:text>)</xsl:text>
        </xsl:if>
        )
      </xsl:otherwise>
    </xsl:choose>
</xsl:template>


<func:function name="rs:toUppercase">
	<xsl:param name="str" />
	<xsl:variable name="lowercase" select="'abcdefghijklmnopqrstuvwxyz'" />
	<xsl:variable name="uppercase" select="'ABCDEFGHIJKLMNOPQRSTUVWXYZ'" />
	<func:result>
		<xsl:value-of select="translate($str, $lowercase, $uppercase)" />
	</func:result>
</func:function>

<func:function name="rs:toEcmaName">
	<xsl:param name="str" />
	<func:result>
		<xsl:value-of
			select="concat(substring($str, 1, 1), 'EcmaShell', substring($str, 2))" />
	</func:result>
</func:function>

</xsl:stylesheet>
