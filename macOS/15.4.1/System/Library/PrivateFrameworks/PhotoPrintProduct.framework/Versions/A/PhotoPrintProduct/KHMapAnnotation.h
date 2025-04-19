@class NSString;

@interface KHMapAnnotation : NSObject <MKAnnotation, KHSelectable>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; })a0 placeName:(id)a1 description:(id)a2;
- (struct CGPath { } *)selectionPathAtScale:(double)a0;

@end
