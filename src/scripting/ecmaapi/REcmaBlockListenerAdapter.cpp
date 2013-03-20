

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaBlockListenerAdapter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaBlockListener.h"
                 void REcmaBlockListenerAdapter::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RBlockListenerAdapter*) 0)));
        protoCreated = true;
    }

    
        // primary base class QObject:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QObject*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        REcmaBlockListener::init(engine, proto);
          
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QObject
        REcmaHelper::registerFunction(&engine, proto, getQObject, "getQObject");
        
        // conversion for base class RBlockListener
        REcmaHelper::registerFunction(&engine, proto, getRBlockListener, "getRBlockListener");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

        // properties of secondary base class RBlockListener:
        

        // methods of secondary base class RBlockListener:
        

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, updateBlocks, "updateBlocks");
            
            REcmaHelper::registerFunction(&engine, proto, clearBlocks, "clearBlocks");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RBlockListenerAdapter*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RBlockListenerAdapter*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RBlockListenerAdapter",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaBlockListenerAdapter::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RBlockListenerAdapter(): Did you forget to construct with 'new'?"),
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
            RBlockListenerAdapter
                    * cppResult =
                    new
                    RBlockListenerAdapter
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
            RBlockListenerAdapter
                    * cppResult =
                    new
                    RBlockListenerAdapter
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RBlockListenerAdapter(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaBlockListenerAdapter::getQObject(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QObject* cppResult =
                    qscriptvalue_cast<RBlockListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaBlockListenerAdapter::getRBlockListener(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RBlockListener* cppResult =
                    qscriptvalue_cast<RBlockListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaBlockListenerAdapter::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RBlockListenerAdapter"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaBlockListenerAdapter::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QObject");
    
        list.append("RBlockListener");
    

        return qScriptValueFromSequence(engine, list);
    }
    
        // properties of secondary base class RBlockListener:
        

        // methods of secondary base class RBlockListener:
        

    // properties:
    

    // public methods:
     QScriptValue
        REcmaBlockListenerAdapter::updateBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaBlockListenerAdapter::updateBlocks", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaBlockListenerAdapter::updateBlocks";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RBlockListenerAdapter* self = 
                        getSelf("updateBlocks", context);
                  

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
                        return REcmaHelper::throwError("RBlockListenerAdapter: Argument 0 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateBlocks(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RBlockListenerAdapter.updateBlocks().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaBlockListenerAdapter::updateBlocks", context, engine);
            return result;
        }
         QScriptValue
        REcmaBlockListenerAdapter::clearBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaBlockListenerAdapter::clearBlocks", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaBlockListenerAdapter::clearBlocks";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RBlockListenerAdapter* self = 
                        getSelf("clearBlocks", context);
                  

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
    
               self->clearBlocks();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RBlockListenerAdapter.clearBlocks().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaBlockListenerAdapter::clearBlocks", context, engine);
            return result;
        }
         QScriptValue REcmaBlockListenerAdapter::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RBlockListenerAdapter* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RBlockListenerAdapter(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaBlockListenerAdapter::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RBlockListenerAdapter* self = getSelf("RBlockListenerAdapter", context);
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
    RBlockListenerAdapter* REcmaBlockListenerAdapter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RBlockListenerAdapter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RBlockListenerAdapter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RBlockListenerAdapter.%1(): "
                        "This object is not a RBlockListenerAdapter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RBlockListenerAdapter* REcmaBlockListenerAdapter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RBlockListenerAdapter* selfBase = getSelf(fName, context);
                RBlockListenerAdapter* self = dynamic_cast<RBlockListenerAdapter*>(selfBase);
                //return REcmaHelper::scriptValueTo<RBlockListenerAdapter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RBlockListenerAdapter.%1(): "
                    "This object is not a RBlockListenerAdapter").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RBlockListenerAdapter*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RBlockListenerAdapter*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RBlockListenerAdapter*
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
    