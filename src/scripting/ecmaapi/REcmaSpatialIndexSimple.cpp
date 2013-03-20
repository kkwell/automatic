

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #include "REcmaSpatialIndexSimple.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaSpatialIndex.h"
                 void REcmaSpatialIndexSimple::init(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RSpatialIndexSimple*) 0)));
        protoCreated = true;
    }

    
        // primary base class RSpatialIndex:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RSpatialIndex*>());

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
    
        // conversion for base class RSpatialIndex
        REcmaHelper::registerFunction(&engine, proto, getRSpatialIndex, "getRSpatialIndex");
        
        // conversion for base class RRequireHeap
        REcmaHelper::registerFunction(&engine, proto, getRRequireHeap, "getRRequireHeap");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, clear, "clear");
            
            REcmaHelper::registerFunction(&engine, proto, removeFromIndex, "removeFromIndex");
            
            REcmaHelper::registerFunction(&engine, proto, queryIntersected, "queryIntersected");
            
            REcmaHelper::registerFunction(&engine, proto, queryContained, "queryContained");
            
            REcmaHelper::registerFunction(&engine, proto, queryNearestNeighbor, "queryNearestNeighbor");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RSpatialIndexSimple*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RSpatialIndexSimple",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaSpatialIndexSimple::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSpatialIndexSimple(): Did you forget to construct with 'new'?"),
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
            RSpatialIndexSimple
                    * cppResult =
                    new
                    RSpatialIndexSimple
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSpatialIndexSimple(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaSpatialIndexSimple::getRSpatialIndex(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RSpatialIndex* cppResult =
                    qscriptvalue_cast<RSpatialIndexSimple*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaSpatialIndexSimple::getRRequireHeap(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RRequireHeap* cppResult =
                    qscriptvalue_cast<RSpatialIndexSimple*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaSpatialIndexSimple::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RSpatialIndexSimple"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaSpatialIndexSimple::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RSpatialIndex");
    
        list.append("RRequireHeap");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaSpatialIndexSimple::clear
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSpatialIndexSimple::clear", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSpatialIndexSimple::clear";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSpatialIndexSimple* self = 
                        getSelf("clear", context);
                  

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
    
               self->clear();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSpatialIndexSimple.clear().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSpatialIndexSimple::clear", context, engine);
            return result;
        }
         QScriptValue
        REcmaSpatialIndexSimple::removeFromIndex
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSpatialIndexSimple::removeFromIndex", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSpatialIndexSimple::removeFromIndex";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSpatialIndexSimple* self = 
                        getSelf("removeFromIndex", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    8 && (
            context->argument(0).isNumber()
        ) /* type: int */
     && (
            context->argument(1).isNumber()
        ) /* type: int */
     && (
            context->argument(2).isNumber()
        ) /* type: double */
     && (
            context->argument(3).isNumber()
        ) /* type: double */
     && (
            context->argument(4).isNumber()
        ) /* type: double */
     && (
            context->argument(5).isNumber()
        ) /* type: double */
     && (
            context->argument(6).isNumber()
        ) /* type: double */
     && (
            context->argument(7).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isStandardType
                    int
                    a1 =
                    (int)
                    
                    context->argument( 1 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a3 =
                    (double)
                    
                    context->argument( 3 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a4 =
                    (double)
                    
                    context->argument( 4 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a5 =
                    (double)
                    
                    context->argument( 5 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a6 =
                    (double)
                    
                    context->argument( 6 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a7 =
                    (double)
                    
                    context->argument( 7 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->removeFromIndex(a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4
        ,
    a5
        ,
    a6
        ,
    a7);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isNumber()
        ) /* type: int */
     && (
            context->argument(1).isArray()
        ) /* type: QList < RBox > */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isArray
                    QList < RBox >
                    a1;
                    REcmaHelper::fromScriptValue(
                        engine,
                        context->argument(1),
                        a1
                    );
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->removeFromIndex(a0
        ,
    a1);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSpatialIndexSimple.removeFromIndex().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSpatialIndexSimple::removeFromIndex", context, engine);
            return result;
        }
         QScriptValue
        REcmaSpatialIndexSimple::queryIntersected
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSpatialIndexSimple::queryIntersected", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSpatialIndexSimple::queryIntersected";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSpatialIndexSimple* self = 
                        getSelf("queryIntersected", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    6 && (
            context->argument(0).isNumber()
        ) /* type: double */
     && (
            context->argument(1).isNumber()
        ) /* type: double */
     && (
            context->argument(2).isNumber()
        ) /* type: double */
     && (
            context->argument(3).isNumber()
        ) /* type: double */
     && (
            context->argument(4).isNumber()
        ) /* type: double */
     && (
            context->argument(5).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a1 =
                    (double)
                    
                    context->argument( 1 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a3 =
                    (double)
                    
                    context->argument( 3 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a4 =
                    (double)
                    
                    context->argument( 4 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a5 =
                    (double)
                    
                    context->argument( 5 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'QMap < int , QSet < int > >'
    QMap < int , QSet < int > > cppResult =
        
               self->queryIntersected(a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4
        ,
    a5);
        // return type: QMap < int , QSet < int > >
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    7 && (
            context->argument(0).isNumber()
        ) /* type: double */
     && (
            context->argument(1).isNumber()
        ) /* type: double */
     && (
            context->argument(2).isNumber()
        ) /* type: double */
     && (
            context->argument(3).isNumber()
        ) /* type: double */
     && (
            context->argument(4).isNumber()
        ) /* type: double */
     && (
            context->argument(5).isNumber()
        ) /* type: double */
     && (
            context->argument(6).isVariant() || 
            context->argument(6).isQObject() || 
            context->argument(6).isNull()
        ) /* type: RSpatialIndexVisitor * */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a1 =
                    (double)
                    
                    context->argument( 1 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a3 =
                    (double)
                    
                    context->argument( 3 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a4 =
                    (double)
                    
                    context->argument( 4 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a5 =
                    (double)
                    
                    context->argument( 5 ).
                    toNumber();
                
                    // argument is pointer
                    RSpatialIndexVisitor * a6 = NULL;

                    a6 = 
                        REcmaHelper::scriptValueTo<RSpatialIndexVisitor >(
                            context->argument(6)
                        );
                    
                    if (a6==NULL && 
                        !context->argument(6).isNull()) {
                        return REcmaHelper::throwError("RSpatialIndexSimple: Argument 6 is not of type RSpatialIndexVisitor *RSpatialIndexVisitor *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'QMap < int , QSet < int > >'
    QMap < int , QSet < int > > cppResult =
        
               self->queryIntersected(a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4
        ,
    a5
        ,
    a6);
        // return type: QMap < int , QSet < int > >
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSpatialIndexSimple.queryIntersected().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSpatialIndexSimple::queryIntersected", context, engine);
            return result;
        }
         QScriptValue
        REcmaSpatialIndexSimple::queryContained
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSpatialIndexSimple::queryContained", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSpatialIndexSimple::queryContained";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSpatialIndexSimple* self = 
                        getSelf("queryContained", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    6 && (
            context->argument(0).isNumber()
        ) /* type: double */
     && (
            context->argument(1).isNumber()
        ) /* type: double */
     && (
            context->argument(2).isNumber()
        ) /* type: double */
     && (
            context->argument(3).isNumber()
        ) /* type: double */
     && (
            context->argument(4).isNumber()
        ) /* type: double */
     && (
            context->argument(5).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a1 =
                    (double)
                    
                    context->argument( 1 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a3 =
                    (double)
                    
                    context->argument( 3 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a4 =
                    (double)
                    
                    context->argument( 4 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a5 =
                    (double)
                    
                    context->argument( 5 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'QMap < int , QSet < int > >'
    QMap < int , QSet < int > > cppResult =
        
               self->queryContained(a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4
        ,
    a5);
        // return type: QMap < int , QSet < int > >
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    7 && (
            context->argument(0).isNumber()
        ) /* type: double */
     && (
            context->argument(1).isNumber()
        ) /* type: double */
     && (
            context->argument(2).isNumber()
        ) /* type: double */
     && (
            context->argument(3).isNumber()
        ) /* type: double */
     && (
            context->argument(4).isNumber()
        ) /* type: double */
     && (
            context->argument(5).isNumber()
        ) /* type: double */
     && (
            context->argument(6).isVariant() || 
            context->argument(6).isQObject() || 
            context->argument(6).isNull()
        ) /* type: RSpatialIndexVisitor * */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a1 =
                    (double)
                    
                    context->argument( 1 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a3 =
                    (double)
                    
                    context->argument( 3 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a4 =
                    (double)
                    
                    context->argument( 4 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a5 =
                    (double)
                    
                    context->argument( 5 ).
                    toNumber();
                
                    // argument is pointer
                    RSpatialIndexVisitor * a6 = NULL;

                    a6 = 
                        REcmaHelper::scriptValueTo<RSpatialIndexVisitor >(
                            context->argument(6)
                        );
                    
                    if (a6==NULL && 
                        !context->argument(6).isNull()) {
                        return REcmaHelper::throwError("RSpatialIndexSimple: Argument 6 is not of type RSpatialIndexVisitor *RSpatialIndexVisitor *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'QMap < int , QSet < int > >'
    QMap < int , QSet < int > > cppResult =
        
               self->queryContained(a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4
        ,
    a5
        ,
    a6);
        // return type: QMap < int , QSet < int > >
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSpatialIndexSimple.queryContained().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSpatialIndexSimple::queryContained", context, engine);
            return result;
        }
         QScriptValue
        REcmaSpatialIndexSimple::queryNearestNeighbor
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSpatialIndexSimple::queryNearestNeighbor", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSpatialIndexSimple::queryNearestNeighbor";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSpatialIndexSimple* self = 
                        getSelf("queryNearestNeighbor", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    4 && (
            context->argument(0).isNumber()
        ) /* type: uint */
     && (
            context->argument(1).isNumber()
        ) /* type: double */
     && (
            context->argument(2).isNumber()
        ) /* type: double */
     && (
            context->argument(3).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    uint
                    a0 =
                    (uint)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a1 =
                    (double)
                    
                    context->argument( 1 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a3 =
                    (double)
                    
                    context->argument( 3 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'QMap < int , QSet < int > >'
    QMap < int , QSet < int > > cppResult =
        
               self->queryNearestNeighbor(a0
        ,
    a1
        ,
    a2
        ,
    a3);
        // return type: QMap < int , QSet < int > >
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    5 && (
            context->argument(0).isNumber()
        ) /* type: uint */
     && (
            context->argument(1).isNumber()
        ) /* type: double */
     && (
            context->argument(2).isNumber()
        ) /* type: double */
     && (
            context->argument(3).isNumber()
        ) /* type: double */
     && (
            context->argument(4).isVariant() || 
            context->argument(4).isQObject() || 
            context->argument(4).isNull()
        ) /* type: RSpatialIndexVisitor * */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    uint
                    a0 =
                    (uint)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a1 =
                    (double)
                    
                    context->argument( 1 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    double
                    a3 =
                    (double)
                    
                    context->argument( 3 ).
                    toNumber();
                
                    // argument is pointer
                    RSpatialIndexVisitor * a4 = NULL;

                    a4 = 
                        REcmaHelper::scriptValueTo<RSpatialIndexVisitor >(
                            context->argument(4)
                        );
                    
                    if (a4==NULL && 
                        !context->argument(4).isNull()) {
                        return REcmaHelper::throwError("RSpatialIndexSimple: Argument 4 is not of type RSpatialIndexVisitor *RSpatialIndexVisitor *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'QMap < int , QSet < int > >'
    QMap < int , QSet < int > > cppResult =
        
               self->queryNearestNeighbor(a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4);
        // return type: QMap < int , QSet < int > >
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSpatialIndexSimple.queryNearestNeighbor().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSpatialIndexSimple::queryNearestNeighbor", context, engine);
            return result;
        }
         QScriptValue REcmaSpatialIndexSimple::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RSpatialIndexSimple* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RSpatialIndexSimple(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaSpatialIndexSimple::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RSpatialIndexSimple* self = getSelf("RSpatialIndexSimple", context);
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
    RSpatialIndexSimple* REcmaSpatialIndexSimple::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RSpatialIndexSimple* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RSpatialIndexSimple >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RSpatialIndexSimple.%1(): "
                        "This object is not a RSpatialIndexSimple").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RSpatialIndexSimple* REcmaSpatialIndexSimple::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RSpatialIndexSimple* selfBase = getSelf(fName, context);
                RSpatialIndexSimple* self = dynamic_cast<RSpatialIndexSimple*>(selfBase);
                //return REcmaHelper::scriptValueTo<RSpatialIndexSimple >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RSpatialIndexSimple.%1(): "
                    "This object is not a RSpatialIndexSimple").arg(fName),
                    context);
            }

            return self;
            


        }
        