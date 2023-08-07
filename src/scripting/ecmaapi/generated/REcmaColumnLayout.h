// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMACOLUMNLAYOUT_H
        #define RECMACOLUMNLAYOUT_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RColumnLayout.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaColumnLayout {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQLayout(QScriptContext *context,
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
        addItem
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        count
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        itemAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        takeAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAccumulatedSortOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSortOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGroupSortOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        minimumSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        sizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGeometry
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RColumnLayout* getSelf(const QString& fName, QScriptContext* context)
    ;static RColumnLayout* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  void fromScriptValue(const QScriptValue& value,
        RColumnLayout*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RColumnLayout*>(o);
        }
    static  QScriptValue toScriptValue(QScriptEngine *engine,
        RColumnLayout*
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
    