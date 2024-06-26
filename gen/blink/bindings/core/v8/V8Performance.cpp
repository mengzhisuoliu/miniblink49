// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8Performance.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8MemoryInfo.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8PerformanceEntry.h"
#include "bindings/core/v8/V8PerformanceNavigation.h"
#include "bindings/core/v8/V8PerformanceTiming.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Performance::wrapperTypeInfo = { gin::kEmbedderBlink, V8Performance::domTemplate, V8Performance::refObject, V8Performance::derefObject, V8Performance::trace, 0, 0, V8Performance::preparePrototypeObject, V8Performance::installConditionallyEnabledProperties, "Performance", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Performance.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Performance::s_wrapperTypeInfo = V8Performance::wrapperTypeInfo;

namespace PerformanceV8Internal {

static void onwebkitresourcetimingbufferfullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    EventListener* cppValue(impl->onwebkitresourcetimingbufferfull());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onwebkitresourcetimingbufferfullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    PerformanceV8Internal::onwebkitresourcetimingbufferfullAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onwebkitresourcetimingbufferfullAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onwebkitresourcetimingbufferfull(), v8Value, V8Performance::eventListenerCacheIndex);
    impl->setOnwebkitresourcetimingbufferfull(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onwebkitresourcetimingbufferfullAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    PerformanceV8Internal::onwebkitresourcetimingbufferfullAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void timingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    RawPtr<PerformanceTiming> cppValue(impl->timing());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "timing"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void timingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::V8Performance_Timing_AttributeGetter);
    PerformanceV8Internal::timingAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void navigationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    RawPtr<PerformanceNavigation> cppValue(impl->navigation());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "navigation"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void navigationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::V8Performance_Navigation_AttributeGetter);
    PerformanceV8Internal::navigationAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onframetimingbufferfullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    EventListener* cppValue(impl->onframetimingbufferfull());
    v8SetReturnValue(info, cppValue ? v8::Local<v8::Value>(V8AbstractEventListener::cast(cppValue)->getListenerObject(impl->executionContext())) : v8::Local<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onframetimingbufferfullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    PerformanceV8Internal::onframetimingbufferfullAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void onframetimingbufferfullAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onframetimingbufferfull(), v8Value, V8Performance::eventListenerCacheIndex);
    impl->setOnframetimingbufferfull(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onframetimingbufferfullAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMSetter");
    PerformanceV8Internal::onframetimingbufferfullAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void memoryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    RawPtr<MemoryInfo> cppValue(impl->memory());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "memory"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void memoryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::V8Performance_Memory_AttributeGetter);
    PerformanceV8Internal::memoryAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void nowMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Performance* impl = V8Performance::toImpl(info.Holder());
    v8SetReturnValue(info, impl->now());
}

static void nowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    PerformanceV8Internal::nowMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getEntriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Performance* impl = V8Performance::toImpl(info.Holder());
    v8SetReturnValue(info, toV8(impl->getEntries(), info.Holder(), info.GetIsolate()));
}

static void getEntriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::UnprefixedPerformanceTimeline);
    PerformanceV8Internal::getEntriesMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getEntriesByTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getEntriesByType", "Performance", 1, info.Length()), info.GetIsolate());
        return;
    }
    Performance* impl = V8Performance::toImpl(info.Holder());
    V8StringResource<> entryType;
    {
        entryType = info[0];
        if (!entryType.prepare())
            return;
    }
    v8SetReturnValue(info, toV8(impl->getEntriesByType(entryType), info.Holder(), info.GetIsolate()));
}

static void getEntriesByTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::UnprefixedPerformanceTimeline);
    PerformanceV8Internal::getEntriesByTypeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void getEntriesByNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getEntriesByName", "Performance", 1, info.Length()), info.GetIsolate());
        return;
    }
    Performance* impl = V8Performance::toImpl(info.Holder());
    V8StringResource<> name;
    V8StringResource<> entryType;
    {
        name = info[0];
        if (!name.prepare())
            return;
        if (!info[1]->IsUndefined()) {
            entryType = info[1];
            if (!entryType.prepare())
                return;
        } else {
            entryType = nullptr;
        }
    }
    v8SetReturnValue(info, toV8(impl->getEntriesByName(name, entryType), info.Holder(), info.GetIsolate()));
}

static void getEntriesByNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::UnprefixedPerformanceTimeline);
    PerformanceV8Internal::getEntriesByNameMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void webkitClearResourceTimingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Performance* impl = V8Performance::toImpl(info.Holder());
    impl->webkitClearResourceTimings();
}

static void webkitClearResourceTimingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::PrefixedPerformanceClearResourceTimings);
    PerformanceV8Internal::webkitClearResourceTimingsMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void webkitSetResourceTimingBufferSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "webkitSetResourceTimingBufferSize", "Performance", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Performance* impl = V8Performance::toImpl(info.Holder());
    unsigned maxSize;
    {
        maxSize = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->webkitSetResourceTimingBufferSize(maxSize);
}

static void webkitSetResourceTimingBufferSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::PrefixedPerformanceSetResourceTimingBufferSize);
    PerformanceV8Internal::webkitSetResourceTimingBufferSizeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void markMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "mark", "Performance", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Performance* impl = V8Performance::toImpl(info.Holder());
    V8StringResource<> markName;
    {
        markName = info[0];
        if (!markName.prepare())
            return;
    }
    impl->mark(markName, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void markMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::UnprefixedUserTiming);
    PerformanceV8Internal::markMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void clearMarksMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Performance* impl = V8Performance::toImpl(info.Holder());
    V8StringResource<> markName;
    {
        if (!info[0]->IsUndefined()) {
            markName = info[0];
            if (!markName.prepare())
                return;
        } else {
            markName = nullptr;
        }
    }
    impl->clearMarks(markName);
}

static void clearMarksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::UnprefixedUserTiming);
    PerformanceV8Internal::clearMarksMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void measureMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "measure", "Performance", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Performance* impl = V8Performance::toImpl(info.Holder());
    V8StringResource<> measureName;
    V8StringResource<> startMark;
    V8StringResource<> endMark;
    {
        measureName = info[0];
        if (!measureName.prepare())
            return;
        if (!info[1]->IsUndefined()) {
            startMark = info[1];
            if (!startMark.prepare())
                return;
        } else {
            startMark = nullptr;
        }
        if (!info[2]->IsUndefined()) {
            endMark = info[2];
            if (!endMark.prepare())
                return;
        } else {
            endMark = nullptr;
        }
    }
    impl->measure(measureName, startMark, endMark, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void measureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::UnprefixedUserTiming);
    PerformanceV8Internal::measureMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void clearMeasuresMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Performance* impl = V8Performance::toImpl(info.Holder());
    V8StringResource<> measureName;
    {
        if (!info[0]->IsUndefined()) {
            measureName = info[0];
            if (!measureName.prepare())
                return;
        } else {
            measureName = nullptr;
        }
    }
    impl->clearMeasures(measureName);
}

static void clearMeasuresMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::UnprefixedUserTiming);
    PerformanceV8Internal::clearMeasuresMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void clearFrameTimingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Performance* impl = V8Performance::toImpl(info.Holder());
    impl->clearFrameTimings();
}

static void clearFrameTimingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::PerformanceFrameTiming);
    PerformanceV8Internal::clearFrameTimingsMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void setFrameTimingBufferSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setFrameTimingBufferSize", "Performance", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Performance* impl = V8Performance::toImpl(info.Holder());
    unsigned maxSize;
    {
        maxSize = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->setFrameTimingBufferSize(maxSize);
}

static void setFrameTimingBufferSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::PerformanceFrameTiming);
    PerformanceV8Internal::setFrameTimingBufferSizeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace PerformanceV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8PerformanceAccessors[] = {
    {"onwebkitresourcetimingbufferfull", PerformanceV8Internal::onwebkitresourcetimingbufferfullAttributeGetterCallback, PerformanceV8Internal::onwebkitresourcetimingbufferfullAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"timing", PerformanceV8Internal::timingAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"navigation", PerformanceV8Internal::navigationAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"memory", PerformanceV8Internal::memoryAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8PerformanceMethods[] = {
    {"now", PerformanceV8Internal::nowMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"getEntries", PerformanceV8Internal::getEntriesMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"getEntriesByType", PerformanceV8Internal::getEntriesByTypeMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"getEntriesByName", PerformanceV8Internal::getEntriesByNameMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"webkitClearResourceTimings", PerformanceV8Internal::webkitClearResourceTimingsMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"webkitSetResourceTimingBufferSize", PerformanceV8Internal::webkitSetResourceTimingBufferSizeMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"mark", PerformanceV8Internal::markMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"clearMarks", PerformanceV8Internal::clearMarksMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"measure", PerformanceV8Internal::measureMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"clearMeasures", PerformanceV8Internal::clearMeasuresMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8PerformanceTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "Performance", V8EventTarget::domTemplate(isolate), V8Performance::internalFieldCount,
        0, 0,
        V8PerformanceAccessors, WTF_ARRAY_LENGTH(V8PerformanceAccessors),
        V8PerformanceMethods, WTF_ARRAY_LENGTH(V8PerformanceMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    if (RuntimeEnabledFeatures::frameTimingSupportEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"onframetimingbufferfull", PerformanceV8Internal::onframetimingbufferfullAttributeGetterCallback, PerformanceV8Internal::onframetimingbufferfullAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::frameTimingSupportEnabled()) {
        const V8DOMConfiguration::MethodConfiguration clearFrameTimingsMethodConfiguration = {
            "clearFrameTimings", PerformanceV8Internal::clearFrameTimingsMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, clearFrameTimingsMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::frameTimingSupportEnabled()) {
        const V8DOMConfiguration::MethodConfiguration setFrameTimingBufferSizeMethodConfiguration = {
            "setFrameTimingBufferSize", PerformanceV8Internal::setFrameTimingBufferSizeMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts,
        };
        V8DOMConfiguration::installMethod(isolate, prototypeTemplate, defaultSignature, v8::None, setFrameTimingBufferSizeMethodConfiguration);
    }

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8Performance::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PerformanceTemplate);
}

bool V8Performance::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Performance::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Performance* V8Performance::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8Performance::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<Performance>()->ref();
#endif
}

void V8Performance::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<Performance>()->deref();
#endif
}

} // namespace blink
