@class NSView, MKMapView, NSTextField;
@protocol MapDragRadiusDelegate, MKOverlay, MKAnnotation;

@interface MapDragRadiusView : NSView

@property (retain) NSView *handleImageView;
@property (retain) id<MKAnnotation> annotation;
@property (retain) id<MKOverlay> circleOverlay;
@property (retain) id<MKOverlay> dashOverlay;
@property (retain) MKMapView *mapView;
@property (retain) id<MapDragRadiusDelegate> delegate;
@property long long proximity;
@property (nonatomic) double radius;
@property struct CGPoint { double x; double y; } center;
@property (nonatomic) double metersPerPixel;
@property (retain) NSTextField *text;
@property BOOL animating;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
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

@end
