@class NSDate;

@interface TMThinningAlgorithm : NSObject

@property unsigned long long numberOfHourlySnapshotsToKeep;
@property unsigned long long numberOfDailySnapshotsToKeep;
@property BOOL shouldKeepWeeklySnapshots;
@property (retain) NSDate *now;

+ (id)backupThinningAlgorithm;
+ (id)localSnapshotThinningAlgorithm;

- (void).cxx_destruct;
- (id)datesToRemoveFromSet:(id)a0;

@end
