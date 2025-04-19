@class NSString;

@interface IKImageEditWorldMap : NSView <MKAnnotation> {
    BOOL _usesMapKit;
}

@property (retain) id mapView;
@property unsigned long long mapType;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLongitude:(double)a0 latitude:(double)a1;
- (void)setOldStyleLongitude:(double)a0 latitude:(double)a1;

@end
