@class NSArray, MediaIOGraphNodeDescription, NSDictionary;

@interface AVCaptureScreenInputInternal_Tundra : NSObject {
    MediaIOGraphNodeDescription *inputUnitNodeDescription;
    NSArray *ports;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } minFrameDuration;
    unsigned int displayID;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
    double scaleFactor;
    BOOL scaleFactorIsSetByClient;
    BOOL capturesMouseClicks;
    BOOL capturesCursor;
    int captureTimeScale;
    int graphicsSubsystemErrorStatus;
    NSDictionary *pixelBufferAttributesFromSession;
    NSArray *outputCodecTypesFromSession;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } minFrameDurationFromSession;
    struct OpaqueCMClock { } *clock;
    void *callbackContextToken;
}

@end
