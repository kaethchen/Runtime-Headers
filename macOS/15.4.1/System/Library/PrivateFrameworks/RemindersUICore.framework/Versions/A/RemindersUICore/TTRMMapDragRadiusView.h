@class NSView, MKMapView, NSTextField;
@protocol TTRMRadialMapControllerDelegate, MKOverlay, MKAnnotation;

@interface TTRMMapDragRadiusView : NSView

@property (retain) NSView *handleImageView;
@property (retain) id<MKAnnotation> annotation;
@property (retain) id<MKOverlay> circleOverlay;
@property (retain) id<MKOverlay> dashOverlay;
@property (weak, nonatomic) MKMapView *mapView;
@property (weak, nonatomic) id<TTRMRadialMapControllerDelegate> delegate;
@property long long proximity;
@property (nonatomic) double radius;
@property struct CGPoint { double x; double y; } center;
@property (nonatomic) double metersPerPixel;
@property (retain) NSTextField *text;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformIncrement;
- (id)accessibilityRole;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (double)minimumInMeters;
- (void)addHandleForAnnotation:(id)a0;
- (void)animateHandleIn:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })calculatedCenter;
- (double)feetToMeters:(double)a0;
- (void)popAnimateHandle;
- (void)recalcMetersPerPixel;
- (void)removeHandle:(BOOL)a0;
- (void)resizeCircleAfterDelay;
- (void)resizeCircleDragEnded:(BOOL)a0;
- (void)updateOverlays;
- (void)updateTextWithRadius:(double)a0;
- (BOOL)usesMetric;
- (double)ttrmAccessibilityRadiusByAdding:(double)a0;
- (double)ttrmAccessibilityRadiusIncrement;
- (BOOL)ttrmAccessibilityUpdateWithRadius:(double)a0;
- (void)updateRadius:(double)a0 finished:(BOOL)a1;

@end
