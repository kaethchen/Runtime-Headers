@class NSArray;

@interface LUI2VibrancyEffectLayer : CALayer

@property (nonatomic, copy) NSArray *sublayers;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)addSublayer:(id)a0;
- (id)initWithLayer:(id)a0;
- (void)insertSublayer:(id)a0 above:(id)a1;
- (void)insertSublayer:(id)a0 atIndex:(unsigned int)a1;
- (void)insertSublayer:(id)a0 below:(id)a1;
- (void)replaceSublayer:(id)a0 with:(id)a1;

@end
