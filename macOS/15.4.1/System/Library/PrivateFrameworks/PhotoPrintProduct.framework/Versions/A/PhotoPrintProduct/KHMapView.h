@class KHFrame, KHSelectionManager;

@interface KHMapView : MKMapView

@property struct CGPoint { double x; double y; } contextualMenuPoint;
@property (retain, nonatomic) KHFrame *frameObject;
@property (getter=isRendering) BOOL rendering;
@property (getter=isCameraInitiated) BOOL cameraInitiated;
@property (readonly, nonatomic) KHSelectionManager *selectionManager;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)removeAnnotation:(id)a0;
- (BOOL)resignFirstResponder;
- (void)setMapType:(unsigned long long)a0;
- (double)latitudeToPixelSpaceY:(double)a0;
- (double)longitudeToPixelSpaceX:(double)a0;
- (double)pixelSpaceXToLongitude:(double)a0;
- (double)pixelSpaceYToLatitude:(double)a0;
- (struct { double x0; double x1; })coordinateSpanWithMapView:(id)a0 centerCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 andZoomLevel:(unsigned long long)a2;
- (void)getFrameInfo:(id)a0;
- (void)handleContextualMenu:(id)a0;
- (void)persistMapAttributes;
- (void)showFrameInspector:(id)a0;
- (void)showLayoutInspector:(id)a0;
- (double)zoomLevelFromCoordinateSpan:(struct { double x0; double x1; })a0;

@end
