@interface PKInputPointAltitudeAndAzimuthNoiseFilter : PKInputPointBaseFilter {
    struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> { unsigned int __x_; } generator;
    double currentAzimuthOffsetValue;
    double currentAltitudeOffsetValue;
}

@property (nonatomic) double altitudeJitterNoise;
@property (nonatomic) double azimuthJitterNoise;
@property (nonatomic) double altitudeOffsetNoise;
@property (nonatomic) double azimuthOffsetNoise;
@property (nonatomic) BOOL noiseIsHeightBased;

- (id).cxx_construct;
- (void)resetFilter;
- (void)_recalculateOffsets;
- (void)addInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a0;

@end
