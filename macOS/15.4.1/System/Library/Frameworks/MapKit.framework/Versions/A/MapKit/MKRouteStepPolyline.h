@class MKRoutePolyline;

@interface MKRouteStepPolyline : MKPolyline {
    MKRoutePolyline *_fullRoute;
}

- (void)dealloc;
- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (id)_initWithRoute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_requiresModernMap;

@end
