@class NSString, OKMKMapView;

@interface OKWidgetMapViewProxy : OKWidgetView <OKWidgetMapViewProxyExports, MKMapViewDelegate> {
    struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } _region;
    BOOL _zoomToFitAnnotations;
}

@property (readonly, retain, nonatomic) OKMKMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)mapViewDidFinishRenderingMap:(id)a0 fullyRendered:(BOOL)a1;
- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)initWithWidget:(id)a0;
- (void)a_detailButton:(id)a0;
- (void)setSettingZoomToFitAnnotations:(BOOL)a0;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (void)selectAnnotationWithIdentifier:(id)a0 animated:(BOOL)a1;
- (void)setAntialiasing:(BOOL)a0;
- (void)setSettingAnnotations:(id)a0;
- (void)setSettingCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)setSettingMapType:(unsigned long long)a0;
- (void)setSettingRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)setSettingScrollEnabled:(BOOL)a0;
- (void)setSettingScrollWheelEnabled:(BOOL)a0;
- (void)setSettingShowsUserLocation:(BOOL)a0;
- (void)setSettingZoomEnabled:(BOOL)a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })settingCenterCoordinate;
- (unsigned long long)settingMapType;
- (id)settingObjectForKey:(id)a0;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })settingRegion;
- (BOOL)settingScrollEnabled;
- (BOOL)settingScrollWheelEnabled;
- (BOOL)settingShowsUserLocation;
- (BOOL)settingZoomEnabled;
- (void)zoomToAnnotationsWithIdentifiers:(id)a0 animated:(BOOL)a1;

@end
