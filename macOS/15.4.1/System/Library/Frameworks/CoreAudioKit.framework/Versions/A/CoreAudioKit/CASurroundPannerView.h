@class NSImage, NSBezierPath;

@interface CASurroundPannerView : CAPannerView {
    NSImage *knobImage;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } knobRect;
    struct CGPoint { double x; double y; } knobCenterPoint;
    double knobRadius;
    double mDistance;
    double mElevation;
    struct CGPoint { double x; double y; } previousMouseLocation;
    struct CGPoint { double x; double y; } knobOffset;
    NSBezierPath *elevationKnob;
    BOOL changingElevation;
}

- (void)dealloc;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (double)angle;
- (double)distance;
- (void)setAngle:(double)a0;
- (void)setDistance:(double)a0;
- (double)elevation;
- (void)setElevation:(double)a0;
- (void)setKnobImage:(id)a0;
- (double)calculateAngleForPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)calculateAngleForPoint:(struct CGPoint { double x0; double x1; })a0 flipCoordinates:(BOOL)a1;
- (void)drawElevationTriangle;
- (struct CGPoint { double x0; double x1; })rotatePoint:(struct CGPoint { double x0; double x1; })a0 angle:(double)a1 aboutPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)updateUIForDrawingAngle:(double)a0 distance:(double)a1;

@end
