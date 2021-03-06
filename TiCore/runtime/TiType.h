/**
 * Appcelerator Titanium License
 * This source code and all modifications done by Appcelerator
 * are licensed under the Apache Public License (version 2) and
 * are Copyright (c) 2009-2012 by Appcelerator, Inc.
 */

/*
 *  Copyright (C) 2006, 2007, 2008, 2009 Apple Inc. All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 *
 */

#ifndef TiType_h
#define TiType_h

namespace TI {

    /**
     * Primitive types
     */
    enum TiType {
        UnspecifiedType   = 0,
        UndefinedType     = 1,
        BooleanType       = 2,
        NumberType        = 3,
        NullType          = 4,
        StringType        = 5,
        LeafType          = 6,
        // The CompoundType value must come before any TiType that may have children
        CompoundType      = 7,
        ObjectType        = 8,
        GetterSetterType  = 9
    };

} // namespace TI

#endif
