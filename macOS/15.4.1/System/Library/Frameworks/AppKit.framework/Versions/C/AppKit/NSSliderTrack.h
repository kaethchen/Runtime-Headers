@class NSSliderTickMarks, NSSliderKnob, NSAppearance, NSColor;
@protocol NSSliderTickMarksDelegate;

@interface NSSliderTrack : NSView {
    struct { unsigned long long sliderType; unsigned long long controlSize; BOOL isVertical; long long layoutDirection; long long tickMarkPosition; double normalizedValue; BOOL trackTintedWithValue; BOOL hasMinValueIcon; BOOL hasMaxValueIcon; long long controlState; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sliderCellFrame; double backingScaleFactor; BOOL isFlipped; NSAppearance *appearance; NSColor *trackFillColor; BOOL drawsBackground; long long numberOfTickMarks; BOOL animatesCollapse; double collapseAnimation_KnobClipProgress; double collapseAnimation_KnobOpacityProgress; double collapseAnimation_KnobCornerRadius; double collapseAnimation_TrackOpacityProgress; BOOL prefersInactiveBezelArt; BOOL usesModernStyle; long long semanticContext; } _drawingState;
    NSSliderKnob *_knobMaskView;
    NSSliderTickMarks *_tickmarksMaskView;
}

@property struct { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; long long x4; double x5; BOOL x6; BOOL x7; BOOL x8; long long x9; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x10; double x11; BOOL x12; id x13; id x14; BOOL x15; long long x16; BOOL x17; double x18; double x19; double x20; double x21; BOOL x22; BOOL x23; long long x24; } drawingState;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } knobMaskFrame;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } tickmarkFrame;
@property (weak) id<NSSliderTickMarksDelegate> tickmarkDelegate;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
