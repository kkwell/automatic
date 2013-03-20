

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaChangePropertyOperation.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaOperation.h"
                 void REcmaChangePropertyOperation::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RChangePropertyOperation*) 0)));
        protoCreated = true;
    }

    
        // primary base class ROperation:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<ROperation*>());

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
    
        // conversion for base class ROperation
        REcmaHelper::registerFunction(&engine, proto, getROperation, "getROperation");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, apply, "apply");
            
            REcmaHelper::registerFunction(&engine, proto, preview, "preview");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RChangePropertyOperation*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RChangePropertyOperation",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaChangePropertyOperation::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RChangePropertyOperation(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        2
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
                ) /* type: RPropertyTypeId */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    RPropertyTypeId*
                    ap0 =
                    qscriptvalue_cast<
                    RPropertyTypeId*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RChangePropertyOperation: Argument 0 is not of type RPropertyTypeId*.",
                               context);                    
                    }
                    RPropertyTypeId& a0 = *ap0;
                
                    // argument isCopyable or pointer
                    QVariant
                    a1 =
                    qscriptvalue_cast<
                    QVariant
                        >(
                        context->argument(
                        1
                        )
                    );
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RChangePropertyOperation
                    * cppResult =
                    new
                    RChangePropertyOperation
                    (
                    a0
        ,
    a1
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        3
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
                ) /* type: RPropertyTypeId */
            
                && (
                
                        context->argument(
                        2
                        ).isNumber()
                ) /* type: RS::EntityType */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    RPropertyTypeId*
                    ap0 =
                    qscriptvalue_cast<
                    RPropertyTypeId*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RChangePropertyOperation: Argument 0 is not of type RPropertyTypeId*.",
                               context);                    
                    }
                    RPropertyTypeId& a0 = *ap0;
                
                    // argument isCopyable or pointer
                    QVariant
                    a1 =
                    qscriptvalue_cast<
                    QVariant
                        >(
                        context->argument(
                        1
                        )
                    );
                
                    // argument isStandardType
                    RS::EntityType
                    a2 =
                    (RS::EntityType)
                    (int)
                    context->argument( 2 ).
                    toNumber();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RChangePropertyOperation
                    * cppResult =
                    new
                    RChangePropertyOperation
                    (
                    a0
        ,
    a1
        ,
    a2
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        4
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
                ) /* type: RPropertyTypeId */
            
                && (
                
                        context->argument(
                        2
                        ).isNumber()
                ) /* type: RS::EntityType */
            
                && (
                
                        context->argument(
                        3
                        ).isBool()
                ) /* type: bool */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    RPropertyTypeId*
                    ap0 =
                    qscriptvalue_cast<
                    RPropertyTypeId*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RChangePropertyOperation: Argument 0 is not of type RPropertyTypeId*.",
                               context);                    
                    }
                    RPropertyTypeId& a0 = *ap0;
                
                    // argument isCopyable or pointer
                    QVariant
                    a1 =
                    qscriptvalue_cast<
                    QVariant
                        >(
                        context->argument(
                        1
                        )
                    );
                
                    // argument isStandardType
                    RS::EntityType
                    a2 =
                    (RS::EntityType)
                    (int)
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    bool
                    a3 =
                    (bool)
                    
                    context->argument( 3 ).
                    toBool();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RChangePropertyOperation
                    * cppResult =
                    new
                    RChangePropertyOperation
                    (
                    a0
        ,
    a1
        ,
    a2
        ,
    a3
                    );
                
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
                ) /* type: RPropertyEvent */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    RPropertyEvent*
                    ap0 =
                    qscriptvalue_cast<
                    RPropertyEvent*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RChangePropertyOperation: Argument 0 is not of type RPropertyEvent*.",
                               context);                    
                    }
                    RPropertyEvent& a0 = *ap0;
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RChangePropertyOperation
                    * cppResult =
                    new
                    RChangePropertyOperation
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
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RPropertyEvent */
            
                && (
                
                        context->argument(
                        1
                        ).isBool()
                ) /* type: bool */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    RPropertyEvent*
                    ap0 =
                    qscriptvalue_cast<
                    RPropertyEvent*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RChangePropertyOperation: Argument 0 is not of type RPropertyEvent*.",
                               context);                    
                    }
                    RPropertyEvent& a0 = *ap0;
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RChangePropertyOperation
                    * cppResult =
                    new
                    RChangePropertyOperation
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
       QString::fromLatin1("RChangePropertyOperation(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaChangePropertyOperation::getROperation(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                ROperation* cppResult =
                    qscriptvalue_cast<RChangePropertyOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaChangePropertyOperation::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RChangePropertyOperation"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaChangePropertyOperation::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("ROperation");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaChangePropertyOperation::apply
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaChangePropertyOperation::apply", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaChangePropertyOperation::apply";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RChangePropertyOperation* self = 
                        getSelf("apply", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    RDocument*
                    ap0 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RChangePropertyOperation: Argument 0 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a0 = *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'RTransaction'
    RTransaction cppResult =
        
               self->apply(a0);
        // return type: RTransaction
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    RDocument*
                    ap0 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RChangePropertyOperation: Argument 0 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a0 = *ap0;
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'RTransaction'
    RTransaction cppResult =
        
               self->apply(a0
        ,
    a1);
        // return type: RTransaction
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RChangePropertyOperation.apply().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaChangePropertyOperation::apply", context, engine);
            return result;
        }
         QScriptValue
        REcmaChangePropertyOperation::preview
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaChangePropertyOperation::preview", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaChangePropertyOperation::preview";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RChangePropertyOperation* self = 
                        getSelf("preview", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RExporter */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    RDocument*
                    ap0 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RChangePropertyOperation: Argument 0 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a0 = *ap0;
                
                    // argument is reference
                    RExporter*
                    ap1 =
                    qscriptvalue_cast<
                    RExporter*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RChangePropertyOperation: Argument 1 is not of type RExporter*.",
                               context);                    
                    }
                    RExporter& a1 = *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->preview(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RChangePropertyOperation.preview().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaChangePropertyOperation::preview", context, engine);
            return result;
        }
         QScriptValue REcmaChangePropertyOperation::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RChangePropertyOperation* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RChangePropertyOperation(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaChangePropertyOperation::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RChangePropertyOperation* self = getSelf("RChangePropertyOperation", context);
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
    RChangePropertyOperation* REcmaChangePropertyOperation::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RChangePropertyOperation* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RChangePropertyOperation >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RChangePropertyOperation.%1(): "
                        "This object is not a RChangePropertyOperation").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RChangePropertyOperation* REcmaChangePropertyOperation::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RChangePropertyOperation* selfBase = getSelf(fName, context);
                RChangePropertyOperation* self = dynamic_cast<RChangePropertyOperation*>(selfBase);
                //return REcmaHelper::scriptValueTo<RChangePropertyOperation >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RChangePropertyOperation.%1(): "
                    "This object is not a RChangePropertyOperation").arg(fName),
                    context);
            }

            return self;
            


        }
        