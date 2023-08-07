// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #include "REcmaLineweight.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaLineweight::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RLineweight*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    
    // copy:
    REcmaHelper::registerFunction(&engine, proto, copy, "copy");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RLineweight*>(), *proto);

        
                engine.setDefaultPrototype(qMetaTypeId<
                RLineweight
                > (), *proto);
            
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, getList, "getList");
            
            REcmaHelper::registerFunction(&engine, &ctor, getIcon, "getIcon");
            
            REcmaHelper::registerFunction(&engine, &ctor, getName, "getName");
            
            REcmaHelper::registerFunction(&engine, &ctor, getClosestMatch, "getClosestMatch");
            

    // static properties:
    

    // enum values:
    

    ctor.setProperty("Weight000",
    QScriptValue(RLineweight::Weight000),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight005",
    QScriptValue(RLineweight::Weight005),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight009",
    QScriptValue(RLineweight::Weight009),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight013",
    QScriptValue(RLineweight::Weight013),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight015",
    QScriptValue(RLineweight::Weight015),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight018",
    QScriptValue(RLineweight::Weight018),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight020",
    QScriptValue(RLineweight::Weight020),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight025",
    QScriptValue(RLineweight::Weight025),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight030",
    QScriptValue(RLineweight::Weight030),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight035",
    QScriptValue(RLineweight::Weight035),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight040",
    QScriptValue(RLineweight::Weight040),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight050",
    QScriptValue(RLineweight::Weight050),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight053",
    QScriptValue(RLineweight::Weight053),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight060",
    QScriptValue(RLineweight::Weight060),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight070",
    QScriptValue(RLineweight::Weight070),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight080",
    QScriptValue(RLineweight::Weight080),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight090",
    QScriptValue(RLineweight::Weight090),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight100",
    QScriptValue(RLineweight::Weight100),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight106",
    QScriptValue(RLineweight::Weight106),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight120",
    QScriptValue(RLineweight::Weight120),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight140",
    QScriptValue(RLineweight::Weight140),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight158",
    QScriptValue(RLineweight::Weight158),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight200",
    QScriptValue(RLineweight::Weight200),
    QScriptValue::ReadOnly);


    ctor.setProperty("Weight211",
    QScriptValue(RLineweight::Weight211),
    QScriptValue::ReadOnly);


    ctor.setProperty("WeightByLayer",
    QScriptValue(RLineweight::WeightByLayer),
    QScriptValue::ReadOnly);


    ctor.setProperty("WeightByBlock",
    QScriptValue(RLineweight::WeightByBlock),
    QScriptValue::ReadOnly);


    ctor.setProperty("WeightByLwDefault",
    QScriptValue(RLineweight::WeightByLwDefault),
    QScriptValue::ReadOnly);


    ctor.setProperty("WeightInvalid",
    QScriptValue(RLineweight::WeightInvalid),
    QScriptValue::ReadOnly);


    // enum conversions:
    
    qScriptRegisterMetaType<RLineweight::Lineweight>(
        &engine,
        toScriptValueEnumLineweight,
        fromScriptValueEnumLineweight,
        ctor.property(QString::fromLatin1("prototype"))
    );

        
    // init class:
    engine.globalObject().setProperty("RLineweight",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaLineweight::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RLineweight(): Did you forget to construct with 'new'?"),
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
    
            // copyable class:
            RLineweight
                    cppResult;
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RLineweight(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaLineweight::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RLineweight"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaLineweight::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaLineweight::getList
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLineweight::getList", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLineweight::getList";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
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
    // return type 'QList < QPair < QString , RLineweight::Lineweight > >'
    QList < QPair < QString , RLineweight::Lineweight > > cppResult =
        RLineweight::
       getList(a0);
        // return type: QList < QPair < QString , RLineweight::Lineweight > >
                // List of Pairs of ...:
                result = REcmaHelper::pairListToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isBool()
        ) /* type: bool */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'QList < QPair < QString , RLineweight::Lineweight > >'
    QList < QPair < QString , RLineweight::Lineweight > > cppResult =
        RLineweight::
       getList(a0
        ,
    a1);
        // return type: QList < QPair < QString , RLineweight::Lineweight > >
                // List of Pairs of ...:
                result = REcmaHelper::pairListToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLineweight.getList().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLineweight::getList", context, engine);
            return result;
        }
         QScriptValue
        REcmaLineweight::getIcon
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLineweight::getIcon", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLineweight::getIcon";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: RLineweight::Lineweight */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    RLineweight::Lineweight
                    a0 =
                    (RLineweight::Lineweight)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'QIcon'
    QIcon cppResult =
        RLineweight::
       getIcon(a0);
        // return type: QIcon
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isNumber()
        ) /* type: RLineweight::Lineweight */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: QSize */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    RLineweight::Lineweight
                    a0 =
                    (RLineweight::Lineweight)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
                    // argument is reference
                    QSize*
                    ap1 =
                    qscriptvalue_cast<
                    QSize*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RLineweight: Argument 1 is not of type QSize*.",
                               context);                    
                    }
                    QSize& a1 = *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'QIcon'
    QIcon cppResult =
        RLineweight::
       getIcon(a0
        ,
    a1);
        // return type: QIcon
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLineweight.getIcon().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLineweight::getIcon", context, engine);
            return result;
        }
         QScriptValue
        REcmaLineweight::getName
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLineweight::getName", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLineweight::getName";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: RLineweight::Lineweight */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    RLineweight::Lineweight
                    a0 =
                    (RLineweight::Lineweight)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        RLineweight::
       getName(a0);
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLineweight.getName().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLineweight::getName", context, engine);
            return result;
        }
         QScriptValue
        REcmaLineweight::getClosestMatch
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLineweight::getClosestMatch", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLineweight::getClosestMatch";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'RLineweight::Lineweight'
    RLineweight::Lineweight cppResult =
        RLineweight::
       getClosestMatch(a0);
        // return type: RLineweight::Lineweight
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLineweight.getClosestMatch().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLineweight::getClosestMatch", context, engine);
            return result;
        }
         QScriptValue REcmaLineweight::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RLineweight* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RLineweight(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaLineweight::copy
    (QScriptContext *context, QScriptEngine *engine)
    
    {
        RLineweight cp = qscriptvalue_cast<RLineweight>(context->thisObject());
        return qScriptValueFromValue(engine, cp);
    }
     QScriptValue REcmaLineweight::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RLineweight* self = getSelf("RLineweight", context);
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
    RLineweight* REcmaLineweight::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RLineweight* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RLineweight >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RLineweight.%1(): "
                        "This object is not a RLineweight").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RLineweight* REcmaLineweight::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RLineweight* selfBase = getSelf(fName, context);
                RLineweight* self = dynamic_cast<RLineweight*>(selfBase);
                //return REcmaHelper::scriptValueTo<RLineweight >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RLineweight.%1(): "
                    "This object is not a RLineweight").arg(fName),
                    context);
            }

            return self;
            


        }
         QScriptValue REcmaLineweight::toScriptValueEnumLineweight(QScriptEngine* engine, const RLineweight::Lineweight& value)
    
        {
            return QScriptValue(engine, (int)value);
        }
         void REcmaLineweight::fromScriptValueEnumLineweight(const QScriptValue& value, RLineweight::Lineweight& out)
    
        {
            out = qvariant_cast<RLineweight::Lineweight>(value.toVariant());
        }
        