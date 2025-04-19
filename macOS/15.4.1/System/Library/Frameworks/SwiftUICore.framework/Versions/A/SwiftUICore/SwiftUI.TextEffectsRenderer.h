@protocol _NSCustomTextRenderingDisplayLink;

@interface SwiftUI.TextEffectsRenderer : NSObject <_NSTextAnimatorCoordination, NSCustomTextRendering> {
    void /* unknown type, empty encoding */ animationController;
    void /* unknown type, empty encoding */ geometryObserver;
    void /* unknown type, empty encoding */ surfaceMap;
    void /* unknown type, empty encoding */ currentFragments;
    void /* unknown type, empty encoding */ currentIDs;
    void /* unknown type, empty encoding */ updatedFragments;
    void /* unknown type, empty encoding */ layoutBounds;
    void /* unknown type, empty encoding */ currentBounds;
    void /* unknown type, empty encoding */ lineFragmentPadding;
    void /* unknown type, empty encoding */ notifyFlags;
    void /* unknown type, empty encoding */ keyframesVersion;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } customTextBounds;
@property (nonatomic, retain) id<_NSCustomTextRenderingDisplayLink> externalDisplayLink;
@property (nonatomic, readonly) BOOL fragmentsValid;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ contentsScale;

- (id)init;
- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (void)preLayoutNotify;
- (id)animatorForTextAnimation:(id)a0;
- (id)animatorForTextAnimation:(id)a0 notify:(id /* block */)a1;
- (void)beginLayout;
- (struct CGPoint { double x0; double x1; })convertPointFromRenderSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointToRenderSpace:(struct CGPoint { double x0; double x1; })a0 location:(id)a1 affinity:(long long)a2;
- (struct CGPoint { double x0; double x1; })convertPointToRenderSpace:(struct CGPoint { double x0; double x1; })a0 textRange:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPointToTextAnimationsCoordinateSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointToTextAnimationsCoordinateSpace:(struct CGPoint { double x0; double x1; })a0 textRange:(id)a1;
- (void)didLayoutFragment:(id)a0;
- (void)endLayoutWithConsumer:(id /* block */)a0;
- (void)enumerateTextSegmentsInRange:(id)a0 type:(long long)a1 options:(unsigned long long)a2 textLayoutManager:(id)a3 usingBlock:(id /* block */)a4;
- (void)invalidateTemporaryAttributesInRange:(id)a0;
- (void)postLayoutNotify;
- (void)textDidEditRange:(id)a0 replacementLength:(long long)a1;

@end
