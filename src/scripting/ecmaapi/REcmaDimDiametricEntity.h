

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMADIMDIAMETRICENTITY_H
        #define RECMADIMDIAMETRICENTITY_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RDimDiametricEntity.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaDimDiametricEntity {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRDimensionEntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getREntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRObject(QScriptContext *context,
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
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setChordPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getChordPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFarChordPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFarChordPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RDimDiametricEntity* getSelf(const QString& fName, QScriptContext* context)
    ;static RDimDiametricEntity* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    