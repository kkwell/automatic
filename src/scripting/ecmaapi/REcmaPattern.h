

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMAPATTERN_H
        #define RECMAPATTERN_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RPattern.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaPattern {

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
        loadAllFrom
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFileName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLoaded
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        load
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPatternLines
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RPattern* getSelf(const QString& fName, QScriptContext* context)
    ;static RPattern* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    