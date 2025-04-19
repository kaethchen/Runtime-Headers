@interface AVFrameRateRangeInternal_Tundra : NSObject {
    double minFrameRate;
    double maxFrameRate;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } maxFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } minFrameDuration;
}

@end
