@class NSSwitch, NSView, NSString, NSWidgetView;

@interface NSSwitchLegacyVisualProvider : NSObject <NSSwitchVisualProvider> {
    NSWidgetView *_trackView;
    NSWidgetView *_shadowView;
    NSWidgetView *_knobView;
    NSWidgetView *_axIndicatorView;
    NSWidgetView *_knobMaskView;
    struct { double scaleFactor; unsigned long long controlSize; unsigned char isActive : 1; unsigned char isEnabled : 1; unsigned char isHighlighted : 1; unsigned char isOn : 1; unsigned char isRTL : 1; unsigned char shouldShowAxLabels : 1; } _currentDrawingState;
    NSSwitch *_nsSwitch;
}

@property (readonly) NSWidgetView *_trackView;
@property (readonly) NSWidgetView *_shadowView;
@property (readonly) NSWidgetView *_knobView;
@property (readonly) NSWidgetView *_axIndicatorView;
@property (readonly) NSWidgetView *_knobMaskView;
@property (weak) NSSwitch *nsSwitch;
@property struct { double x0; unsigned long long x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; } currentDrawingState;
@property (readonly) NSView *designatedFocusRingView;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trackRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (void)drawingStateDidChangeWithAnimation:(BOOL)a0 controlSizeChanged:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobRectWithThumbOnRight:(BOOL)a0;
- (void)layoutSubviews;
- (void)removeSubviews;

@end
