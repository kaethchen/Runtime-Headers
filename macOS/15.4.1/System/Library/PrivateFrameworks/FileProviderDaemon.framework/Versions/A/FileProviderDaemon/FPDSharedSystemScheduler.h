@class NSString, NSMapTable, BGSystemTask, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FPDSharedSystemScheduler : NSObject {
    BGSystemTask *_task;
    id /* block */ _criteriaBuilder;
    long long _options;
    NSString *_label;
    NSMapTable *_watchers;
    BOOL _registered;
    long long _alwaysRunnableCount;
    NSObject<OS_dispatch_source> *_unregistrationTimer;
    NSDate *_lastRegistrationDate;
    NSDate *_lastUnregistrationDate;
    NSDate *_lastTriggerDate;
    NSDate *_lastUsageDate;
    NSDate *_lastDeferralDate;
    BOOL _preventRunning;
    BOOL _manualScheduling;
    BOOL _wasCheckedIn;
    BOOL _isExpired;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *queue;
@property (class) BOOL disableDelayedUnregistration;

@property BOOL preventRunning;
@property (getter=useManualScheduling) BOOL manualScheduling;
@property (readonly) BOOL hasRegisteredExecutors;
@property (readonly) long long registrationCount;
@property (readonly) NSString *label;
@property (readonly, getter=isRegistered) BOOL registered;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) NSDate *lastRegistrationDate;
@property (readonly) NSDate *lastTriggerDate;
@property (readonly) NSDate *lastUsageDate;
@property (readonly) NSDate *lastDeferralDate;
@property (readonly) long long dasContext;

+ (void)checkIn;
+ (BOOL)_backgroundTaskCriteriaEqualWithFirst:(id)a0 second:(id)a1;
+ (id)schedulerWithLabel:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)defer;
- (void)checkIn;
- (void)ping;
- (BOOL)shouldPause;
- (void)registerActivityIfNeeded;
- (long long)_contextForActivity:(id)a0;
- (void)addWatcher:(id)a0;
- (BOOL)canOrIsForcedToRunCheckingDeferral:(BOOL)a0 reason:(id *)a1;
- (BOOL)canRunCheckingDeferral:(BOOL)a0 reason:(id *)a1;
- (void)cancelDelayedUnregistration;
- (void)completeActivity;
- (BOOL)forceCriteria;
- (id /* block */)forceRunningWithReason:(id)a0;
- (id)initWithLabel:(id)a0 options:(long long)a1 taskRequestBuilder:(id /* block */)a2;
- (id)initWithTaskRequest:(id)a0 options:(long long)a1;
- (void)markWatcherDone:(id)a0;
- (void)notifyCanRun;
- (void)notifyIsDeferred;
- (void)registerActivity;
- (void)removeWatcher:(id)a0;
- (BOOL)runIfPossible:(id /* block */)a0;
- (void)unregisterActivityImmediately;
- (void)unregisterActivityWithDelay;
- (void)unregisterActivityWithDelayIfNeeded;
- (void)withReevaluationOfSchedulingState:(id /* block */)a0;

@end
