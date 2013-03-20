

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMAMATH_H
        #define RECMAMATH_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RMath.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaMath {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        uninit
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mround
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trunc
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        pow
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isNormal
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isNaN
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInf
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        eval
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getError
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasError
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        angleToString
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rad2deg
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deg2rad
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rad2gra
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        gra2deg
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGcd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isAngleBetween
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getNormalizedAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRelativeAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleDifference
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleDifference180
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        makeAngleReadable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isAngleReadable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSameDirection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        absmod
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toFractionString
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toFraction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        simplify
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        fuzzyCompare
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        parseScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RMath* getSelf(const QString& fName, QScriptContext* context)
    ;static RMath* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    