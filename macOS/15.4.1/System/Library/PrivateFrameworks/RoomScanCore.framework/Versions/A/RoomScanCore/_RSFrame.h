@protocol RSCamera, RSRawPointCloud;

@interface _RSFrame : NSObject <RSFrame>

@property (nonatomic) double timestamp;
@property (retain, nonatomic) id<RSCamera> camera;
@property (nonatomic) struct __CVBuffer { } *colorBuffer;
@property (retain, nonatomic) id<RSCamera> sceneCamera;
@property (nonatomic) struct __CVBuffer { } *sceneColorBuffer;
@property (nonatomic) struct __CVBuffer { } *depthBuffer;
@property (nonatomic) struct __CVBuffer { } *depthConfidenceBuffer;
@property (nonatomic) struct __CVBuffer { } *semanticLabelBuffer;
@property (nonatomic) struct __CVBuffer { } *semanticConfidenceBuffer;
@property (nonatomic) long long vioTrackingState;
@property (retain, nonatomic) id<RSRawPointCloud> rawFeaturePoints;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } referenceOriginTransform;
@property (nonatomic) long long deviceOrientation;

- (void)dealloc;
- (void).cxx_destruct;

@end
