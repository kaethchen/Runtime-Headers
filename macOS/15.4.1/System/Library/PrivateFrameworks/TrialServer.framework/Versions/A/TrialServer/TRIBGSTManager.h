@class _PASLock, TRIServerContext, NSObject;
@protocol OS_dispatch_queue;

@interface TRIBGSTManager : NSObject {
    _PASLock *_lock;
    TRIServerContext *_serverContext;
    NSObject<OS_dispatch_queue> *_asyncQueue;
}

+ (void)_submitDeactivationBGSTRequestAfterSeconds:(long long)a0 gracePeriodInSeconds:(long long)a1;

- (void).cxx_destruct;
- (void)expireBGST:(id)a0;
- (id)initWithServerContext:(id)a0 asyncQueue:(id)a1;
- (void)markAllBGSTsAsCompleted;
- (void)markBGSTAsStarted:(id)a0;
- (void)scheduleDeactivationBGSTWithEarliestDeactivationTaskScheduledDate:(id)a0 gracePeriodInSeconds:(long long)a1;

@end
