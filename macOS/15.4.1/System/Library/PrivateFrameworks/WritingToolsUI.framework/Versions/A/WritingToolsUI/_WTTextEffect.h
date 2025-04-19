@class NSUUID, NSTimer, NSString, _WTTextChunk, CALayer, _WTTextEffectView;

@interface _WTTextEffect : NSObject <_WTTextEffect> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _firstSnapshotRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _effectPresentationRect;
}

@property (retain) _WTTextChunk *chunk;
@property (retain) _WTTextEffectView *effectView;
@property (retain) NSUUID *identifier;
@property BOOL hidesOriginal;
@property (copy) id /* block */ completion;
@property (copy) id /* block */ preCompletion;
@property (retain) CALayer *rootLayer;
@property (retain) NSTimer *timer;
@property double invalidationDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithChunk:(id)a0 effectView:(id)a1;
- (void)invalidate:(BOOL)a0;
- (void)updateAnimationForTimeDelta:(double)a0;
- (BOOL)needsSetup;
- (void)_applyToFill:(id)a0 colors:(id)a1 center:(struct CGPoint { double x0; double x1; })a2 startRadius:(double)a3 endRadius:(double)a4;
- (void)_applyToFill:(id)a0 locatedColors:(id)a1 center:(struct CGPoint { double x0; double x1; })a2 startRadius:(double)a3 endRadius:(double)a4;
- (void)_applyToFill:(id)a0 nonlocatedColors:(id)a1 center:(struct CGPoint { double x0; double x1; })a2 startRadius:(double)a3 endRadius:(double)a4;
- (double)_maxRequestedEDR;
- (double)clamp:(double)a0 min:(double)a1 max:(double)a2;
- (double)defaultSweepRadius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectVisibilityFrame;
- (double)invalidationAnimationDuration;
- (double)sweepDuration;
- (double)sweepRadiusForLineSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateEffectWith:(id)a0;
- (BOOL)updatesOnGeometryChange;

@end
