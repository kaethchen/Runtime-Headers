@class NSNumber;

@interface NSSymbolEffectOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double _speed;
@property (nonatomic) long long _repeatBehavior;
@property (nonatomic) long long _repeatCount;
@property (retain, nonatomic) NSNumber *_repeatDelay;
@property (nonatomic) BOOL _prefersContinuous;

+ (id)options;
+ (id)_optionsWithRepeatStyle:(id)a0;
+ (id)optionsWithNonRepeating;
+ (id)optionsWithRepeatBehavior:(id)a0;
+ (id)optionsWithRepeatCount:(long long)a0;
+ (id)optionsWithRepeatCount:(long long)a0 delay:(double)a1;
+ (id)optionsWithRepeating;
+ (id)optionsWithRepeatingDelay:(double)a0;
+ (id)optionsWithSpeed:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_optionsWithRepeatStyle:(id)a0;
- (id)optionsWithNonRepeating;
- (id)optionsWithRepeatBehavior:(id)a0;
- (id)optionsWithRepeatCount:(long long)a0;
- (id)optionsWithRepeatCount:(long long)a0 delay:(double)a1;
- (id)optionsWithRepeating;
- (id)optionsWithRepeatingDelay:(double)a0;
- (id)optionsWithSpeed:(double)a0;

@end
