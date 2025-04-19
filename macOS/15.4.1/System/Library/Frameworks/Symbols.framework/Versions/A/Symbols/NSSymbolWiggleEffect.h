@interface NSSymbolWiggleEffect : NSSymbolEffect

@property (nonatomic) long long _style;
@property (nonatomic) double _angle;
@property (nonatomic) long long _layerBehavior;

+ (id)effect;
+ (double)_normalizeAngle:(double)a0;
+ (id)wiggleBackwardEffect;
+ (id)wiggleClockwiseEffect;
+ (id)wiggleCounterClockwiseEffect;
+ (id)wiggleCustomAngleEffect:(double)a0;
+ (id)wiggleDownEffect;
+ (id)wiggleForwardEffect;
+ (id)wiggleLeftEffect;
+ (id)wiggleRightEffect;
+ (id)wiggleUpEffect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectWithByLayer;
- (id)effectWithWholeSymbol;
- (id)_rbOptionsMutable;
- (id)_withStyle:(long long)a0 angle:(double)a1;

@end
