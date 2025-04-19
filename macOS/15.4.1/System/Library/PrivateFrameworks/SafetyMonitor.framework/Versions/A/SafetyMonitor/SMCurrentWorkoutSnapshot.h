@class NSUUID;

@interface SMCurrentWorkoutSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) BOOL isWorkoutOngoing;
@property (readonly, nonatomic) BOOL isFirstPartyWorkout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 activityType:(unsigned long long)a1 isWorkoutOngoing:(BOOL)a2 isFirstPartyWorkout:(BOOL)a3;

@end
