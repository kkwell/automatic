

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMAPLUGININFO_H
        #define RECMAPLUGININFO_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RPluginInfo.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaPluginInfo {

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
        getFileName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAboutString
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVersionString
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getErrorString
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RPluginInfo* getSelf(const QString& fName, QScriptContext* context)
    ;static RPluginInfo* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    