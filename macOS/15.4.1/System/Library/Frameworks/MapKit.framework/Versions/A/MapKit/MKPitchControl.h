@class NSString, MKMapView, NSClickGestureRecognizer, NSCursor, NSPanGestureRecognizer, CALayer, MKModernControlAppearanceHelper, NSObject, CAShapeLayer;
@protocol OS_dispatch_source;

@interface MKPitchControl : NSView <MKModernControlAppearanceView, NSGestureRecognizerDelegate> {
    MKModernControlAppearanceHelper *_appearanceHelper;
    NSPanGestureRecognizer *_dragRecognizer;
    NSClickGestureRecognizer *_tapRecognizer;
    NSCursor *_currentCursor;
    BOOL _userInteractionEnabled;
    NSObject<OS_dispatch_source> *_scrollMomentumTimer;
    double _scrollTranslation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sliderFrame;
    CALayer *_backgroundLayer;
    CAShapeLayer *_sliderLayerTop;
    CAShapeLayer *_sliderLayerHandle;
    CAShapeLayer *_sliderLayerBottom;
    struct CGPoint { double x; double y; } _dragMapScreenPoint;
    double _scrollingResistance;
    double _lastSliderPosition;
}

@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) double sliderPercent;
@property (nonatomic) BOOL hovering;
@property (nonatomic) BOOL hoveringOnSlider;
@property (nonatomic) BOOL scrolling;
@property (nonatomic) BOOL dragging;
@property (nonatomic) BOOL maybeDragging;
@property (weak, nonatomic) MKMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pitchControlWithMapView:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)scrollWheel:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateAppearance;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (double)degreesForPercent:(double)a0;
- (void)dragGestureRecognizerChanged:(id)a0;
- (id)initWithMapView:(id)a0;
- (BOOL)isPointInSliderHandle:(struct CGPoint { double x0; double x1; })a0;
- (double)percentForDegrees:(double)a0;
- (void)pitchChanged:(id)a0;
- (double)sliderPercentForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)tapGestureRecognizerChanged:(id)a0;
- (void)updateCursor;
- (void)updateSlider;

@end
