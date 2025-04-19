@class JSValue, JSVirtualMachine, NSString;

@interface JSContext : NSObject {
    struct RetainPtr<JSVirtualMachine> { void *m_ptr; } m_virtualMachine;
    struct OpaqueJSContext { } *m_context;
    struct RetainPtr<JSValue> { void *m_ptr; } m_exception;
    struct WeakObjCPtr<id<JSModuleLoaderDelegate>> { id m_weakReference; } m_moduleLoaderDelegate;
}

@property (readonly) JSValue *globalObject;
@property (retain) JSValue *exception;
@property (copy) id /* block */ exceptionHandler;
@property (readonly) JSVirtualMachine *virtualMachine;
@property (copy) NSString *name;
@property (nonatomic, getter=isInspectable) BOOL inspectable;

+ (id)currentContext;
+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext { } *)a0;
+ (id)currentArguments;
+ (id)currentCallee;
+ (id)currentThis;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id).cxx_construct;
- (struct OpaqueJSContext { } *)JSGlobalContextRef;
- (BOOL)_remoteInspectionEnabled;
- (id)evaluateScript:(id)a0;
- (struct __CFRunLoop { } *)_debuggerRunLoop;
- (BOOL)_includesNativeCallStackWhenReportingExceptions;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop { } *)a0;
- (void)_setITMLDebuggableType;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)a0;
- (void)_setRemoteInspectionEnabled:(BOOL)a0;
- (void)beginCallbackWithData:(void *)a0 calleeValue:(struct OpaqueJSValue { } *)a1 thisValue:(struct OpaqueJSValue { } *)a2 argumentCount:(unsigned long long)a3 arguments:(const struct OpaqueJSValue **)a4;
- (BOOL)boolFromNotifyException:(struct OpaqueJSValue { } *)a0;
- (id)dependencyIdentifiersForModuleJSScript:(id)a0;
- (void)endCallbackWithData:(void *)a0;
- (void)ensureWrapperMap;
- (id)evaluateJSScript:(id)a0;
- (id)evaluateScript:(id)a0 withSourceURL:(id)a1;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { } *)a0;
- (id)initWithVirtualMachine:(id)a0;
- (id)moduleLoaderDelegate;
- (void)notifyException:(struct OpaqueJSValue { } *)a0;
- (void)setModuleLoaderDelegate:(id)a0;
- (id)valueFromNotifyException:(struct OpaqueJSValue { } *)a0;
- (id)wrapperForJSObject:(struct OpaqueJSValue { } *)a0;
- (id)wrapperForObjCObject:(id)a0;
- (id)wrapperMap;

@end
