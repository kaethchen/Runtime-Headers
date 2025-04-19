@class NSString, CALayer, NSScrollerImp;
@protocol QLScrollerDelegate, CALayerDelegate;

@interface QLScrollerLayer : CALayer <NSScrollerImpDelegate, CALayerDelegate, NSEditor> {
    CALayer *_trackLayer;
    CALayer *_knobLayer;
}

@property (readonly) NSScrollerImp *imp;
@property (weak) id<QLScrollerDelegate, CALayerDelegate> delegate;
@property double doubleValue;
@property double knobProportion;
@property BOOL hideTrack;
@property (readonly) BOOL canScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)_aquaScrollerBehaviorChanged:(id)a0;
+ (id)keyPathsForValuesAffectingCanScroll;
+ (id)scrollerLayerWithStyle:(long long)a0 size:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)layoutSublayers;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromBacking:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToBacking:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)layer;
- (void)scrollerImp:(id)a0 animateKnobAlphaTo:(double)a1 duration:(double)a2;
- (void)scrollerImp:(id)a0 animateTrackAlphaTo:(double)a1 duration:(double)a2;
- (void)scrollerImp:(id)a0 overlayScrollerStateChangedTo:(unsigned long long)a1;
- (void)_updateScroll:(double)a0;
- (id)initWithStyle:(long long)a0 size:(unsigned long long)a1;
- (void)trackKnobWithEvent:(id)a0;

@end
