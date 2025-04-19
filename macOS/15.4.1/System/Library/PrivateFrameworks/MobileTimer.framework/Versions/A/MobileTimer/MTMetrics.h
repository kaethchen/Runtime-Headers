@protocol NAScheduler;

@interface MTMetrics : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;

+ (id)_sharedPublicMetrics;

- (id)init;
- (void).cxx_destruct;
- (void)logTimerDeleted;
- (void)logTimerUpdated;
- (void)logAlarmAdded:(BOOL)a0;
- (void)logAlarmDeleted:(BOOL)a0;
- (void)logAlarmDismissAction:(unsigned long long)a0;
- (void)logAlarmSnoozeAction:(unsigned long long)a0;
- (void)logAlarmUpdated:(BOOL)a0;
- (void)logMultipleTimersAdded:(id)a0;
- (void)logSyncCompleted;
- (void)logSyncFailedWithError:(id)a0;
- (void)logTimerAdded;
- (void)logTimerDismissed;
- (void)logTimerRepeated;

@end
