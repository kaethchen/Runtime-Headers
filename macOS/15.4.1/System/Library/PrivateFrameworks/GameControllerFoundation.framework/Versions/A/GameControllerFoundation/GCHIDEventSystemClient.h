@class NSSet, NSString, __GCHIDSystemObservation, NSObject, primaryHandler;
@protocol OS_dispatch_queue;

@interface GCHIDEventSystemClient : NSObject <GCHIDSystemServiceProviding, GCHIDSystemEventProviding> {
    const struct GCHIDEventSystemClientFunctions { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; struct GCHIDServiceClientFunctions *x10; } *_functions;
    id /* block */ _cancelHandler;
    struct __IOHIDEventSystemClient { } *_client;
    _Atomic BOOL _activated;
    _Atomic BOOL _cancelled;
    BOOL _isEventMonitor;
    struct HIDSystemObservationList { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; unsigned int count; __GCHIDSystemObservation *tqh_first; primaryHandler **tqh_last; struct { void *callback; unsigned long long target; unsigned long long context; } x0; } _serviceObservations;
    struct HIDSystemObservationList { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; unsigned int count; __GCHIDSystemObservation *tqh_first; primaryHandler **tqh_last; struct { void *callback; unsigned long long target; unsigned long long context; } x0; } _eventObservations;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSSet *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (void)invalidate;
- (void)activate;
- (void)setCancelHandler:(id /* block */)a0;
- (void)setMatching:(id)a0;
- (id)initWithQueue:(id)a0 type:(int)a1 attributes:(id)a2;
- (id)registerEventHandler:(id /* block */)a0;
- (void)registerEventObserver:(id)a0;
- (id)registerServicesChangedHandler:(id /* block */)a0 notifyExisting:(BOOL)a1;
- (void)registerServicesChangedObserver:(id)a0 notifyExisting:(BOOL)a1;
- (id)serviceForRegistryID:(unsigned long long)a0;
- (void)setEventCallBack:(void /* function */ *)a0 target:(void *)a1 context:(void *)a2;
- (void)setMatchingMultiple:(id)a0;
- (void)setServicesChangedCallback:(void /* function */ *)a0 target:(void *)a1 context:(void *)a2;
- (void)unregisterEventObserver:(id)a0;
- (void)unregisterServicesChangedObserver:(id)a0 notifyExisting:(BOOL)a1;
- (id)initWithQueue:(id)a0 type:(int)a1 attributes:(id)a2 environment:(id)a3;
- (id)initWithQueue:(id)a0 type:(int)a1 attributes:(id)a2 functions:(const struct GCHIDEventSystemClientFunctions { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; struct GCHIDServiceClientFunctions *x10; } *)a3;

@end
