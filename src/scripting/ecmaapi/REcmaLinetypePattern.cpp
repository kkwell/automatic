

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaLinetypePattern.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaLinetypePattern::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RLinetypePattern*) 0)));
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
    
            REcmaHelper::registerFunction(&engine, proto, set, "set");
            
            REcmaHelper::registerFunction(&engine, proto, isValid, "isValid");
            
            REcmaHelper::registerFunction(&engine, proto, getNumDashes, "getNumDashes");
            
            REcmaHelper::registerFunction(&engine, proto, getPatternLength, "getPatternLength");
            
            REcmaHelper::registerFunction(&engine, proto, getDashLengthAt, "getDashLengthAt");
            
            REcmaHelper::registerFunction(&engine, proto, getLargestGap, "getLargestGap");
            
            REcmaHelper::registerFunction(&engine, proto, hasDashAt, "hasDashAt");
            
            REcmaHelper::registerFunction(&engine, proto, getDelta, "getDelta");
            
            REcmaHelper::registerFunction(&engine, proto, isSymmetrical, "isSymmetrical");
            
            REcmaHelper::registerFunction(&engine, proto, scale, "scale");
            
            REcmaHelper::registerFunction(&engine, proto, operator_assign, "operator_assign");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RLinetypePattern*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RLinetypePattern",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaLinetypePattern::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RLinetypePattern(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RLinetypePattern
                    * cppResult =
                    new
                    RLinetypePattern
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        1
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
                ) /* type: RLinetypePattern */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    RLinetypePattern*
                    ap0 =
                    qscriptvalue_cast<
                    RLinetypePattern*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RLinetypePattern: Argument 0 is not of type RLinetypePattern*.",
                               context);                    
                    }
                    RLinetypePattern& a0 = *ap0;
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RLinetypePattern
                    * cppResult =
                    new
                    RLinetypePattern
                    (
                    a0
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RLinetypePattern(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaLinetypePattern::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RLinetypePattern"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaLinetypePattern::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaLinetypePattern::set
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLinetypePattern::set", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLinetypePattern::set";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLinetypePattern* self = 
                        getSelf("set", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isArray()
        ) /* type: QList < double > */
    
    ){
    // prepare arguments:
    
                    // argument isArray
                    QList < double >
                    a0;
                    REcmaHelper::fromScriptValue(
                        engine,
                        context->argument(0),
                        a0
                    );
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->set(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLinetypePattern.set().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLinetypePattern::set", context, engine);
            return result;
        }
         QScriptValue
        REcmaLinetypePattern::isValid
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLinetypePattern::isValid", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLinetypePattern::isValid";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLinetypePattern* self = 
                        getSelf("isValid", context);
                  

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
    // return type 'bool'
    bool cppResult =
        
               self->isValid();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLinetypePattern.isValid().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLinetypePattern::isValid", context, engine);
            return result;
        }
         QScriptValue
        REcmaLinetypePattern::getNumDashes
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLinetypePattern::getNumDashes", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLinetypePattern::getNumDashes";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLinetypePattern* self = 
                        getSelf("getNumDashes", context);
                  

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
    // return type 'int'
    int cppResult =
        
               self->getNumDashes();
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLinetypePattern.getNumDashes().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLinetypePattern::getNumDashes", context, engine);
            return result;
        }
         QScriptValue
        REcmaLinetypePattern::getPatternLength
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLinetypePattern::getPatternLength", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLinetypePattern::getPatternLength";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLinetypePattern* self = 
                        getSelf("getPatternLength", context);
                  

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
        
               self->getPatternLength();
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLinetypePattern.getPatternLength().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLinetypePattern::getPatternLength", context, engine);
            return result;
        }
         QScriptValue
        REcmaLinetypePattern::getDashLengthAt
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLinetypePattern::getDashLengthAt", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLinetypePattern::getDashLengthAt";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLinetypePattern* self = 
                        getSelf("getDashLengthAt", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'double'
    double cppResult =
        
               self->getDashLengthAt(a0);
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLinetypePattern.getDashLengthAt().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLinetypePattern::getDashLengthAt", context, engine);
            return result;
        }
         QScriptValue
        REcmaLinetypePattern::getLargestGap
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLinetypePattern::getLargestGap", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLinetypePattern::getLargestGap";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLinetypePattern* self = 
                        getSelf("getLargestGap", context);
                  

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
        
               self->getLargestGap();
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLinetypePattern.getLargestGap().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLinetypePattern::getLargestGap", context, engine);
            return result;
        }
         QScriptValue
        REcmaLinetypePattern::hasDashAt
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLinetypePattern::hasDashAt", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLinetypePattern::hasDashAt";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLinetypePattern* self = 
                        getSelf("hasDashAt", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->hasDashAt(a0);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLinetypePattern.hasDashAt().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLinetypePattern::hasDashAt", context, engine);
            return result;
        }
         QScriptValue
        REcmaLinetypePattern::getDelta
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLinetypePattern::getDelta", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLinetypePattern::getDelta";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLinetypePattern* self = 
                        getSelf("getDelta", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'double'
    double cppResult =
        
               self->getDelta(a0);
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLinetypePattern.getDelta().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLinetypePattern::getDelta", context, engine);
            return result;
        }
         QScriptValue
        REcmaLinetypePattern::isSymmetrical
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLinetypePattern::isSymmetrical", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLinetypePattern::isSymmetrical";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLinetypePattern* self = 
                        getSelf("isSymmetrical", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->isSymmetrical(a0);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLinetypePattern.isSymmetrical().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLinetypePattern::isSymmetrical", context, engine);
            return result;
        }
         QScriptValue
        REcmaLinetypePattern::scale
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLinetypePattern::scale", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLinetypePattern::scale";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLinetypePattern* self = 
                        getSelf("scale", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->scale(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLinetypePattern.scale().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLinetypePattern::scale", context, engine);
            return result;
        }
         QScriptValue
        REcmaLinetypePattern::operator_assign
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLinetypePattern::operator=", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLinetypePattern::operator=";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLinetypePattern* self = 
                        getSelf("operator=", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RLinetypePattern */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    RLinetypePattern*
                    ap0 =
                    qscriptvalue_cast<
                    RLinetypePattern*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RLinetypePattern: Argument 0 is not of type RLinetypePattern*.",
                               context);                    
                    }
                    RLinetypePattern& a0 = *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'RLinetypePattern &'
    RLinetypePattern & cppResult =
        
               self->operator=(a0);
        // return type: RLinetypePattern &
                // reference
                result = engine->newVariant(
                QVariant::fromValue(&cppResult));
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLinetypePattern.operator_assign().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLinetypePattern::operator=", context, engine);
            return result;
        }
         QScriptValue REcmaLinetypePattern::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RLinetypePattern* self = getSelf("toString", context);
    
    QString result;
    
            QDebug d(&result);
            if (self!=NULL) {
                d << *self;
            }
            else {
                d << "NULL";
            }
        
    return QScriptValue(result);
    }
     QScriptValue REcmaLinetypePattern::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RLinetypePattern* self = getSelf("RLinetypePattern", context);
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
    RLinetypePattern* REcmaLinetypePattern::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RLinetypePattern* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RLinetypePattern >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RLinetypePattern.%1(): "
                        "This object is not a RLinetypePattern").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RLinetypePattern* REcmaLinetypePattern::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RLinetypePattern* selfBase = getSelf(fName, context);
                RLinetypePattern* self = dynamic_cast<RLinetypePattern*>(selfBase);
                //return REcmaHelper::scriptValueTo<RLinetypePattern >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RLinetypePattern.%1(): "
                    "This object is not a RLinetypePattern").arg(fName),
                    context);
            }

            return self;
            


        }
        