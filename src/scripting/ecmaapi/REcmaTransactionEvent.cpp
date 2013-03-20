

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaTransactionEvent.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaTransactionEvent::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RTransactionEvent*) 0)));
        protoCreated = true;
    }

    
        // primary base class QEvent:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QEvent*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QEvent
        REcmaHelper::registerFunction(&engine, proto, getQEvent, "getQEvent");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, hasOnlyChanges, "hasOnlyChanges");
            
            REcmaHelper::registerFunction(&engine, proto, getEntityTypeFilter, "getEntityTypeFilter");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RTransactionEvent*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RTransactionEvent",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaTransactionEvent::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTransactionEvent(): Did you forget to construct with 'new'?"),
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
            RTransactionEvent
                    * cppResult =
                    new
                    RTransactionEvent
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isBool()
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

    // call C++ constructor:
    
            // non-copyable class:
            RTransactionEvent
                    * cppResult =
                    new
                    RTransactionEvent
                    (
                    a0
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        2
                && (
                
                        context->argument(
                        0
                        ).isBool()
                ) /* type: bool */
            
                && (
                
                        context->argument(
                        1
                        ).isNumber()
                ) /* type: RS::EntityType */
            
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
                    // argument isStandardType
                    RS::EntityType
                    a1 =
                    (RS::EntityType)
                    (int)
                    context->argument( 1 ).
                    toNumber();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RTransactionEvent
                    * cppResult =
                    new
                    RTransactionEvent
                    (
                    a0
        ,
    a1
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTransactionEvent(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaTransactionEvent::getQEvent(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QEvent* cppResult =
                    qscriptvalue_cast<RTransactionEvent*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaTransactionEvent::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RTransactionEvent"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaTransactionEvent::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QEvent");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaTransactionEvent::hasOnlyChanges
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTransactionEvent::hasOnlyChanges", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTransactionEvent::hasOnlyChanges";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTransactionEvent* self = 
                        getSelf("hasOnlyChanges", context);
                  

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
        
               self->hasOnlyChanges();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTransactionEvent.hasOnlyChanges().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTransactionEvent::hasOnlyChanges", context, engine);
            return result;
        }
         QScriptValue
        REcmaTransactionEvent::getEntityTypeFilter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTransactionEvent::getEntityTypeFilter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTransactionEvent::getEntityTypeFilter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTransactionEvent* self = 
                        getSelf("getEntityTypeFilter", context);
                  

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
    // return type 'RS::EntityType'
    RS::EntityType cppResult =
        
               self->getEntityTypeFilter();
        // return type: RS::EntityType
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTransactionEvent.getEntityTypeFilter().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTransactionEvent::getEntityTypeFilter", context, engine);
            return result;
        }
         QScriptValue REcmaTransactionEvent::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RTransactionEvent* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RTransactionEvent(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaTransactionEvent::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RTransactionEvent* self = getSelf("RTransactionEvent", context);
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
    RTransactionEvent* REcmaTransactionEvent::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RTransactionEvent* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RTransactionEvent >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RTransactionEvent.%1(): "
                        "This object is not a RTransactionEvent").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RTransactionEvent* REcmaTransactionEvent::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RTransactionEvent* selfBase = getSelf(fName, context);
                RTransactionEvent* self = dynamic_cast<RTransactionEvent*>(selfBase);
                //return REcmaHelper::scriptValueTo<RTransactionEvent >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RTransactionEvent.%1(): "
                    "This object is not a RTransactionEvent").arg(fName),
                    context);
            }

            return self;
            


        }
        