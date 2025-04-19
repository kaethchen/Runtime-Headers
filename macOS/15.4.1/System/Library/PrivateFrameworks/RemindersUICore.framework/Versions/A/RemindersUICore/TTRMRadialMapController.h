@class _MKLocationShifter, TTRMMapDragRadiusView, MKMapView, CLCircularRegion, NSString;
@protocol TTRMRadialMapControllerDelegate;

@interface TTRMRadialMapController : NSViewController <MKMapViewDelegate, TTRMRadialMapControllerDelegate>

@property (retain) MKMapView *mapView;
@property (retain) TTRMMapDragRadiusView *dragView;
@property (retain) _MKLocationShifter *locationShifter;
@property (retain, nonatomic) CLCircularRegion *region;
@property (nonatomic) long long proximity;
@property (weak, nonatomic) id<TTRMRadialMapControllerDelegate> delegate;
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
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)mapViewDidFinishRenderingMap:(id)a0 fullyRendered:(BOOL)a1;
- (void)mapViewWillStartRenderingMap:(id)a0;
- (void)radiusDidChange:(double)a0;
- (void)_displayLocation:(id)a0;
- (void)displayUpdatedLocation;

@end
