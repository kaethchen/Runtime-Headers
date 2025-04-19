@class BWPixelBufferPool, NSDictionary, NSMutableDictionary, BWStillImageNodeConfiguration;

@interface BWStillImageScalerNode : BWNode {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    int _poolBaseCapacity;
    BWPixelBufferPool *_pool;
    struct OpaqueVTPixelTransferSession { } *_scalingSession;
    BOOL _blackFillingRequired;
    BOOL _enforcesZoomingForPortraitCaptures;
    NSDictionary *_mainImageDownscalingFactorByAttachedMediaKey;
    NSDictionary *_outputSizeByAttachedMediaKey;
    NSMutableDictionary *_pixelBufferPoolByAttachedMediaKey;
    struct OpaqueVTPixelTransferSession { } *_attachedMediaScalingSession;
    BOOL _backPressureDrivenPipelining;
    struct { int width; int height; } _resizedOutputDimensions;
    BOOL _preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
}

@property (nonatomic) struct { int x0; int x1; } resizedOutputDimensions;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (BOOL)backPressureDrivenPipelining;
- (BOOL)blackFillingRequired;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (BOOL)enforcesZoomingForPortraitCaptures;
- (id)initWithBasePoolCapacity:(int)a0 nodeConfiguration:(id)a1;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (id)nodeSubType;
- (id)outputSizeByAttachedMediaKey;
- (BOOL)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setBackPressureDrivenPipelining:(BOOL)a0;
- (void)setBlackFillingRequired:(BOOL)a0;
- (void)setEnforcesZoomingForPortraitCaptures:(BOOL)a0;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (void)setOutputSizeByAttachedMediaKey:(id)a0;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(BOOL)a0;

@end
