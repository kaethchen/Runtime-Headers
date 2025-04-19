@class AVCaptureScreenInputInternal;

@interface AVCaptureScreenInput : AVCaptureInput {
    AVCaptureScreenInputInternal *_internal;
}

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minFrameDuration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL capturesMouseClicks;
@property (nonatomic) BOOL capturesCursor;
@property (nonatomic) BOOL removesDuplicateFrames;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)initWithDisplayID:(unsigned int)a0;
- (id)ports;
- (struct OpaqueCMClock { } *)inputClock;
- (id)notReadyError;

@end
