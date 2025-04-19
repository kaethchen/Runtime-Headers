@interface NSSymbolBreatheEffect : NSSymbolEffect

@property (nonatomic) long long _style;
@property (nonatomic) long long _layerBehavior;

+ (id)effect;
+ (id)breatheByDimmingEffect;
+ (id)breatheByScalingEffect;
+ (id)breathePlainEffect;
+ (id)breathePulseEffect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectWithByLayer;
- (id)effectWithWholeSymbol;
- (id)_rbOptionsMutable;
- (id)_withStyle:(long long)a0;

@end
