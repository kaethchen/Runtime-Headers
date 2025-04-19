@class NSNumber;

@interface NSSymbolEffectOptionsRepeatBehavior : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long _repeatBehavior;
@property (nonatomic) long long _repeatCount;
@property (retain, nonatomic) NSNumber *_repeatDelay;
@property (nonatomic) BOOL _prefersContinuous;

+ (id)behavior;
+ (id)behaviorContinuous;
+ (id)behaviorPeriodic;
+ (id)behaviorPeriodicWithCount:(long long)a0;
+ (id)behaviorPeriodicWithCount:(long long)a0 delay:(double)a1;
+ (id)behaviorPeriodicWithDelay:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
