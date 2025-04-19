@class NSUUID, NSDate;

@interface RTCurrentWorkoutSnapshot : NSObject

@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) long long locationType;
@property (readonly, nonatomic) long long swimmingLocationType;
@property (readonly, nonatomic) BOOL isFirstPartyWorkout;
@property (readonly, nonatomic) unsigned long long sessionState;
@property (readonly, copy, nonatomic) NSDate *workoutStartDate;
@property (readonly, nonatomic) NSDate *snapshotDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(id)a0 activityType:(unsigned long long)a1 locationType:(long long)a2 swimmingLocationType:(long long)a3 isFirstPartyWorkout:(BOOL)a4 sessionState:(unsigned long long)a5 workoutStartDate:(id)a6 snapshotDate:(id)a7;

@end
