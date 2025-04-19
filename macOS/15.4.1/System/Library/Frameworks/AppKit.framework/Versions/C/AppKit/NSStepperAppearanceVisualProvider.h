@class NSView;

@interface NSStepperAppearanceVisualProvider : NSObject <NSStepperVisualProvider> {
    void /* unknown type, empty encoding */ stepper;
    void /* unknown type, empty encoding */ widgetView;
    void /* unknown type, empty encoding */ mustUseContextDrawing;
}

@property (nonatomic) void /* unknown type, empty encoding */ currentDrawingState;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) int blendModeForContextDrawing;
@property (nonatomic, readonly) NSView *designatedFocusRingView;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (void)attachToStepper:(id)a0;
- (void)detachFromStepper:(id)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 maskOnly:(BOOL)a1;
- (long long)hitTestForPoint:(struct CGPoint { double x0; double x1; })a0 inTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isFlipped:(BOOL)a2;

@end
