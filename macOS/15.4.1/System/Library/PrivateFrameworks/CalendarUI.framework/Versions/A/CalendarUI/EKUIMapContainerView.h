@class EKUIMapView;

@interface EKUIMapContainerView : NSView

@property (retain) EKUIMapView *mapView;

- (void).cxx_destruct;
- (void)updateLayer;
- (void)configureWithMapView:(id)a0;

@end
