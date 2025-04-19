@class NSUUID, NSDate;

@interface HDRaceRouteClusterWorkout : NSObject

@property (readonly, nonatomic) NSUUID *workoutUUID;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double startDuration;
@property (readonly, nonatomic) double finishDuration;

+ (id)clusterWorkoutWithWorkoutEntity:(id)a0 transaction:(id)a1 metadataManager:(id)a2 error:(id *)a3;
+ (id)clusterWorkoutWithWorkoutUUID:(id)a0 transaction:(id)a1 metadataManager:(id)a2 error:(id *)a3;

- (void).cxx_destruct;

@end
