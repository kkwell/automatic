

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaRulerQt.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RGraphicsView.h"
            
                #include "RDocumentInterface.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaRuler.h"
                
                  #include "REcmaCoordinateListener.h"
                 void REcmaRulerQt::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RRulerQt*) 0)));
        protoCreated = true;
    }

    
        // primary base class QFrame:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QFrame*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        REcmaRuler::init(engine, proto);
          REcmaCoordinateListener::init(engine, proto);
          
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QFrame
        REcmaHelper::registerFunction(&engine, proto, getQFrame, "getQFrame");
        
        // conversion for base class RRuler
        REcmaHelper::registerFunction(&engine, proto, getRRuler, "getRRuler");
        
        // conversion for base class RCoordinateListener
        REcmaHelper::registerFunction(&engine, proto, getRCoordinateListener, "getRCoordinateListener");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

        // properties of secondary base class RRuler:
        

        // methods of secondary base class RRuler:
        
            REcmaHelper::registerFunction(&engine, proto, setGraphicsView, "setGraphicsView");
            
            REcmaHelper::registerFunction(&engine, proto, getOrientation, "getOrientation");
            

        // properties of secondary base class RCoordinateListener:
        

        // methods of secondary base class RCoordinateListener:
        

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, setOrientation, "setOrientation");
            
            REcmaHelper::registerFunction(&engine, proto, sizeHint, "sizeHint");
            
            REcmaHelper::registerFunction(&engine, proto, paintTick, "paintTick");
            
            REcmaHelper::registerFunction(&engine, proto, getFont, "getFont");
            
            REcmaHelper::registerFunction(&engine, proto, updateViewport, "updateViewport");
            
            REcmaHelper::registerFunction(&engine, proto, updateCoordinate, "updateCoordinate");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RRulerQt*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RRulerQt*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RRulerQt",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaRulerQt::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RRulerQt(): Did you forget to construct with 'new'?"),
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
            RRulerQt
                    * cppResult =
                    new
                    RRulerQt
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult);
                
    } else 

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
            RRulerQt
                    * cppResult =
                    new
                    RRulerQt
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RRulerQt(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaRulerQt::getQFrame(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QFrame* cppResult =
                    qscriptvalue_cast<RRulerQt*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaRulerQt::getRRuler(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RRuler* cppResult =
                    qscriptvalue_cast<RRulerQt*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaRulerQt::getRCoordinateListener(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RCoordinateListener* cppResult =
                    qscriptvalue_cast<RRulerQt*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaRulerQt::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RRulerQt"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaRulerQt::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QFrame");
    
        list.append("RRuler");
    
        list.append("RCoordinateListener");
    

        return qScriptValueFromSequence(engine, list);
    }
    
        // properties of secondary base class RRuler:
        

        // methods of secondary base class RRuler:
         QScriptValue
        REcmaRulerQt::setGraphicsView
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRulerQt::setGraphicsView", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRulerQt::setGraphicsView";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRulerQt* self = 
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
               return REcmaHelper::throwError("Wrong number/types of arguments for RRulerQt.setGraphicsView().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRulerQt::setGraphicsView", context, engine);
            return result;
        }
         QScriptValue
        REcmaRulerQt::getOrientation
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRulerQt::getOrientation", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRulerQt::getOrientation";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRulerQt* self = 
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
               return REcmaHelper::throwError("Wrong number/types of arguments for RRulerQt.getOrientation().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRulerQt::getOrientation", context, engine);
            return result;
        }
        
        // properties of secondary base class RCoordinateListener:
        

        // methods of secondary base class RCoordinateListener:
        

    // properties:
    

    // public methods:
     QScriptValue
        REcmaRulerQt::setOrientation
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRulerQt::setOrientation", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRulerQt::setOrientation";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRulerQt* self = 
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
               return REcmaHelper::throwError("Wrong number/types of arguments for RRulerQt.setOrientation().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRulerQt::setOrientation", context, engine);
            return result;
        }
         QScriptValue
        REcmaRulerQt::sizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRulerQt::sizeHint", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRulerQt::sizeHint";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRulerQt* self = 
                        getSelf("sizeHint", context);
                  

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
    // return type 'QSize'
    QSize cppResult =
        
               self->sizeHint();
        // return type: QSize
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRulerQt.sizeHint().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRulerQt::sizeHint", context, engine);
            return result;
        }
         QScriptValue
        REcmaRulerQt::paintTick
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRulerQt::paintTick", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRulerQt::paintTick";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRulerQt* self = 
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
               return REcmaHelper::throwError("Wrong number/types of arguments for RRulerQt.paintTick().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRulerQt::paintTick", context, engine);
            return result;
        }
         QScriptValue
        REcmaRulerQt::getFont
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRulerQt::getFont", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRulerQt::getFont";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRulerQt* self = 
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
               return REcmaHelper::throwError("Wrong number/types of arguments for RRulerQt.getFont().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRulerQt::getFont", context, engine);
            return result;
        }
         QScriptValue
        REcmaRulerQt::updateViewport
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRulerQt::updateViewport", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRulerQt::updateViewport";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRulerQt* self = 
                        getSelf("updateViewport", context);
                  

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
    
               self->updateViewport();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRulerQt.updateViewport().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRulerQt::updateViewport", context, engine);
            return result;
        }
         QScriptValue
        REcmaRulerQt::updateCoordinate
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRulerQt::updateCoordinate", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRulerQt::updateCoordinate";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRulerQt* self = 
                        getSelf("updateCoordinate", context);
                  

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
                        return REcmaHelper::throwError("RRulerQt: Argument 0 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateCoordinate(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRulerQt.updateCoordinate().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRulerQt::updateCoordinate", context, engine);
            return result;
        }
         QScriptValue REcmaRulerQt::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RRulerQt* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RRulerQt(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaRulerQt::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RRulerQt* self = getSelf("RRulerQt", context);
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
    RRulerQt* REcmaRulerQt::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RRulerQt* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RRulerQt >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RRulerQt.%1(): "
                        "This object is not a RRulerQt").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RRulerQt* REcmaRulerQt::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RRulerQt* selfBase = getSelf(fName, context);
                RRulerQt* self = dynamic_cast<RRulerQt*>(selfBase);
                //return REcmaHelper::scriptValueTo<RRulerQt >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RRulerQt.%1(): "
                    "This object is not a RRulerQt").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RRulerQt*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RRulerQt*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RRulerQt*
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
    