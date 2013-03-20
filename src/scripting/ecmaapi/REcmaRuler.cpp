

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaRuler.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include <QFont>
            
                #include "RGraphicsView.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaRuler::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RRuler*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, setGraphicsView, "setGraphicsView");
            
            REcmaHelper::registerFunction(&engine, proto, getOrientation, "getOrientation");
            
            REcmaHelper::registerFunction(&engine, proto, setOrientation, "setOrientation");
            
            REcmaHelper::registerFunction(&engine, proto, paintTick, "paintTick");
            
            REcmaHelper::registerFunction(&engine, proto, getFont, "getFont");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RRuler*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RRuler",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaRuler::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RRuler: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaRuler::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RRuler"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaRuler::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaRuler::setGraphicsView
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRuler::setGraphicsView", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRuler::setGraphicsView";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRuler* self = 
                        getSelf("setGraphicsView", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RGraphicsView * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RGraphicsView * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RGraphicsView >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RRuler: Argument 0 is not of type RGraphicsView *RGraphicsView *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setGraphicsView(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRuler.setGraphicsView().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRuler::setGraphicsView", context, engine);
            return result;
        }
         QScriptValue
        REcmaRuler::getOrientation
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRuler::getOrientation", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRuler::getOrientation";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRuler* self = 
                        getSelf("getOrientation", context);
                  

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
    // return type 'Qt::Orientation'
    Qt::Orientation cppResult =
        
               self->getOrientation();
        // return type: Qt::Orientation
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRuler.getOrientation().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRuler::getOrientation", context, engine);
            return result;
        }
         QScriptValue
        REcmaRuler::setOrientation
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRuler::setOrientation", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRuler::setOrientation";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRuler* self = 
                        getSelf("setOrientation", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: Qt::Orientation */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    Qt::Orientation
                    a0 =
                    (Qt::Orientation)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setOrientation(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRuler.setOrientation().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRuler::setOrientation", context, engine);
            return result;
        }
         QScriptValue
        REcmaRuler::paintTick
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRuler::paintTick", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRuler::paintTick";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRuler* self = 
                        getSelf("paintTick", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isNumber()
        ) /* type: int */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
     && (
            context->argument(2).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
                    // argument isStandardType
                    QString
                    a2 =
                    (QString)
                    
                    context->argument( 2 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->paintTick(a0
        ,
    a1
        ,
    a2);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRuler.paintTick().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRuler::paintTick", context, engine);
            return result;
        }
         QScriptValue
        REcmaRuler::getFont
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRuler::getFont", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRuler::getFont";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRuler* self = 
                        getSelf("getFont", context);
                  

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
    // return type 'QFont'
    QFont cppResult =
        
               self->getFont();
        // return type: QFont
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRuler.getFont().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRuler::getFont", context, engine);
            return result;
        }
         QScriptValue REcmaRuler::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RRuler* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RRuler(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaRuler::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RRuler* self = getSelf("RRuler", context);
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
    RRuler* REcmaRuler::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RRuler* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RRuler >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RRuler.%1(): "
                        "This object is not a RRuler").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RRuler* REcmaRuler::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RRuler* selfBase = getSelf(fName, context);
                RRuler* self = dynamic_cast<RRuler*>(selfBase);
                //return REcmaHelper::scriptValueTo<RRuler >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RRuler.%1(): "
                    "This object is not a RRuler").arg(fName),
                    context);
            }

            return self;
            


        }
        