

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaFileImporter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaImporter.h"
                 void REcmaFileImporter::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RFileImporter*) 0)));
        protoCreated = true;
    }

    
        // primary base class RImporter:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RImporter*>());

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
    
        // conversion for base class RImporter
        REcmaHelper::registerFunction(&engine, proto, getRImporter, "getRImporter");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, importFile, "importFile");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RFileImporter*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RFileImporter",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaFileImporter::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RFileImporter: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaFileImporter::getRImporter(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RImporter* cppResult =
                    qscriptvalue_cast<RFileImporter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaFileImporter::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RFileImporter"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaFileImporter::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RImporter");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaFileImporter::importFile
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFileImporter::importFile", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileImporter::importFile";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFileImporter* self = 
                        getSelf("importFile", context);
                  

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
    // return type 'bool'
    bool cppResult =
        
               self->importFile(a0);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileImporter.importFile().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFileImporter::importFile", context, engine);
            return result;
        }
         QScriptValue REcmaFileImporter::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RFileImporter* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RFileImporter(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaFileImporter::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RFileImporter* self = getSelf("RFileImporter", context);
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
    RFileImporter* REcmaFileImporter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RFileImporter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RFileImporter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RFileImporter.%1(): "
                        "This object is not a RFileImporter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RFileImporter* REcmaFileImporter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RFileImporter* selfBase = getSelf(fName, context);
                RFileImporter* self = dynamic_cast<RFileImporter*>(selfBase);
                //return REcmaHelper::scriptValueTo<RFileImporter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RFileImporter.%1(): "
                    "This object is not a RFileImporter").arg(fName),
                    context);
            }

            return self;
            


        }
        