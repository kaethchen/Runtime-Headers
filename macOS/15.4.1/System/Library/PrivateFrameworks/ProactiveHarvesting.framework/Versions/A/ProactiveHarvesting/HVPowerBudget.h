@class _DASScheduler, NSDate, HVPowerBudgetThrottlingState, NSObject;
@protocol OS_os_log, NSObject;

@interface HVPowerBudget : NSObject {
    HVPowerBudgetThrottlingState *_throttlingState;
    NSDate *_lastPlugInTime;
    id<NSObject> _batteryObserver;
    _DASScheduler *_scheduler;
    BOOL _isScheduled;
    _Atomic BOOL _discretionaryWorkInProgress;
    NSObject<OS_os_log> *_log;
}

+ (id)defaultBudget;
+ (void)setCanDoWorkOverrideForTesting:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)throttlingState;
- (unsigned char)canDoDiscretionaryWork;
- (unsigned char)canDoExtraDiscretionaryWork;
- (void)didConsumeAnExtraBudgetedOperation;
- (void)doDiscretionaryWork:(id /* block */)a0 orElse:(id /* block */)a1;
- (id)initWithThrottleBudget:(id)a0;
- (void)refillThrottleBudget;

@end
