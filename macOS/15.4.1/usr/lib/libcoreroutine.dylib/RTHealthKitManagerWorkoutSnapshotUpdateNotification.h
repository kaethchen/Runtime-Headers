@class RTCurrentWorkoutSnapshot;

@interface RTHealthKitManagerWorkoutSnapshotUpdateNotification : RTNotification

@property (readonly, nonatomic) RTCurrentWorkoutSnapshot *workoutSnapshot;

- (void).cxx_destruct;
- (id)initWithWorkoutSnapshot:(id)a0;

@end
