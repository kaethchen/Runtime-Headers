@interface IKImageEditWorldMapOld : NSView {
    struct CGImage { } *_map;
    unsigned long long _mapWidth;
    unsigned long long _mapHeight;
    BOOL _invalidGPSInfo;
    double _mappedLongitude;
    double _mappedLatitude;
    double _longitude;
    double _latitude;
    double _scale;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleAndCenter:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)calcPostions;
- (void)setInvalidGPSInfo:(BOOL)a0;
- (void)setLongitude:(double)a0 latitude:(double)a1;

@end
