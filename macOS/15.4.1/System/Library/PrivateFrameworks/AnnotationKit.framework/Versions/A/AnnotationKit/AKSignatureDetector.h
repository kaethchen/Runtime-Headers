@class NSImage, NSObject;
@protocol OS_dispatch_queue;

@interface AKSignatureDetector : NSObject <AKSignatureDetectorProtocol> {
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _fullARGB;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _smallARGB;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _smallPlanar;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _tmpSmallPlanar1;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _tmpSmallPlanar2;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _tmpSmallPlanar3;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _tmpSmallPlanar4;
    int *_blackLengths;
    int *_blackLengthsScaled;
    int *_blackOrigins;
    int _prevTop;
    int _prevBottom;
    int _prevLeft;
    int _prevRight;
    int _stableFrames;
    unsigned long long _lastFrameWidth;
    unsigned long long _lastFrameHeight;
}

@property (retain) NSObject<OS_dispatch_queue> *processingQueue;
@property BOOL running;
@property double baselinePosition;
@property double borderWidth;
@property (readonly) NSImage *testImage;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stopProcessing;
- (id)_detectWithStabilization:(BOOL)a0;
- (void)_generateImagesForFrameWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)_signatureForRect:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 baselineHeight:(double)a1;
- (id)detectSignatureInImage:(id)a0;
- (id)detectSignatureInPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)startProcessingInQueue:(id)a0;

@end
