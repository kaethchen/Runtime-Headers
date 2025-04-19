@class IKNSelection, IKNImageViewHandler;

@interface IKNKnobsLayer : CALayer {
    struct CGPath { } *_handlePath;
    long long _mouseOverKnob;
    long long _autoItemGuideIndex;
    long long _mouseOverGuideIndex;
    BOOL _drawGuides;
    long long _guideCount;
    struct CGPoint { double x; double y; } _guidePoints[8];
}

@property (nonatomic) IKNImageViewHandler *handler;
@property (nonatomic) BOOL hideNonSelectedKnobs;
@property (nonatomic) BOOL selectionsCanBeModified;
@property (retain) IKNSelection *mouseOverSelection;

+ (void)initialize;

- (void)dealloc;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)mouseDown:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)setup;
- (void)addGuideFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1 index:(long long *)a2;
- (void)adjustToViewFrameChange:(id)a0;
- (void)dragWithEvent:(id)a0 layers:(id)a1;
- (void)drawCircleInContext:(struct CGContext { } *)a0 center:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2 relativeTo:(id)a3;
- (BOOL)drawGuideForResizing:(struct CGPoint { double x0; double x1; })a0 autoItem:(id)a1;
- (void)drawHandleInContext:(struct CGContext { } *)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 filled:(BOOL)a2;
- (void)resetMouseOverInfo;
- (void)resizeWithEvent:(id)a0 item:(id)a1 knob:(long long)a2;
- (void)rotateWithEvent:(id)a0 layers:(id)a1;
- (void)updateGuidesForAutodetectedItem:(id)a0 drawSingleGuide:(BOOL)a1;

@end
