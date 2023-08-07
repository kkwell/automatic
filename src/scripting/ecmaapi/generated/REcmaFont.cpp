// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaFont.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaFont::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RFont*) 0)));
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
    
            REcmaHelper::registerFunction(&engine, proto, isValid, "isValid");
            
            REcmaHelper::registerFunction(&engine, proto, getFileName, "getFileName");
            
            REcmaHelper::registerFunction(&engine, proto, getEncoding, "getEncoding");
            
            REcmaHelper::registerFunction(&engine, proto, getNames, "getNames");
            
            REcmaHelper::registerFunction(&engine, proto, getAuthors, "getAuthors");
            
            REcmaHelper::registerFunction(&engine, proto, getLetterSpacing, "getLetterSpacing");
            
            REcmaHelper::registerFunction(&engine, proto, getWordSpacing, "getWordSpacing");
            
            REcmaHelper::registerFunction(&engine, proto, getLineSpacingFactor, "getLineSpacingFactor");
            
            REcmaHelper::registerFunction(&engine, proto, getAuxLinePositions, "getAuxLinePositions");
            
            REcmaHelper::registerFunction(&engine, proto, getAuxLinePositionsString, "getAuxLinePositionsString");
            
            REcmaHelper::registerFunction(&engine, proto, load, "load");
            
            REcmaHelper::registerFunction(&engine, proto, isLoaded, "isLoaded");
            
            REcmaHelper::registerFunction(&engine, proto, getGlyphNames, "getGlyphNames");
            
            REcmaHelper::registerFunction(&engine, proto, getGlyph, "getGlyph");
            
            REcmaHelper::registerFunction(&engine, proto, getShapeNames, "getShapeNames");
            
            REcmaHelper::registerFunction(&engine, proto, getShape, "getShape");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RFont*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RFont",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaFont::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RFont(): Did you forget to construct with 'new'?"),
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
            RFont
                    * cppResult =
                    new
                    RFont
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isString()
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

    // call C++ constructor:
    
            // non-copyable class:
            RFont
                    * cppResult =
                    new
                    RFont
                    (
                    a0
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RFont(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaFont::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RFont"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaFont::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaFont::isValid
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::isValid", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::isValid";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
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
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.isValid().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::isValid", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::getFileName
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::getFileName", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::getFileName";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("getFileName", context);
                  

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
        
               self->getFileName();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.getFileName().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::getFileName", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::getEncoding
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::getEncoding", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::getEncoding";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("getEncoding", context);
                  

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
        
               self->getEncoding();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.getEncoding().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::getEncoding", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::getNames
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::getNames", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::getNames";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("getNames", context);
                  

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
    // return type 'const QStringList'
    const QStringList cppResult =
        
               self->getNames();
        // return type: const QStringList
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.getNames().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::getNames", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::getAuthors
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::getAuthors", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::getAuthors";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("getAuthors", context);
                  

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
    // return type 'const QStringList'
    const QStringList cppResult =
        
               self->getAuthors();
        // return type: const QStringList
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.getAuthors().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::getAuthors", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::getLetterSpacing
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::getLetterSpacing", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::getLetterSpacing";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("getLetterSpacing", context);
                  

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
        
               self->getLetterSpacing();
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.getLetterSpacing().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::getLetterSpacing", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::getWordSpacing
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::getWordSpacing", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::getWordSpacing";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("getWordSpacing", context);
                  

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
        
               self->getWordSpacing();
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.getWordSpacing().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::getWordSpacing", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::getLineSpacingFactor
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::getLineSpacingFactor", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::getLineSpacingFactor";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("getLineSpacingFactor", context);
                  

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
        
               self->getLineSpacingFactor();
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.getLineSpacingFactor().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::getLineSpacingFactor", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::getAuxLinePositions
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::getAuxLinePositions", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::getAuxLinePositions";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("getAuxLinePositions", context);
                  

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
    // return type 'QList < double >'
    QList < double > cppResult =
        
               self->getAuxLinePositions();
        // return type: QList < double >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.getAuxLinePositions().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::getAuxLinePositions", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::getAuxLinePositionsString
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::getAuxLinePositionsString", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::getAuxLinePositionsString";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("getAuxLinePositionsString", context);
                  

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
        
               self->getAuxLinePositionsString();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.getAuxLinePositionsString().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::getAuxLinePositionsString", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::load
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::load", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::load";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("load", context);
                  

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
        
               self->load();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.load().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::load", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::isLoaded
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::isLoaded", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::isLoaded";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("isLoaded", context);
                  

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
        
               self->isLoaded();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.isLoaded().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::isLoaded", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::getGlyphNames
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::getGlyphNames", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::getGlyphNames";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("getGlyphNames", context);
                  

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
    // return type 'QList < QChar >'
    QList < QChar > cppResult =
        
               self->getGlyphNames();
        // return type: QList < QChar >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.getGlyphNames().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::getGlyphNames", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::getGlyph
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::getGlyph", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::getGlyph";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("getGlyph", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QChar */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QChar
                    a0 =
                    (QChar)
                    
                    context->argument( 0 ).
                    toString().at(0);
                
    // end of arguments

    // call C++ function:
    // return type 'RPainterPath'
    RPainterPath cppResult =
        
               self->getGlyph(a0);
        // return type: RPainterPath
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QChar */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QChar
                    a0 =
                    (QChar)
                    
                    context->argument( 0 ).
                    toString().at(0);
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'RPainterPath'
    RPainterPath cppResult =
        
               self->getGlyph(a0
        ,
    a1);
        // return type: RPainterPath
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.getGlyph().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::getGlyph", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::getShapeNames
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::getShapeNames", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::getShapeNames";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("getShapeNames", context);
                  

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
    // return type 'QList < QString >'
    QList < QString > cppResult =
        
               self->getShapeNames();
        // return type: QList < QString >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.getShapeNames().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::getShapeNames", context, engine);
            return result;
        }
         QScriptValue
        REcmaFont::getShape
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaFont::getShape", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaFont::getShape";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RFont* self = 
                        getSelf("getShape", context);
                  

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
    // return type 'RPainterPath'
    RPainterPath cppResult =
        
               self->getShape(a0);
        // return type: RPainterPath
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RFont.getShape().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaFont::getShape", context, engine);
            return result;
        }
         QScriptValue REcmaFont::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RFont* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RFont(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaFont::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RFont* self = getSelf("RFont", context);
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
    RFont* REcmaFont::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RFont* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RFont >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RFont.%1(): "
                        "This object is not a RFont").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RFont* REcmaFont::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RFont* selfBase = getSelf(fName, context);
                RFont* self = dynamic_cast<RFont*>(selfBase);
                //return REcmaHelper::scriptValueTo<RFont >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RFont.%1(): "
                    "This object is not a RFont").arg(fName),
                    context);
            }

            return self;
            


        }
        