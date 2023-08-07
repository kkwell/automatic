/**
 * Copyright (c) 2011-2018 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */
#include "RSnapEnd.h"

QList<RVector> RSnapEnd::snapEntity(QSharedPointer<REntity> entity,
                                    const RVector& point,
                                    const RBox& queryBox,
                                    RGraphicsView& view,
                                    QList<REntity::Id>* subEntityIds) {

    Q_UNUSED(view)
    Q_UNUSED(point)

    return entity->getEndPoints(queryBox, subEntityIds);
}
