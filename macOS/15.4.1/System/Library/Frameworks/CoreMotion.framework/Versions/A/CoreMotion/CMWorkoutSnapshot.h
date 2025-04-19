@class CMWorkout, NSDate;

@interface CMWorkoutSnapshot : NSObject <NSSecureCoding, NSCopying> {
    long long _state;
    CMWorkout *_workout;
    NSDate *_entryDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSDate *entryDate;
@property (readonly, nonatomic) CMWorkout *workout;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(long long)a0 workout:(id)a1 entryDate:(id)a2;

@end
