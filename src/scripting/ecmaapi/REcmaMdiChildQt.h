

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMAMDICHILDQT_H
        #define RECMAMDICHILDQT_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RMdiChildQt.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaMdiChildQt {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQMdiSubWindow(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRModifiedListener(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;
        // properties of secondary base class RModifiedListener:
        

        // methods of secondary base class RModifiedListener:
        

    // properties:
    

    // public methods:
    static  QScriptValue
        setDocumentInterface
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocumentInterface
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLastKnownViewWithFocus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateModifiedListener
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCloseEventRejected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCloseEventAccepted
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RMdiChildQt* getSelf(const QString& fName, QScriptContext* context)
    ;static RMdiChildQt* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  void fromScriptValue(const QScriptValue& value,
        RMdiChildQt*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RMdiChildQt*>(o);
        }
    static  QScriptValue toScriptValue(QScriptEngine *engine,
        RMdiChildQt*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    };
    #endif
    