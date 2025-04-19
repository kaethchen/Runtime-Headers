@interface AVCaptionInternal : NSObject {
    struct OpaqueFigCaptionData { } *figCaptionData;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
}

@end
