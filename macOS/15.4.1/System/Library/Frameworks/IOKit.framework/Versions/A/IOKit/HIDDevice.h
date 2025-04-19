@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_mach;

@interface HIDDevice : NSObject {
    struct { unsigned int service; unsigned long long regID; struct IOHIDDeviceDeviceInterface **deviceInterface; struct IOHIDDeviceTimeStampedDeviceInterface **deviceTimeStampedInterface; struct IOCFPlugInInterfaceStruct **plugInInterface; struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } deviceLock; struct __CFDictionary *properties; struct __CFSet *elements; struct __CFString *rootKey; struct __CFString *UUIDKey; struct IONotificationPort *notificationPort; unsigned int notification; struct __CFRunLoopSource *asyncEventSource; struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; void /* function */ *equal; void /* function */ *hash; void /* function */ *getPort; void /* function */ *perform; } sourceContext; struct __CFMachPort *queuePort; struct __CFRunLoop *runLoop; struct __CFString *runLoopMode; NSObject<OS_dispatch_queue> *dispatchQueue; NSObject<OS_dispatch_mach> *dispatchMach; _Atomic unsigned int dispatchStateMask; id /* block */ cancelHandler; struct __IOHIDQueue *queue; struct __CFArray *inputMatchingMultiple; unsigned char loadProperties; unsigned char isDirty; void *transaction; struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } callbackLock; struct __CFData *reportBuffer; struct __CFArray *batchElements; struct __CFSet *removalCallbackSet; struct __CFSet *inputReportCallbackSet; struct __CFSet *inputValueCallbackSet; _Atomic void *elementHandler; _Atomic void *removalHandler; _Atomic void *inputReportHandler; } _device;
}

@property (readonly) unsigned int service;

- (id)propertyForKey:(id)a0;
- (void)close;
- (void)open;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)activate;
- (void)cancel;
- (void)setDispatchQueue:(id)a0;
- (id)initWithService:(unsigned int)a0;
- (BOOL)commitElements:(id)a0 direction:(long long)a1 error:(out id *)a2;
- (BOOL)conformsToUsagePage:(long long)a0 usage:(long long)a1;
- (id)elementsMatching:(id)a0;
- (BOOL)getReport:(void *)a0 reportLength:(long long *)a1 withIdentifier:(long long)a2 forType:(long long)a3 error:(out id *)a4;
- (void)setCancelHandler:(id /* block */)a0;
- (void)setInputElementHandler:(id /* block */)a0;
- (void)setInputElementMatching:(id)a0;
- (void)setRemovalHandler:(id /* block */)a0;
- (BOOL)openWithOptions:(long long)a0 error:(out id *)a1;
- (BOOL)commitElements:(id)a0 direction:(long long)a1 error:(out id *)a2 timeout:(long long)a3 callback:(id /* block */)a4;
- (BOOL)getReport:(void *)a0 reportLength:(long long *)a1 withIdentifier:(long long)a2 forType:(long long)a3 error:(out id *)a4 timeout:(long long)a5 callback:(id /* block */)a6;
- (void)setBatchInputElementHandler:(id /* block */)a0;
- (void)setInputReportHandler:(id /* block */)a0;
- (BOOL)setReport:(const void *)a0 reportLength:(long long)a1 withIdentifier:(long long)a2 forType:(long long)a3 error:(out id *)a4;
- (BOOL)setReport:(const void *)a0 reportLength:(long long)a1 withIdentifier:(long long)a2 forType:(long long)a3 error:(out id *)a4 timeout:(long long)a5 callback:(id /* block */)a6;
- (void)dealloc;
- (id)description;
- (unsigned long long)_cfTypeID;

@end
