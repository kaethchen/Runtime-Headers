@class NSArray, NUFaceDetectionRequest;

@interface NUFaceDetectionJob : NURenderJob {
    NSArray *_faces;
    struct { long long width; long long height; } _imageSize;
}

@property (readonly) NUFaceDetectionRequest *faceDetectionRequest;

- (void).cxx_destruct;
- (id)result;
- (BOOL)render:(out id *)a0;
- (id)cacheKey;
- (id)initWithRequest:(id)a0;
- (void)cleanUp;
- (id)detectFaceLandmarksInBuffer:(struct __CVBuffer { } *)a0 withFaceRects:(id)a1 error:(out id *)a2;
- (id)detectFaceRectsInBuffer:(struct __CVBuffer { } *)a0 maxResultCount:(unsigned long long)a1 error:(out id *)a2;
- (id)initWithFaceDetectionRequest:(id)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
