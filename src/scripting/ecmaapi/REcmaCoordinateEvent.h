

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMACOORDINATEEVENT_H
        #define RECMACOORDINATEEVENT_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RCoordinateEvent.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaCoordinateEvent {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRInputEvent(QScriptContext *context,
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
    ;static RCoordinateEvent* getSelf(const QString& fName, QScriptContext* context)
    ;static RCoordinateEvent* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    