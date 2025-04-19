@class NSArray, NSMutableArray;
@protocol WBSCloudKitThrottlerDataStore;

@interface WBSCloudKitThrottler : NSObject {
    NSMutableArray *_pastOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
    double _numberOfSecondsToMonitor;
    unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
}

@property (weak, nonatomic) id<WBSCloudKitThrottlerDataStore> dataStore;

+ (BOOL)policyStringRepresentsValidPolicy:(id)a0;
+ (id)_distributionBucketsFromConfiguration:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)dateOfNextPermittedOperationWithPriority:(long long)a0;
- (id)initWithPolicyString:(id)a0;
- (void)operationWithPriority:(long long)a0 didCompleteWithResult:(long long)a1;
- (BOOL)permitsOperationWithPriority:(long long)a0;
- (void)reloadRecordOfPastOperations;
- (void)setPolicyString:(id)a0;
- (BOOL)_loadDistributionConfiguration:(id)a0;
- (void)_addOperationAtDate:(id)a0;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (void)_loadRecordOfPastOperations;
- (double)_minimumTimeBetweenOperationsForOperations:(id)a0;
- (void)_pruneExpiredOrInvalidOperations;
- (void)_saveRecordOfPastOperations;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_test_numberOfSecondsToMonitor;
- (BOOL)_throttlerIsActive;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)a0;

@end
