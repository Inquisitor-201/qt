/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGStringList.h"

#include "KURL.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGStringList);

/* Hash table */

static const HashTableValue JSSVGStringListTableValues[2] =
{
    { "numberOfItems", DontDelete|ReadOnly, (intptr_t)jsSVGStringListNumberOfItems, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGStringListTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGStringListTableValues, 0 };
#else
    { 2, 1, JSSVGStringListTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGStringListPrototypeTableValues[8] =
{
    { "clear", DontDelete|Function, (intptr_t)jsSVGStringListPrototypeFunctionClear, (intptr_t)0 },
    { "initialize", DontDelete|Function, (intptr_t)jsSVGStringListPrototypeFunctionInitialize, (intptr_t)1 },
    { "getItem", DontDelete|Function, (intptr_t)jsSVGStringListPrototypeFunctionGetItem, (intptr_t)1 },
    { "insertItemBefore", DontDelete|Function, (intptr_t)jsSVGStringListPrototypeFunctionInsertItemBefore, (intptr_t)2 },
    { "replaceItem", DontDelete|Function, (intptr_t)jsSVGStringListPrototypeFunctionReplaceItem, (intptr_t)2 },
    { "removeItem", DontDelete|Function, (intptr_t)jsSVGStringListPrototypeFunctionRemoveItem, (intptr_t)1 },
    { "appendItem", DontDelete|Function, (intptr_t)jsSVGStringListPrototypeFunctionAppendItem, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGStringListPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 63, JSSVGStringListPrototypeTableValues, 0 };
#else
    { 18, 15, JSSVGStringListPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGStringListPrototype::s_info = { "SVGStringListPrototype", 0, &JSSVGStringListPrototypeTable, 0 };

JSObject* JSSVGStringListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGStringList>(exec, globalObject);
}

bool JSSVGStringListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGStringListPrototypeTable, this, propertyName, slot);
}

bool JSSVGStringListPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGStringListPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGStringList::s_info = { "SVGStringList", 0, &JSSVGStringListTable, 0 };

JSSVGStringList::JSSVGStringList(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGStringList> impl, SVGElement* context)
    : DOMObjectWithSVGContext(structure, globalObject, context)
    , m_impl(impl)
{
}

JSSVGStringList::~JSSVGStringList()
{
    forgetDOMObject(this, impl());
}

JSObject* JSSVGStringList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGStringListPrototype(JSSVGStringListPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGStringList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGStringList, Base>(exec, &JSSVGStringListTable, this, propertyName, slot);
}

bool JSSVGStringList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGStringList, Base>(exec, &JSSVGStringListTable, this, propertyName, descriptor);
}

JSValue jsSVGStringListNumberOfItems(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGStringList* castedThis = static_cast<JSSVGStringList*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGStringList* imp = static_cast<SVGStringList*>(castedThis->impl());
    return jsNumber(exec, imp->numberOfItems());
}

JSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionClear(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(asObject(thisValue));
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;

    imp->clear(ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionInitialize(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(asObject(thisValue));
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& item = args.at(0).toString(exec);


    JSC::JSValue result = jsString(exec, imp->initialize(item, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionGetItem(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(asObject(thisValue));
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    unsigned index = args.at(0).toInt32(exec);


    JSC::JSValue result = jsString(exec, imp->getItem(index, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionInsertItemBefore(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(asObject(thisValue));
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& item = args.at(0).toString(exec);
    unsigned index = args.at(1).toInt32(exec);


    JSC::JSValue result = jsString(exec, imp->insertItemBefore(item, index, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionReplaceItem(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(asObject(thisValue));
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& item = args.at(0).toString(exec);
    unsigned index = args.at(1).toInt32(exec);


    JSC::JSValue result = jsString(exec, imp->replaceItem(item, index, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionRemoveItem(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(asObject(thisValue));
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    unsigned index = args.at(0).toInt32(exec);


    JSC::JSValue result = jsString(exec, imp->removeItem(index, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionAppendItem(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGStringList::s_info))
        return throwError(exec, TypeError);
    JSSVGStringList* castedThisObj = static_cast<JSSVGStringList*>(asObject(thisValue));
    SVGStringList* imp = static_cast<SVGStringList*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& item = args.at(0).toString(exec);


    JSC::JSValue result = jsString(exec, imp->appendItem(item, ec));
    setDOMException(exec, ec);
    return result;
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGStringList* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGStringList>(exec, globalObject, object, context);
}
SVGStringList* toSVGStringList(JSC::JSValue value)
{
    return value.inherits(&JSSVGStringList::s_info) ? static_cast<JSSVGStringList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
