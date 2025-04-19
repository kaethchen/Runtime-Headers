@interface NSSymbolRotateEffect : NSSymbolEffect

@property (nonatomic) long long _isClockwise;
@property (nonatomic) long long _layerBehavior;

+ (id)effect;
+ (id)rotateClockwiseEffect;
+ (id)rotateCounterClockwiseEffect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectWithByLayer;
- (id)effectWithWholeSymbol;
- (id)_withClockwise:(long long)a0;
- (id)_rbOptionsMutable;

@end
