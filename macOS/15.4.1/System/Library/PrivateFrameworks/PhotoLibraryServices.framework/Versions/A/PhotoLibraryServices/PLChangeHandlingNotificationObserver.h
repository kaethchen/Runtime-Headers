@class PFStateCaptureEventLog, NSString, PFStateCaptureHandler, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface PLChangeHandlingNotificationObserver : NSObject <PFStateCaptureProvider> {
    NSObject<OS_dispatch_workloop> *_workloop;
    NSObject<OS_dispatch_queue> *_lowNotifyQueue;
    NSObject<OS_dispatch_queue> *_highNotifyQueue;
    double _throttleInterval;
    PFStateCaptureEventLog *_eventLog;
    PFStateCaptureHandler *_stateHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _lock_notifyTokenLow;
    int _lock_notifyTokenHigh;
    id /* block */ _lock_notificationBlock;
}

@property (readonly) int notifyTokenLow;
@property (readonly) int notifyTokenHigh;
@property (readonly, copy) id /* block */ notificationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)stateCaptureDictionary;
- (void)_lock_startObservingRemoteNotificationsWithBlock:(id /* block */)a0;
- (BOOL)_lock_stopObservingRemoteNotifications;
- (void)_workloop_handleHighPriorityNotification;
- (void)_workloop_handleLowPriorityNotification;
- (void)_workloop_handleThrottleTimer;
- (void)_workloop_suspendIfThrottlingWithDebugEvent:(id)a0;
- (id)initWithLowPriorityThrottleInterval:(double)a0 targetWorkloop:(id)a1;
- (void)startObservingRemoteNotificationsWithBlock:(id /* block */)a0;
- (BOOL)stopObservingRemoteNotifications;

@end
