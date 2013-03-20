

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaProgressHandler.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaProgressHandler::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RProgressHandler*) 0)));
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
    
            REcmaHelper::registerFunction(&engine, proto, setProgress, "setProgress");
            
            REcmaHelper::registerFunction(&engine, proto, setProgressEnd, "setProgressEnd");
            
            REcmaHelper::registerFunction(&engine, proto, setProgressText, "setProgressText");
            
            REcmaHelper::registerFunction(&engine, proto, setProgressEnabled, "setProgressEnabled");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RProgressHandler*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RProgressHandler",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaProgressHandler::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RProgressHandler: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaProgressHandler::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RProgressHandler"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaProgressHandler::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaProgressHandler::setProgress
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaProgressHandler::setProgress", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaProgressHandler::setProgress";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RProgressHandler* self = 
                        getSelf("setProgress", context);
                  

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
    // return type 'void'
    
               self->setProgress(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RProgressHandler.setProgress().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaProgressHandler::setProgress", context, engine);
            return result;
        }
         QScriptValue
        REcmaProgressHandler::setProgressEnd
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaProgressHandler::setProgressEnd", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaProgressHandler::setProgressEnd";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RProgressHandler* self = 
                        getSelf("setProgressEnd", context);
                  

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
    
               self->setProgressEnd();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RProgressHandler.setProgressEnd().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaProgressHandler::setProgressEnd", context, engine);
            return result;
        }
         QScriptValue
        REcmaProgressHandler::setProgressText
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaProgressHandler::setProgressText", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaProgressHandler::setProgressText";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RProgressHandler* self = 
                        getSelf("setProgressText", context);
                  

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
    
               self->setProgressText();
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setProgressText(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RProgressHandler.setProgressText().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaProgressHandler::setProgressText", context, engine);
            return result;
        }
         QScriptValue
        REcmaProgressHandler::setProgressEnabled
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaProgressHandler::setProgressEnabled", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaProgressHandler::setProgressEnabled";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RProgressHandler* self = 
                        getSelf("setProgressEnabled", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setProgressEnabled(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RProgressHandler.setProgressEnabled().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaProgressHandler::setProgressEnabled", context, engine);
            return result;
        }
         QScriptValue REcmaProgressHandler::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RProgressHandler* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RProgressHandler(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaProgressHandler::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RProgressHandler* self = getSelf("RProgressHandler", context);
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
    RProgressHandler* REcmaProgressHandler::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RProgressHandler* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RProgressHandler >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RProgressHandler.%1(): "
                        "This object is not a RProgressHandler").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RProgressHandler* REcmaProgressHandler::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RProgressHandler* selfBase = getSelf(fName, context);
                RProgressHandler* self = dynamic_cast<RProgressHandler*>(selfBase);
                //return REcmaHelper::scriptValueTo<RProgressHandler >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RProgressHandler.%1(): "
                    "This object is not a RProgressHandler").arg(fName),
                    context);
            }

            return self;
            


        }
        