@class NSString, HDCoalescedTaskPoolQuota, NSObject, NSMutableArray;
@protocol OS_xpc_object, OS_os_log, HDXPCActivityShim;

@interface HDXPCGatedActivity : NSObject <HDXPCActivityShim> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _handler;
    NSObject<OS_xpc_object> *_criteria;
    double _nextScheduledFireDeadline;
    BOOL _inProgress;
    NSMutableArray *_pendingCompletions;
    double _nextFireTime;
    NSMutableArray *_nextCompletions;
    id /* block */ unitTest_ActivityCompletion;
    id<HDXPCActivityShim> _activityShim;
}

@property (retain) NSObject<OS_xpc_object> *currentActivity;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory;
@property (readonly) BOOL shouldDefer;
@property BOOL rescheduleWhileInProgress;
@property BOOL waitingForTrigger;
@property (copy, nonatomic) HDCoalescedTaskPoolQuota *quota;

- (id)description;
- (void).cxx_destruct;
- (void)_registerActivityWithCriteria:(id)a0;
- (id)initWithName:(id)a0 criteria:(id)a1 loggingCategory:(id)a2 handler:(id /* block */)a3;
- (void)requestRunWithMaximumDelay:(double)a0 completion:(id /* block */)a1;
- (void)runUngatedWithCompletion:(id /* block */)a0;
- (void)unitTest_setActivityCompletion:(id /* block */)a0;
- (void)_lock_resetNextActivityFireDate;
- (void)_activityFinishedWithResult:(long long)a0 error:(id)a1;
- (void)_handleXPCActivityCallback:(id)a0;
- (void)_lock_setNextScheduledFireDeadline:(double)a0;
- (void)_performActivity:(id)a0 completion:(id /* block */)a1;
- (void)_registerActivityWithCriteria:(id)a0 delay:(double)a1 gracePeriod:(double)a2;
- (void)_runRequestWithMaximumDelay:(double)a0 requiredDelay:(double)a1 completion:(id /* block */)a2;
- (void)unitTest_setActivityShim:(id)a0;
- (id)xpcActivity_copyCriteria:(id)a0;
- (long long)xpcActivity_getState:(id)a0;
- (void)xpcActivity_register:(const char *)a0 criteria:(id)a1 handler:(id /* block */)a2;
- (BOOL)xpcActivity_setCompletionStatus:(long long)a0 activity:(id)a1;
- (void)xpcActivity_setCriteria:(id)a0 activity:(id)a1;
- (BOOL)xpcActivity_setState:(long long)a0 activity:(id)a1;
- (BOOL)xpcActivity_shouldDefer:(id)a0;
- (void)xpcActivity_unregister:(const char *)a0;

@end
