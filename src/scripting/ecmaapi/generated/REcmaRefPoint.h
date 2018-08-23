// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMAREFPOINT_H
        #define RECMAREFPOINT_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RRefPoint.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaRefPoint {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRVector(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        toVectorList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toRefPointList
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSecondary
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSecondary
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isTertiary
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setTertiary
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isIgnore
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setIgnore
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCenter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isArrow
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setArrow
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFlag
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFlag
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFlags
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFlags
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RRefPoint* getSelf(const QString& fName, QScriptContext* context)
    ;static RRefPoint* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue toScriptValueEnumFlag(QScriptEngine* engine, const RRefPoint::Flag& value)
    ;static  void fromScriptValueEnumFlag(const QScriptValue& value, RRefPoint::Flag& out)
    ;};
    #endif
    