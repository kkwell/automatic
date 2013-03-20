

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaMathLineEdit.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaMathLineEdit::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RMathLineEdit*) 0)));
        protoCreated = true;
    }

    
        // primary base class QLineEdit:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QLineEdit*>());

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
    
        // conversion for base class QLineEdit
        REcmaHelper::registerFunction(&engine, proto, getQLineEdit, "getQLineEdit");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, isAngle, "isAngle");
            
            REcmaHelper::registerFunction(&engine, proto, setAngle, "setAngle");
            
            REcmaHelper::registerFunction(&engine, proto, isInteger, "isInteger");
            
            REcmaHelper::registerFunction(&engine, proto, setInteger, "setInteger");
            
            REcmaHelper::registerFunction(&engine, proto, setValue, "setValue");
            
            REcmaHelper::registerFunction(&engine, proto, getValue, "getValue");
            
            REcmaHelper::registerFunction(&engine, proto, getError, "getError");
            
            REcmaHelper::registerFunction(&engine, proto, clearError, "clearError");
            
            REcmaHelper::registerFunction(&engine, proto, isValid, "isValid");
            
            REcmaHelper::registerFunction(&engine, proto, setToolTip, "setToolTip");
            
            REcmaHelper::registerFunction(&engine, proto, slotTextChanged, "slotTextChanged");
            
            REcmaHelper::registerFunction(&engine, proto, slotTextEdited, "slotTextEdited");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RMathLineEdit*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RMathLineEdit*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RMathLineEdit",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaMathLineEdit::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RMathLineEdit(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: QWidget * */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QWidget *
            a0 =
            qobject_cast<
            QWidget *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RMathLineEdit
                    * cppResult =
                    new
                    RMathLineEdit
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RMathLineEdit(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaMathLineEdit::getQLineEdit(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QLineEdit* cppResult =
                    qscriptvalue_cast<RMathLineEdit*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaMathLineEdit::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RMathLineEdit"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaMathLineEdit::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QLineEdit");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaMathLineEdit::isAngle
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathLineEdit::isAngle", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathLineEdit::isAngle";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathLineEdit* self = 
                        getSelf("isAngle", context);
                  

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
        
               self->isAngle();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathLineEdit.isAngle().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathLineEdit::isAngle", context, engine);
            return result;
        }
         QScriptValue
        REcmaMathLineEdit::setAngle
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathLineEdit::setAngle", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathLineEdit::setAngle";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathLineEdit* self = 
                        getSelf("setAngle", context);
                  

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
    
               self->setAngle(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathLineEdit.setAngle().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathLineEdit::setAngle", context, engine);
            return result;
        }
         QScriptValue
        REcmaMathLineEdit::isInteger
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathLineEdit::isInteger", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathLineEdit::isInteger";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathLineEdit* self = 
                        getSelf("isInteger", context);
                  

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
        
               self->isInteger();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathLineEdit.isInteger().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathLineEdit::isInteger", context, engine);
            return result;
        }
         QScriptValue
        REcmaMathLineEdit::setInteger
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathLineEdit::setInteger", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathLineEdit::setInteger";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathLineEdit* self = 
                        getSelf("setInteger", context);
                  

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
    
               self->setInteger(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathLineEdit.setInteger().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathLineEdit::setInteger", context, engine);
            return result;
        }
         QScriptValue
        REcmaMathLineEdit::setValue
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathLineEdit::setValue", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathLineEdit::setValue";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathLineEdit* self = 
                        getSelf("setValue", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
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
    // return type 'void'
    
               self->setValue(a0);
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isNumber()
        ) /* type: double */
     && (
            context->argument(1).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isStandardType
                    int
                    a1 =
                    (int)
                    
                    context->argument( 1 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setValue(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathLineEdit.setValue().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathLineEdit::setValue", context, engine);
            return result;
        }
         QScriptValue
        REcmaMathLineEdit::getValue
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathLineEdit::getValue", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathLineEdit::getValue";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathLineEdit* self = 
                        getSelf("getValue", context);
                  

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
    // return type 'double'
    double cppResult =
        
               self->getValue();
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathLineEdit.getValue().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathLineEdit::getValue", context, engine);
            return result;
        }
         QScriptValue
        REcmaMathLineEdit::getError
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathLineEdit::getError", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathLineEdit::getError";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathLineEdit* self = 
                        getSelf("getError", context);
                  

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
    // return type 'QString'
    QString cppResult =
        
               self->getError();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathLineEdit.getError().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathLineEdit::getError", context, engine);
            return result;
        }
         QScriptValue
        REcmaMathLineEdit::clearError
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathLineEdit::clearError", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathLineEdit::clearError";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathLineEdit* self = 
                        getSelf("clearError", context);
                  

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
    
               self->clearError();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathLineEdit.clearError().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathLineEdit::clearError", context, engine);
            return result;
        }
         QScriptValue
        REcmaMathLineEdit::isValid
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathLineEdit::isValid", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathLineEdit::isValid";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathLineEdit* self = 
                        getSelf("isValid", context);
                  

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
        
               self->isValid();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathLineEdit.isValid().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathLineEdit::isValid", context, engine);
            return result;
        }
         QScriptValue
        REcmaMathLineEdit::setToolTip
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathLineEdit::setToolTip", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathLineEdit::setToolTip";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathLineEdit* self = 
                        getSelf("setToolTip", context);
                  

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
    
               self->setToolTip(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathLineEdit.setToolTip().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathLineEdit::setToolTip", context, engine);
            return result;
        }
         QScriptValue
        REcmaMathLineEdit::slotTextChanged
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathLineEdit::slotTextChanged", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathLineEdit::slotTextChanged";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathLineEdit* self = 
                        getSelf("slotTextChanged", context);
                  

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
    
               self->slotTextChanged(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathLineEdit.slotTextChanged().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathLineEdit::slotTextChanged", context, engine);
            return result;
        }
         QScriptValue
        REcmaMathLineEdit::slotTextEdited
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMathLineEdit::slotTextEdited", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMathLineEdit::slotTextEdited";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMathLineEdit* self = 
                        getSelf("slotTextEdited", context);
                  

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
    
               self->slotTextEdited(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMathLineEdit.slotTextEdited().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMathLineEdit::slotTextEdited", context, engine);
            return result;
        }
         QScriptValue REcmaMathLineEdit::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RMathLineEdit* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RMathLineEdit(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaMathLineEdit::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RMathLineEdit* self = getSelf("RMathLineEdit", context);
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
    RMathLineEdit* REcmaMathLineEdit::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RMathLineEdit* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RMathLineEdit >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RMathLineEdit.%1(): "
                        "This object is not a RMathLineEdit").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RMathLineEdit* REcmaMathLineEdit::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RMathLineEdit* selfBase = getSelf(fName, context);
                RMathLineEdit* self = dynamic_cast<RMathLineEdit*>(selfBase);
                //return REcmaHelper::scriptValueTo<RMathLineEdit >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RMathLineEdit.%1(): "
                    "This object is not a RMathLineEdit").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RMathLineEdit*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RMathLineEdit*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RMathLineEdit*
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
    