@class KHFrame, NSString, CLGeocoder, KHMapView;

@interface KHMapViewController : NSObject <MKMapViewDelegate>

@property (retain) CLGeocoder *geocoder;
@property (retain, nonatomic) KHFrame *frameObject;
@property (retain) KHMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)mapView:(id)a0 annotationView:(id)a1 didChangeDragState:(unsigned long long)a2 fromOldState:(unsigned long long)a3;
- (void)mapView:(id)a0 didAddAnnotationViews:(id)a1;
- (void)mapView:(id)a0 didSelectAnnotationView:(id)a1;
- (void)mapView:(id)a0 didStopRespondingToGesture:(long long)a1 zoomDirection:(long long)a2 didDecelerate:(BOOL)a3 tiltDirection:(long long)a4;
- (void)mapView:(id)a0 regionDidChangeAnimated:(BOOL)a1;
- (void)mapView:(id)a0 regionWillChangeAnimated:(BOOL)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (id)initWithKHFrame:(id)a0;
- (void)mapView:(id)a0 userUpdatedToRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1;
- (void)updateCoordinates;

@end
