

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaTextRenderer.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include <QTextDocument>
            
            
        // includes for base ecma wrapper classes
         void REcmaTextRenderer::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RTextRenderer*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, renderSimple, "renderSimple");
            
            REcmaHelper::registerFunction(&engine, proto, render, "render");
            
            REcmaHelper::registerFunction(&engine, proto, getPainterPaths, "getPainterPaths");
            
            REcmaHelper::registerFunction(&engine, proto, getBoundingBox, "getBoundingBox");
            
            REcmaHelper::registerFunction(&engine, proto, getHeight, "getHeight");
            
            REcmaHelper::registerFunction(&engine, proto, getWidth, "getWidth");
            
            REcmaHelper::registerFunction(&engine, proto, getRichText, "getRichText");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RTextRenderer*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    
            ctor.setProperty("rxLineFeed",
                qScriptValueFromValue(&engine, RTextRenderer::rxLineFeed),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxParagraphFeed",
                qScriptValueFromValue(&engine, RTextRenderer::rxParagraphFeed),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxHeightChange",
                qScriptValueFromValue(&engine, RTextRenderer::rxHeightChange),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxStackedText",
                qScriptValueFromValue(&engine, RTextRenderer::rxStackedText),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxColorChangeIndex",
                qScriptValueFromValue(&engine, RTextRenderer::rxColorChangeIndex),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxColorChangeCustom",
                qScriptValueFromValue(&engine, RTextRenderer::rxColorChangeCustom),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxNonBreakingSpace",
                qScriptValueFromValue(&engine, RTextRenderer::rxNonBreakingSpace),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxOverlineOn",
                qScriptValueFromValue(&engine, RTextRenderer::rxOverlineOn),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxOverlineOff",
                qScriptValueFromValue(&engine, RTextRenderer::rxOverlineOff),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxUnderlineOn",
                qScriptValueFromValue(&engine, RTextRenderer::rxUnderlineOn),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxUnderlineOff",
                qScriptValueFromValue(&engine, RTextRenderer::rxUnderlineOff),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxWidthChange",
                qScriptValueFromValue(&engine, RTextRenderer::rxWidthChange),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxObliqueAngleChange",
                qScriptValueFromValue(&engine, RTextRenderer::rxObliqueAngleChange),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxTrackChange",
                qScriptValueFromValue(&engine, RTextRenderer::rxTrackChange),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxAlignmentChange",
                qScriptValueFromValue(&engine, RTextRenderer::rxAlignmentChange),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxFontChangeCad",
                qScriptValueFromValue(&engine, RTextRenderer::rxFontChangeCad),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxFontChangeTtf",
                qScriptValueFromValue(&engine, RTextRenderer::rxFontChangeTtf),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxBeginBlock",
                qScriptValueFromValue(&engine, RTextRenderer::rxBeginBlock),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxEndBlock",
                qScriptValueFromValue(&engine, RTextRenderer::rxEndBlock),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxBackslash",
                qScriptValueFromValue(&engine, RTextRenderer::rxBackslash),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxCurlyOpen",
                qScriptValueFromValue(&engine, RTextRenderer::rxCurlyOpen),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxCurlyClose",
                qScriptValueFromValue(&engine, RTextRenderer::rxCurlyClose),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxDegree",
                qScriptValueFromValue(&engine, RTextRenderer::rxDegree),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("escDegree",
                qScriptValueFromValue(&engine, RTextRenderer::escDegree),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxPlusMinus",
                qScriptValueFromValue(&engine, RTextRenderer::rxPlusMinus),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("escPlusMinus",
                qScriptValueFromValue(&engine, RTextRenderer::escPlusMinus),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxDiameter",
                qScriptValueFromValue(&engine, RTextRenderer::rxDiameter),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("escDiameter",
                qScriptValueFromValue(&engine, RTextRenderer::escDiameter),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxUnicode",
                qScriptValueFromValue(&engine, RTextRenderer::rxUnicode),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("rxAll",
                qScriptValueFromValue(&engine, RTextRenderer::rxAll),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("chDegree",
                qScriptValueFromValue(&engine, RTextRenderer::chDegree),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("chPlusMinus",
                qScriptValueFromValue(&engine, RTextRenderer::chPlusMinus),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            
            ctor.setProperty("chDiameter",
                qScriptValueFromValue(&engine, RTextRenderer::chDiameter),
                QScriptValue::SkipInEnumeration | QScriptValue::ReadOnly);
            

    // enum values:
    

    ctor.setProperty("PainterPaths",
    QScriptValue(RTextRenderer::PainterPaths),
    QScriptValue::ReadOnly);


    ctor.setProperty("RichText",
    QScriptValue(RTextRenderer::RichText),
    QScriptValue::ReadOnly);


    // enum conversions:
    
    qScriptRegisterMetaType<RTextRenderer::Target>(
        &engine,
        toScriptValueEnumTarget,
        fromScriptValueEnumTarget,
        ctor.property(QString::fromLatin1("prototype"))
    );

        
    // init class:
    engine.globalObject().setProperty("RTextRenderer",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaTextRenderer::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTextRenderer(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        3
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RTextData */
            
                && (
                
                        context->argument(
                        1
                        ).isBool()
                ) /* type: bool */
            
                && (
                
                        context->argument(
                        2
                        ).isNumber()
                ) /* type: RTextRenderer::Target */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    RTextData*
                    ap0 =
                    qscriptvalue_cast<
                    RTextData*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RTextRenderer: Argument 0 is not of type RTextData*.",
                               context);                    
                    }
                    RTextData& a0 = *ap0;
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
                    // argument isStandardType
                    RTextRenderer::Target
                    a2 =
                    (RTextRenderer::Target)
                    (int)
                    context->argument( 2 ).
                    toNumber();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RTextRenderer
                    * cppResult =
                    new
                    RTextRenderer
                    (
                    a0
        ,
    a1
        ,
    a2
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        4
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RTextData */
            
                && (
                
                        context->argument(
                        1
                        ).isBool()
                ) /* type: bool */
            
                && (
                
                        context->argument(
                        2
                        ).isNumber()
                ) /* type: RTextRenderer::Target */
            
                && (
                
                        context->argument(
                        3
                        ).isNumber()
                ) /* type: double */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    RTextData*
                    ap0 =
                    qscriptvalue_cast<
                    RTextData*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RTextRenderer: Argument 0 is not of type RTextData*.",
                               context);                    
                    }
                    RTextData& a0 = *ap0;
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
                    // argument isStandardType
                    RTextRenderer::Target
                    a2 =
                    (RTextRenderer::Target)
                    (int)
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a3 =
                    (double)
                    
                    context->argument( 3 ).
                    toNumber();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RTextRenderer
                    * cppResult =
                    new
                    RTextRenderer
                    (
                    a0
        ,
    a1
        ,
    a2
        ,
    a3
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTextRenderer(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaTextRenderer::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RTextRenderer"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaTextRenderer::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaTextRenderer::renderSimple
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTextRenderer::renderSimple", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTextRenderer::renderSimple";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextRenderer* self = 
                        getSelf("renderSimple", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->renderSimple();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextRenderer.renderSimple().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTextRenderer::renderSimple", context, engine);
            return result;
        }
         QScriptValue
        REcmaTextRenderer::render
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTextRenderer::render", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTextRenderer::render";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextRenderer* self = 
                        getSelf("render", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->render();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextRenderer.render().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTextRenderer::render", context, engine);
            return result;
        }
         QScriptValue
        REcmaTextRenderer::getPainterPaths
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTextRenderer::getPainterPaths", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTextRenderer::getPainterPaths";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextRenderer* self = 
                        getSelf("getPainterPaths", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QList < RPainterPath >'
    QList < RPainterPath > cppResult =
        
               self->getPainterPaths();
        // return type: QList < RPainterPath >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextRenderer.getPainterPaths().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTextRenderer::getPainterPaths", context, engine);
            return result;
        }
         QScriptValue
        REcmaTextRenderer::getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTextRenderer::getBoundingBox", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTextRenderer::getBoundingBox";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextRenderer* self = 
                        getSelf("getBoundingBox", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RBox'
    RBox cppResult =
        
               self->getBoundingBox();
        // return type: RBox
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextRenderer.getBoundingBox().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTextRenderer::getBoundingBox", context, engine);
            return result;
        }
         QScriptValue
        REcmaTextRenderer::getHeight
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTextRenderer::getHeight", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTextRenderer::getHeight";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextRenderer* self = 
                        getSelf("getHeight", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'double'
    double cppResult =
        
               self->getHeight();
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextRenderer.getHeight().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTextRenderer::getHeight", context, engine);
            return result;
        }
         QScriptValue
        REcmaTextRenderer::getWidth
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTextRenderer::getWidth", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTextRenderer::getWidth";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextRenderer* self = 
                        getSelf("getWidth", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'double'
    double cppResult =
        
               self->getWidth();
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextRenderer.getWidth().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTextRenderer::getWidth", context, engine);
            return result;
        }
         QScriptValue
        REcmaTextRenderer::getRichText
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTextRenderer::getRichText", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTextRenderer::getRichText";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextRenderer* self = 
                        getSelf("getRichText", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getRichText();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextRenderer.getRichText().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTextRenderer::getRichText", context, engine);
            return result;
        }
         QScriptValue REcmaTextRenderer::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RTextRenderer* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RTextRenderer(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaTextRenderer::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RTextRenderer* self = getSelf("RTextRenderer", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RTextRenderer* REcmaTextRenderer::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RTextRenderer* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RTextRenderer >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RTextRenderer.%1(): "
                        "This object is not a RTextRenderer").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RTextRenderer* REcmaTextRenderer::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RTextRenderer* selfBase = getSelf(fName, context);
                RTextRenderer* self = dynamic_cast<RTextRenderer*>(selfBase);
                //return REcmaHelper::scriptValueTo<RTextRenderer >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RTextRenderer.%1(): "
                    "This object is not a RTextRenderer").arg(fName),
                    context);
            }

            return self;
            


        }
         QScriptValue REcmaTextRenderer::toScriptValueEnumTarget(QScriptEngine* engine, const RTextRenderer::Target& value)
    
        {
            return QScriptValue(engine, (int)value);
        }
         void REcmaTextRenderer::fromScriptValueEnumTarget(const QScriptValue& value, RTextRenderer::Target& out)
    
        {
            out = qvariant_cast<RTextRenderer::Target>(value.toVariant());
        }
        