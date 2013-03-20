

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaSelectionChangedEvent.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaSelectionChangedEvent::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RSelectionChangedEvent*) 0)));
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
    
        engine.setDefaultPrototype(
            qMetaTypeId<RSelectionChangedEvent*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RSelectionChangedEvent",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaSelectionChangedEvent::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSelectionChangedEvent(): Did you forget to construct with 'new'?"),
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
            RSelectionChangedEvent
                    * cppResult =
                    new
                    RSelectionChangedEvent
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSelectionChangedEvent(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaSelectionChangedEvent::getQEvent(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QEvent* cppResult =
                    qscriptvalue_cast<RSelectionChangedEvent*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaSelectionChangedEvent::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RSelectionChangedEvent"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaSelectionChangedEvent::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QEvent");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue REcmaSelectionChangedEvent::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RSelectionChangedEvent* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RSelectionChangedEvent(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaSelectionChangedEvent::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RSelectionChangedEvent* self = getSelf("RSelectionChangedEvent", context);
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
    RSelectionChangedEvent* REcmaSelectionChangedEvent::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RSelectionChangedEvent* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RSelectionChangedEvent >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RSelectionChangedEvent.%1(): "
                        "This object is not a RSelectionChangedEvent").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RSelectionChangedEvent* REcmaSelectionChangedEvent::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RSelectionChangedEvent* selfBase = getSelf(fName, context);
                RSelectionChangedEvent* self = dynamic_cast<RSelectionChangedEvent*>(selfBase);
                //return REcmaHelper::scriptValueTo<RSelectionChangedEvent >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RSelectionChangedEvent.%1(): "
                    "This object is not a RSelectionChangedEvent").arg(fName),
                    context);
            }

            return self;
            


        }
        