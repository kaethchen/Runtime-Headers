@interface AVCaptionPositionInternal : NSObject {
    long long unitType;
    union { float relativeToEnclosingRegion; long long cell; } x;
    union { float relativeToEnclosingRegion; long long cell; } y;
}

@end
