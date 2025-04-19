@class _MKLocationShifter, MKMapView, MapDragRadiusView, NSString, EKStructuredLocation;
@protocol MapDragRadiusDelegate;

@interface EKUIRadialMapController : NSViewController <MKMapViewDelegate, MapDragRadiusDelegate>

@property (retain) MKMapView *mapView;
@property (retain) MapDragRadiusView *dragView;
@property (retain) _MKLocationShifter *locationShifter;
@property (retain, nonatomic) EKStructuredLocation *structuredLocation;
@property (nonatomic) long long proximity;
@property (retain) id<MapDragRadiusDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)mapView:(id)a0 didDeselectAnnotationView:(id)a1;
- (void)mapView:(id)a0 didSelectAnnotationView:(id)a1;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (void)mapView:(id)a0 regionWillChangeAnimated:(BOOL)a1;
- (id)mapView:(id)a0 rendererForOverlay:(id)a1;
- (void)mapViewDidFinishRenderingMap:(id)a0 fullyRendered:(BOOL)a1;
- (void)mapViewWillStartRenderingMap:(id)a0;
- (void)displayLocation:(id)a0;
- (void)radiusDidChange:(double)a0;
- (void)systemColorsChanged;

@end
