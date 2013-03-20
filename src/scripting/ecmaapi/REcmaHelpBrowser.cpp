

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaHelpBrowser.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaSingleton.h"
                 void REcmaHelpBrowser::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RHelpBrowser*) 0)));
        protoCreated = true;
    }

    
        // primary base class QObject:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QObject*>());

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
    
        // conversion for base class QObject
        REcmaHelper::registerFunction(&engine, proto, getQObject, "getQObject");
        
        // conversion for base class RSingleton
        REcmaHelper::registerFunction(&engine, proto, getRSingleton, "getRSingleton");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, showDocumentation, "showDocumentation");
            
            REcmaHelper::registerFunction(&engine, proto, error, "error");
            
            REcmaHelper::registerFunction(&engine, proto, readStandardOutput, "readStandardOutput");
            
            REcmaHelper::registerFunction(&engine, proto, readStandardError, "readStandardError");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RHelpBrowser*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, getInstance, "getInstance");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RHelpBrowser",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaHelpBrowser::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RHelpBrowser(): Did you forget to construct with 'new'?"),
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
            RHelpBrowser
                    * cppResult =
                    new
                    RHelpBrowser
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RHelpBrowser(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaHelpBrowser::getQObject(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QObject* cppResult =
                    qscriptvalue_cast<RHelpBrowser*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaHelpBrowser::getRSingleton(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RSingleton* cppResult =
                    qscriptvalue_cast<RHelpBrowser*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaHelpBrowser::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RHelpBrowser"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaHelpBrowser::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QObject");
    
        list.append("RSingleton");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaHelpBrowser::showDocumentation
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaHelpBrowser::showDocumentation", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaHelpBrowser::showDocumentation";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RHelpBrowser* self = 
                        getSelf("showDocumentation", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
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
    
               self->showDocumentation(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RHelpBrowser.showDocumentation().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaHelpBrowser::showDocumentation", context, engine);
            return result;
        }
         QScriptValue
        REcmaHelpBrowser::getInstance
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaHelpBrowser::getInstance", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaHelpBrowser::getInstance";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RHelpBrowser &'
    RHelpBrowser & cppResult =
        RHelpBrowser::
       getInstance();
        // return type: RHelpBrowser &
                // reference
                result = engine->newVariant(
                QVariant::fromValue(&cppResult));
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RHelpBrowser.getInstance().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaHelpBrowser::getInstance", context, engine);
            return result;
        }
         QScriptValue
        REcmaHelpBrowser::error
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaHelpBrowser::error", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaHelpBrowser::error";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RHelpBrowser* self = 
                        getSelf("error", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QProcess::ProcessError */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    QProcess::ProcessError*
                    ap0 =
                    qscriptvalue_cast<
                    QProcess::ProcessError*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RHelpBrowser: Argument 0 is not of type QProcess::ProcessError*.",
                               context);                    
                    }
                    QProcess::ProcessError& a0 = *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->error(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RHelpBrowser.error().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaHelpBrowser::error", context, engine);
            return result;
        }
         QScriptValue
        REcmaHelpBrowser::readStandardOutput
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaHelpBrowser::readStandardOutput", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaHelpBrowser::readStandardOutput";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RHelpBrowser* self = 
                        getSelf("readStandardOutput", context);
                  

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
    
               self->readStandardOutput();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RHelpBrowser.readStandardOutput().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaHelpBrowser::readStandardOutput", context, engine);
            return result;
        }
         QScriptValue
        REcmaHelpBrowser::readStandardError
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaHelpBrowser::readStandardError", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaHelpBrowser::readStandardError";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RHelpBrowser* self = 
                        getSelf("readStandardError", context);
                  

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
    
               self->readStandardError();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RHelpBrowser.readStandardError().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaHelpBrowser::readStandardError", context, engine);
            return result;
        }
         QScriptValue REcmaHelpBrowser::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RHelpBrowser* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RHelpBrowser(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaHelpBrowser::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RHelpBrowser* self = getSelf("RHelpBrowser", context);
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
    RHelpBrowser* REcmaHelpBrowser::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RHelpBrowser* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RHelpBrowser >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RHelpBrowser.%1(): "
                        "This object is not a RHelpBrowser").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RHelpBrowser* REcmaHelpBrowser::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RHelpBrowser* selfBase = getSelf(fName, context);
                RHelpBrowser* self = dynamic_cast<RHelpBrowser*>(selfBase);
                //return REcmaHelper::scriptValueTo<RHelpBrowser >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RHelpBrowser.%1(): "
                    "This object is not a RHelpBrowser").arg(fName),
                    context);
            }

            return self;
            


        }
        