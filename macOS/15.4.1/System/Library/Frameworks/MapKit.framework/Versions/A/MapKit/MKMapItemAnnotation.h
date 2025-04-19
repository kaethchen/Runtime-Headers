@class NSString, MKMapItem;

@interface MKMapItemAnnotation : NSObject <MKMapItemRepresenting, MKAnnotation>

@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic, getter=_representedMapItem) MKMapItem *representedMapItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0;

@end
