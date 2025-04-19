@interface AVCaptureStillImageTransform : NSObject {
    struct opaqueCMSampleBuffer { } *_sourceBuffer;
    struct opaqueCMSampleBuffer { } *_resultBuffer;
}

@property int status;

+ (id)transform;

- (void)dealloc;
- (struct opaqueCMSampleBuffer { } *)resultBuffer;
- (void)setResultBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)setSourceBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (struct opaqueCMSampleBuffer { } *)sourceBuffer;

@end
