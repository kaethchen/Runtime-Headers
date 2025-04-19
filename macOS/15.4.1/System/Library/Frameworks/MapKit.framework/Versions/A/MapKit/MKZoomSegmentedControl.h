@class MKMapView;

@interface MKZoomSegmentedControl : NSSegmentedControl

@property (weak, nonatomic) MKMapView *mapView;
@property (readonly, nonatomic, getter=isMouseDown) BOOL mouseDown;

- (void).cxx_destruct;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (long long)_selectedIndexForEvent:(id)a0;
- (long long)indexOfZoomInSegment;

@end
