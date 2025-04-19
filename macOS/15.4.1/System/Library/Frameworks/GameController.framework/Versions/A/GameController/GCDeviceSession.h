@class NSString, NSArray, NSSet, NSObject, _GCHIDEventSubject, GCHIDEventSystemClient, GCDeviceSessionConfiguration, _GCCurrentApplicationForegroundMonitor;
@protocol OS_dispatch_queue;

@interface GCDeviceSession : NSObject <GCCurrentApplicationForegroundObserver, GCDeviceSession> {
    GCDeviceSessionConfiguration *_configuration;
    _Atomic BOOL _activated;
    _Atomic BOOL _invalidated;
    _GCCurrentApplicationForegroundMonitor *_foregroundMonitor;
    GCHIDEventSystemClient *_hidEventSystemClient;
    NSArray *_swiftObservers;
    id /* block */ _deviceLifecycleEventHandler;
    NSArray *_keyboards;
    NSArray *_mice;
    NSArray *_controllers;
    NSArray *_racingWheels;
}

@property (readonly) NSSet *providers;
@property (readonly, copy) GCDeviceSessionConfiguration *configuration;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy) id /* block */ sessionEventHandler;
@property (readonly) NSArray *keyboards;
@property (readonly) NSArray *mice;
@property (readonly) NSArray *controllers;
@property (readonly) NSArray *racingWheels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) NSObject<OS_dispatch_queue> *sessionQueue;
@property (readonly) NSObject<OS_dispatch_queue> *hidEventSystemQueue;
@property (readonly) _GCHIDEventSubject *hidEventSource;

+ (id)serviceFor:(id)a0 client:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithConfiguration:(id)a0;
- (void)activateWithCompletionHandler:(id /* block */)a0;
- (void)CBApplicationDidBecomeActive;
- (void)CBApplicationWillResignActive;
- (BOOL)_swift_addObserver:(id)a0;
- (id)_swift_configuration;
- (void)_swift_removeObserver:(id)a0;
- (BOOL)activateWithError:(id *)a0;
- (id)initWithConfiguration:(id)a0 environment:(id)a1;
- (id)serviceFor:(id)a0 client:(id)a1;

@end
