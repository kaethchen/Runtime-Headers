@class NSPanGestureRecognizer, NSArray, CAShapeLayer, NSBezierPath, CALayer, NSImage, NSColor;
@protocol ICMImageGalleryQuadEditorOverlayViewDelegate, ICMImageQuad;

@interface ICMImageGalleryQuadEditorOverlayView : NSView

@property (retain, nonatomic) NSArray *knobs;
@property (copy, nonatomic) NSArray *knobAXElements;
@property (nonatomic) BOOL knobSetupComplete;
@property (readonly, nonatomic) NSColor *validRectColor;
@property (readonly, nonatomic) NSColor *invalidRectColor;
@property (nonatomic) BOOL isDisplayingValidQuad;
@property (retain, nonatomic) CALayer *selectedKnob;
@property (retain, nonatomic) NSPanGestureRecognizer *panGR;
@property (retain, nonatomic) CALayer *knobLayer;
@property (retain, nonatomic) CAShapeLayer *outlineLayer;
@property (readonly, nonatomic) NSBezierPath *outlinePath;
@property (retain, nonatomic) CALayer *loupeLayer;
@property (retain, nonatomic) CALayer *loupeContentsLayer;
@property (nonatomic) struct CGPoint { double x; double y; } gestureRecognizerBeginPoint;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) long long orientation;
@property (weak, nonatomic) id<ICMImageGalleryQuadEditorOverlayViewDelegate> delegate;
@property (retain, nonatomic) id<ICMImageQuad> quad;
@property (readonly, nonatomic) id<ICMImageQuad> adjustedQuad;
@property (readonly, nonatomic) BOOL isDraggingKnob;
@property (readonly, nonatomic) BOOL isQuadValid;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)accessibilityChildren;
- (id)accessibilityHelp;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isAccessibilityElement;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)wantsLayer;
- (void)didPan:(id)a0;
- (id)closestKnobToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)moveKnob:(id)a0 toPosition:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectFromApplyingOrientation:(long long)a0 toContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setImage:(id)a0 orientation:(long long)a1;
- (void)setUpKnobsIfNecessary;
- (void)setupLoupeLayerIfNeeded;
- (void)updateKnobLocations;
- (void)updateKnobLocationsToRect:(id)a0;
- (void)updateOutlineAndKnobColorForCurrentValidityIfNecessary;
- (void)updateOutlineAndKnobColorForIsValid:(BOOL)a0;
- (void)updateOutlineLayer;
- (void)updateSelectedKnobContents;

@end
