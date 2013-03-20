

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaCommandEvent.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaCommandEvent::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RCommandEvent*) 0)));
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
    
            REcmaHelper::registerFunction(&engine, proto, getCommand, "getCommand");
            
            REcmaHelper::registerFunction(&engine, proto, accept, "accept");
            
            REcmaHelper::registerFunction(&engine, proto, isAccepted, "isAccepted");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RCommandEvent*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RCommandEvent",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaCommandEvent::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RCommandEvent(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isString()
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

    // call C++ constructor:
    
            // non-copyable class:
            RCommandEvent
                    * cppResult =
                    new
                    RCommandEvent
                    (
                    a0
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RCommandEvent(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaCommandEvent::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RCommandEvent"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaCommandEvent::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaCommandEvent::getCommand
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCommandEvent::getCommand", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCommandEvent::getCommand";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCommandEvent* self = 
                        getSelf("getCommand", context);
                  

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
        
               self->getCommand();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCommandEvent.getCommand().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCommandEvent::getCommand", context, engine);
            return result;
        }
         QScriptValue
        REcmaCommandEvent::accept
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCommandEvent::accept", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCommandEvent::accept";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCommandEvent* self = 
                        getSelf("accept", context);
                  

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
    
               self->accept();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCommandEvent.accept().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCommandEvent::accept", context, engine);
            return result;
        }
         QScriptValue
        REcmaCommandEvent::isAccepted
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCommandEvent::isAccepted", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCommandEvent::isAccepted";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCommandEvent* self = 
                        getSelf("isAccepted", context);
                  

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
        
               self->isAccepted();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCommandEvent.isAccepted().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCommandEvent::isAccepted", context, engine);
            return result;
        }
         QScriptValue REcmaCommandEvent::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RCommandEvent* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RCommandEvent(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaCommandEvent::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RCommandEvent* self = getSelf("RCommandEvent", context);
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
    RCommandEvent* REcmaCommandEvent::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RCommandEvent* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RCommandEvent >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RCommandEvent.%1(): "
                        "This object is not a RCommandEvent").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RCommandEvent* REcmaCommandEvent::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RCommandEvent* selfBase = getSelf(fName, context);
                RCommandEvent* self = dynamic_cast<RCommandEvent*>(selfBase);
                //return REcmaHelper::scriptValueTo<RCommandEvent >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RCommandEvent.%1(): "
                    "This object is not a RCommandEvent").arg(fName),
                    context);
            }

            return self;
            


        }
        