@class NSString;

@interface _TtCV15_MapKit_SwiftUI11MapPolyline12CocoaWrapper : MKPolyline {
    void /* unknown type, empty encoding */ wrapped;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;
@property (nonatomic, readonly) long long pointCount;
@property (nonatomic, readonly) BOOL requiresModernMap;

- (id)init;
- (void).cxx_destruct;
- (struct { double x0; double x1; } *)points;
- (BOOL)intersectsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (BOOL)_requiresModernMap;
- (double *)elevations;
- (void)getCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (double)locationAtPointIndex:(long long)a0;
- (id)locationsAtPointIndexes:(id)a0;

@end
