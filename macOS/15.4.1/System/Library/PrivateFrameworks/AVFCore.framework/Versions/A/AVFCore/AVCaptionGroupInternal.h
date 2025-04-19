@class NSArray;

@interface AVCaptionGroupInternal : NSObject {
    NSArray *captions;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
}

@end
