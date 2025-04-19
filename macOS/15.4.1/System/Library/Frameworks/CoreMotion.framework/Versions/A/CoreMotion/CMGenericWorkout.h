@interface CMGenericWorkout : CMWorkout {
    unsigned long long fWorkoutLabel;
}

@property (readonly, nonatomic) unsigned long long workoutLabel;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isAvailable;
+ (id)genericWorkoutInstance:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionId:(id)a0 workoutLabel:(unsigned long long)a1;

@end
