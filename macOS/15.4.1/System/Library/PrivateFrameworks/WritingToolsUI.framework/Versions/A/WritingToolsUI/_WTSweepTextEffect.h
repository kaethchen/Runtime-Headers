@class NSString, RBLayer, CADisplayLink, CALayer, NSColor;

@interface _WTSweepTextEffect : _WTTextEffect <RBLayerDelegate>

@property (retain) RBLayer *rbLayer;
@property (retain) CADisplayLink *displayLink;
@property double startTime;
@property (retain) CALayer *rootMaskLayer;
@property (retain) CALayer *fadeOutLayer;
@property (retain, nonatomic) NSColor *animateFromColor;
@property (retain, nonatomic) NSColor *baseFillColor;
@property (nonatomic) struct CGSize { double width; double height; } lineSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)update:(id)a0;
- (id)initWithChunk:(id)a0 effectView:(id)a1;
- (void)invalidate:(BOOL)a0;
- (void)RBLayer:(id)a0 draw:(id)a1;
- (double)sweepRadius;
- (void)updateEffectWith:(id)a0;
- (BOOL)updatesOnGeometryChange;

@end
