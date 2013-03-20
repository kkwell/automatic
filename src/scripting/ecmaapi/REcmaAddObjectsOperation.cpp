

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaAddObjectsOperation.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RObject.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaOperation.h"
                 void REcmaAddObjectsOperation::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RAddObjectsOperation*) 0)));
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
    
            REcmaHelper::registerFunction(&engine, proto, addObject, "addObject");
            
            REcmaHelper::registerFunction(&engine, proto, apply, "apply");
            
            REcmaHelper::registerFunction(&engine, proto, getPreviewCounter, "getPreviewCounter");
            
            REcmaHelper::registerFunction(&engine, proto, setLimitPreview, "setLimitPreview");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RAddObjectsOperation*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RAddObjectsOperation",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaAddObjectsOperation::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RAddObjectsOperation(): Did you forget to construct with 'new'?"),
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
            RAddObjectsOperation
                    * cppResult =
                    new
                    RAddObjectsOperation
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
            RAddObjectsOperation
                    * cppResult =
                    new
                    RAddObjectsOperation
                    (
                    a0
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isArray()
                ) /* type: QList < QSharedPointer < RObject > > */
            
    ){
    // prepare arguments:
    
                    // argument isArray
                    QList < QSharedPointer < RObject > >
                    a0;
                    REcmaHelper::fromScriptValue(
                        engine,
                        context->argument(0),
                        a0
                    );
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RAddObjectsOperation
                    * cppResult =
                    new
                    RAddObjectsOperation
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
                        ).isArray()
                ) /* type: QList < QSharedPointer < RObject > > */
            
                && (
                
                        context->argument(
                        1
                        ).isBool()
                ) /* type: bool */
            
    ){
    // prepare arguments:
    
                    // argument isArray
                    QList < QSharedPointer < RObject > >
                    a0;
                    REcmaHelper::fromScriptValue(
                        engine,
                        context->argument(0),
                        a0
                    );
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RAddObjectsOperation
                    * cppResult =
                    new
                    RAddObjectsOperation
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
                        ).isArray()
                ) /* type: QList < QSharedPointer < RObject > > */
            
                && (
                
                        context->argument(
                        1
                        ).isBool()
                ) /* type: bool */
            
                && (
                
                        context->argument(
                        2
                        ).isBool()
                ) /* type: bool */
            
    ){
    // prepare arguments:
    
                    // argument isArray
                    QList < QSharedPointer < RObject > >
                    a0;
                    REcmaHelper::fromScriptValue(
                        engine,
                        context->argument(0),
                        a0
                    );
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
                    // argument isStandardType
                    bool
                    a2 =
                    (bool)
                    
                    context->argument( 2 ).
                    toBool();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RAddObjectsOperation
                    * cppResult =
                    new
                    RAddObjectsOperation
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

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RAddObjectsOperation(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaAddObjectsOperation::getROperation(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                ROperation* cppResult =
                    qscriptvalue_cast<RAddObjectsOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaAddObjectsOperation::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RAddObjectsOperation"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaAddObjectsOperation::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("ROperation");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaAddObjectsOperation::addObject
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAddObjectsOperation::addObject", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAddObjectsOperation::addObject";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAddObjectsOperation* self = 
                        getSelf("addObject", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QSharedPointer < RObject > */
    
    ){
    // prepare arguments:
    
                    // argument is SharedPointer
                    QSharedPointer < RObject > 
                    a0;

                    // argument might be a simple pointer:
                     RObject * o0 = 
                    qscriptvalue_cast < RObject * > (context->argument(0));

                    if (o0!=NULL) {
                        a0 =
                        QSharedPointer < RObject >(o0->clone());
                    }
                    else {
                        // qscriptvalue_cast to QSharedPointer<BaseClass> does not work
                        QSharedPointer < RObject >*
                        p0;

                        p0 =
                        qscriptvalue_cast <QSharedPointer < RObject >* > (context->argument(0));

                        if (p0==NULL) {
                           return REcmaHelper::throwError("RAddObjectsOperation: Argument 0 is not of type  RObject .", context);                    
                        }

                        a0 = *p0;

                           //return REcmaHelper::throwError("RAddObjectsOperation: Argument 0 is not of type  RObject .",
                           //    context);                    
                    }

                    //QSharedPointer < RObject > 
                    //a0 =
                    //QSharedPointer < RObject >(o0->clone());
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->addObject(a0);
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QSharedPointer < RObject > */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument is SharedPointer
                    QSharedPointer < RObject > 
                    a0;

                    // argument might be a simple pointer:
                     RObject * o0 = 
                    qscriptvalue_cast < RObject * > (context->argument(0));

                    if (o0!=NULL) {
                        a0 =
                        QSharedPointer < RObject >(o0->clone());
                    }
                    else {
                        // qscriptvalue_cast to QSharedPointer<BaseClass> does not work
                        QSharedPointer < RObject >*
                        p0;

                        p0 =
                        qscriptvalue_cast <QSharedPointer < RObject >* > (context->argument(0));

                        if (p0==NULL) {
                           return REcmaHelper::throwError("RAddObjectsOperation: Argument 0 is not of type  RObject .", context);                    
                        }

                        a0 = *p0;

                           //return REcmaHelper::throwError("RAddObjectsOperation: Argument 0 is not of type  RObject .",
                           //    context);                    
                    }

                    //QSharedPointer < RObject > 
                    //a0 =
                    //QSharedPointer < RObject >(o0->clone());
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->addObject(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAddObjectsOperation.addObject().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAddObjectsOperation::addObject", context, engine);
            return result;
        }
         QScriptValue
        REcmaAddObjectsOperation::apply
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAddObjectsOperation::apply", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAddObjectsOperation::apply";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAddObjectsOperation* self = 
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
                           return REcmaHelper::throwError("RAddObjectsOperation: Argument 0 is not of type RDocument*.",
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
                           return REcmaHelper::throwError("RAddObjectsOperation: Argument 0 is not of type RDocument*.",
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
               return REcmaHelper::throwError("Wrong number/types of arguments for RAddObjectsOperation.apply().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAddObjectsOperation::apply", context, engine);
            return result;
        }
         QScriptValue
        REcmaAddObjectsOperation::getPreviewCounter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAddObjectsOperation::getPreviewCounter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAddObjectsOperation::getPreviewCounter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAddObjectsOperation* self = 
                        getSelf("getPreviewCounter", context);
                  

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
    // return type 'int'
    int cppResult =
        
               self->getPreviewCounter();
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAddObjectsOperation.getPreviewCounter().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAddObjectsOperation::getPreviewCounter", context, engine);
            return result;
        }
         QScriptValue
        REcmaAddObjectsOperation::setLimitPreview
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaAddObjectsOperation::setLimitPreview", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaAddObjectsOperation::setLimitPreview";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RAddObjectsOperation* self = 
                        getSelf("setLimitPreview", context);
                  

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
    
               self->setLimitPreview(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RAddObjectsOperation.setLimitPreview().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaAddObjectsOperation::setLimitPreview", context, engine);
            return result;
        }
         QScriptValue REcmaAddObjectsOperation::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RAddObjectsOperation* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RAddObjectsOperation(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaAddObjectsOperation::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RAddObjectsOperation* self = getSelf("RAddObjectsOperation", context);
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
    RAddObjectsOperation* REcmaAddObjectsOperation::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RAddObjectsOperation* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RAddObjectsOperation >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RAddObjectsOperation.%1(): "
                        "This object is not a RAddObjectsOperation").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RAddObjectsOperation* REcmaAddObjectsOperation::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RAddObjectsOperation* selfBase = getSelf(fName, context);
                RAddObjectsOperation* self = dynamic_cast<RAddObjectsOperation*>(selfBase);
                //return REcmaHelper::scriptValueTo<RAddObjectsOperation >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RAddObjectsOperation.%1(): "
                    "This object is not a RAddObjectsOperation").arg(fName),
                    context);
            }

            return self;
            


        }
        