

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMATRANSACTIONEVENT_H
        #define RECMATRANSACTIONEVENT_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RTransactionEvent.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaTransactionEvent {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQEvent(QScriptContext *context,
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
        hasOnlyChanges
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEntityTypeFilter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RTransactionEvent* getSelf(const QString& fName, QScriptContext* context)
    ;static RTransactionEvent* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    