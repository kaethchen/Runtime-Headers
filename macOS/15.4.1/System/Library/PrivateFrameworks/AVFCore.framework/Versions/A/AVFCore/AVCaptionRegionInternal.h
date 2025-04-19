@class AVCaptionPosition;

@interface AVCaptionRegionInternal : NSObject {
    struct OpaqueFigCaptionRegion { } *figCaptionRegion;
    AVCaptionPosition *position;
    AVCaptionPosition *endPosition;
    BOOL _overridePositionShouldBeNil;
}

@end
