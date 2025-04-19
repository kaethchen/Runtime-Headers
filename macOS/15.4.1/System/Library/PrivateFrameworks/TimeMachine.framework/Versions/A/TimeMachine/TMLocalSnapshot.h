@interface TMLocalSnapshot : NSObject

+ (id)dateFromLocalSnapshotName:(id)a0;
+ (id)legacyLocalSnapshotNameFromDate:(id)a0;
+ (id)localSnapshotBackupRootPathForDate:(id)a0 unitTest:(BOOL)a1;
+ (id)localSnapshotBasePathForUnitTesting:(BOOL)a0;
+ (id)localSnapshotNameFromDate:(id)a0;

@end
