

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMASNAPMIDDLE_H
        #define RECMASNAPMIDDLE_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RSnapMiddle.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaSnapMiddle {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRSnapEntityBase(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRSnap(QScriptContext *context,
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
    static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RSnapMiddle* getSelf(const QString& fName, QScriptContext* context)
    ;static RSnapMiddle* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    