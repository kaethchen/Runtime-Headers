@class NSString, MKMapView;

@interface MKAccessibilityItem : NSObject

@property (retain, nonatomic) MKMapView *mapView;
@property (nonatomic) long long type;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic, getter=isSelectable) BOOL selectable;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)sizeValue;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForCoodinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 mapView:(id)a2;
- (id)initWithLabelMarker:(id)a0 mapView:(id)a1;
- (id)positionValue;

@end
