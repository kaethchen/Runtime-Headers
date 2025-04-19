@interface NSSymbolBounceEffect : NSSymbolEffect

@property (nonatomic) long long _direction;
@property (nonatomic) long long _layerBehavior;

+ (id)bounceUpEffect;
+ (id)effect;
+ (id)bounceDownEffect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectWithByLayer;
- (id)effectWithWholeSymbol;
- (id)_withDirection:(long long)a0;
- (id)_rbOptionsMutable;

@end
