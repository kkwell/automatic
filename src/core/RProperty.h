#ifndef RPROPERTY_H
#define RPROPERTY_H

#include <QSet>

#include "RObject.h"
#include "RPropertyTypeId.h"

class RDocument;

class RProperty {
public:
    RProperty(const RDocument& document,
              const QSet<RObject::Id>& objectIds,
              const RPropertyTypeId& propertyTypeId,
              bool showOnRequest)
        : document(&document),
          objectIds(&objectIds),
          propertyTypeId(propertyTypeId),
          showOnRequest(showOnRequest) { }

    const RDocument* document;
    const QSet<RObject::Id>* objectIds;
    RPropertyTypeId propertyTypeId;
    bool showOnRequest;
    RPropertyAttributes attributes;
    QVariant value;
};

Q_DECLARE_METATYPE(RProperty*)

#endif
