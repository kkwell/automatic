

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaFileExporter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaExporter.h"
                 void REcmaFileExporter::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RFileExporter*) 0)));
        protoCreated = true;
    }

    
        // primary base class RExporter:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RExporter*>());

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
    
        // conversion for base class RExporter
        REcmaHelper::registerFunction(&engine, proto, getRExporter, "getRExporter");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getCorrectedFileName, "getCorrectedFileName");
            
            REcmaHelper::registerFunction(&engine, proto, exportFile, "exportFile");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RFileExporter*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RFileExporter",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaFileExporter::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RFileExporter: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaFileExporter::getRExporter(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RExporter* cppResult =
                    qscriptvalue_cast<RFileExporter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaFileExporter::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RFileExporter"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaFileExporter::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RExporter");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaFileExporter::getCorrectedFileName
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFileExporter::getCorrectedFileName", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileExporter::getCorrectedFileName";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFileExporter* self = 
                        getSelf("getCorrectedFileName", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        
               self->getCorrectedFileName(a0
        ,
    a1);
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileExporter.getCorrectedFileName().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFileExporter::getCorrectedFileName", context, engine);
            return result;
        }
         QScriptValue
        REcmaFileExporter::exportFile
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFileExporter::exportFile", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFileExporter::exportFile";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFileExporter* self = 
                        getSelf("exportFile", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->exportFile(a0
        ,
    a1);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
     && (
            context->argument(2).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
                    // argument isStandardType
                    bool
                    a2 =
                    (bool)
                    
                    context->argument( 2 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->exportFile(a0
        ,
    a1
        ,
    a2);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFileExporter.exportFile().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFileExporter::exportFile", context, engine);
            return result;
        }
         QScriptValue REcmaFileExporter::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RFileExporter* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RFileExporter(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaFileExporter::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RFileExporter* self = getSelf("RFileExporter", context);
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
    RFileExporter* REcmaFileExporter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RFileExporter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RFileExporter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RFileExporter.%1(): "
                        "This object is not a RFileExporter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RFileExporter* REcmaFileExporter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RFileExporter* selfBase = getSelf(fName, context);
                RFileExporter* self = dynamic_cast<RFileExporter*>(selfBase);
                //return REcmaHelper::scriptValueTo<RFileExporter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RFileExporter.%1(): "
                    "This object is not a RFileExporter").arg(fName),
                    context);
            }

            return self;
            


        }
        