

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaSelectionListenerAdapter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaSelectionListener.h"
                 void REcmaSelectionListenerAdapter::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RSelectionListenerAdapter*) 0)));
        protoCreated = true;
    }

    
        // primary base class QObject:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QObject*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        REcmaSelectionListener::init(engine, proto);
          
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QObject
        REcmaHelper::registerFunction(&engine, proto, getQObject, "getQObject");
        
        // conversion for base class RSelectionListener
        REcmaHelper::registerFunction(&engine, proto, getRSelectionListener, "getRSelectionListener");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

        // properties of secondary base class RSelectionListener:
        

        // methods of secondary base class RSelectionListener:
        

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, updateSelectionListener, "updateSelectionListener");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RSelectionListenerAdapter*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RSelectionListenerAdapter*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RSelectionListenerAdapter",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaSelectionListenerAdapter::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSelectionListenerAdapter(): Did you forget to construct with 'new'?"),
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
            RSelectionListenerAdapter
                    * cppResult =
                    new
                    RSelectionListenerAdapter
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult);
                
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                ) /* type: QObject * */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QObject *
            a0 =
            qobject_cast<
            QObject *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RSelectionListenerAdapter
                    * cppResult =
                    new
                    RSelectionListenerAdapter
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSelectionListenerAdapter(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaSelectionListenerAdapter::getQObject(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QObject* cppResult =
                    qscriptvalue_cast<RSelectionListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaSelectionListenerAdapter::getRSelectionListener(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RSelectionListener* cppResult =
                    qscriptvalue_cast<RSelectionListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaSelectionListenerAdapter::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RSelectionListenerAdapter"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaSelectionListenerAdapter::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QObject");
    
        list.append("RSelectionListener");
    

        return qScriptValueFromSequence(engine, list);
    }
    
        // properties of secondary base class RSelectionListener:
        

        // methods of secondary base class RSelectionListener:
        

    // properties:
    

    // public methods:
     QScriptValue
        REcmaSelectionListenerAdapter::updateSelectionListener
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSelectionListenerAdapter::updateSelectionListener", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSelectionListenerAdapter::updateSelectionListener";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSelectionListenerAdapter* self = 
                        getSelf("updateSelectionListener", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocumentInterface * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocumentInterface * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocumentInterface >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RSelectionListenerAdapter: Argument 0 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateSelectionListener(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSelectionListenerAdapter.updateSelectionListener().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSelectionListenerAdapter::updateSelectionListener", context, engine);
            return result;
        }
         QScriptValue REcmaSelectionListenerAdapter::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RSelectionListenerAdapter* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RSelectionListenerAdapter(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaSelectionListenerAdapter::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RSelectionListenerAdapter* self = getSelf("RSelectionListenerAdapter", context);
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
    RSelectionListenerAdapter* REcmaSelectionListenerAdapter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RSelectionListenerAdapter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RSelectionListenerAdapter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RSelectionListenerAdapter.%1(): "
                        "This object is not a RSelectionListenerAdapter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RSelectionListenerAdapter* REcmaSelectionListenerAdapter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RSelectionListenerAdapter* selfBase = getSelf(fName, context);
                RSelectionListenerAdapter* self = dynamic_cast<RSelectionListenerAdapter*>(selfBase);
                //return REcmaHelper::scriptValueTo<RSelectionListenerAdapter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RSelectionListenerAdapter.%1(): "
                    "This object is not a RSelectionListenerAdapter").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RSelectionListenerAdapter*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RSelectionListenerAdapter*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RSelectionListenerAdapter*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    