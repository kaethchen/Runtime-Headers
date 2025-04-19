@interface NSSymbolEffect : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long _effectType;

+ (void)_addLayerBehavior:(long long)a0 ToOptions:(id)a1;
+ (id)_effectWithType:(long long)a0;
+ (void)_mergeEffectOptions:(id)a0 intoRBOptions:(id)a1 forEffect:(long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_rbAnimation;
- (id)_rbOptionsWithEffectOptions:(id)a0;
- (void)_setEffectType:(long long)a0;
- (id)_rbOptions;
- (id)_rbOptionsMutable;

@end
