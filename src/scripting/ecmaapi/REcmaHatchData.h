

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMAHATCHDATA_H
        #define RECMAHATCHDATA_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RHatchData.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaHatchData {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getREntityData(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRPainterPathSource(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;
        // properties of secondary base class RPainterPathSource:
        

        // methods of secondary base class RPainterPathSource:
        

    // properties:
    

    // public methods:
    static  QScriptValue
        operator_assign
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointOnEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistanceTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        intersectsWith
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mirror
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        stretch
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        castToShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExploded
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSolid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSolid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPatternName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPatternName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        newLoop
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addBoundary
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundaryPath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPainterPaths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundary
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        update
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        order
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLoopCount
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLoopBoundary
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getComplexity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RHatchData* getSelf(const QString& fName, QScriptContext* context)
    ;static RHatchData* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    