@class NSSymbolEffectOptionsRepeatBehavior;

@interface _NSSymbolEffectOptionsRepeatStyle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSymbolEffectOptionsRepeatBehavior *_backing;

+ (id)style;
+ (id)styleContinuous;
+ (id)stylePeriodic;
+ (id)stylePeriodicWithCount:(long long)a0;
+ (id)stylePeriodicWithCount:(long long)a0 delay:(double)a1;
+ (id)stylePeriodicWithDelay:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
