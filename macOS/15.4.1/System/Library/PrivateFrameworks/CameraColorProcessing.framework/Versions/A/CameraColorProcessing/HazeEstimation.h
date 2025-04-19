@class FigMetalContext, HazeProperties;
@protocol MTLBuffer, MTLDevice, MTLTexture, MTLComputePipelineState, MTLCommandQueue;

@interface HazeEstimation : NSObject {
    FigMetalContext *_metalContext;
    id<MTLDevice> _device;
    id<MTLComputePipelineState> _computePipelineHazeThumbnailGeneration;
    id<MTLCommandQueue> _commandQueue;
    struct HazeConfig { void /* unknown type, empty encoding */ thumbnailSize; } _hazeConfig;
    BOOL _hazeConfigured;
    id<MTLTexture> _thumbnailTexture;
    id<MTLBuffer> _hazeInternalBuffer;
}

@property (retain, nonatomic) id<MTLTexture> inputRGBTexture;
@property (nonatomic) void /* unknown type, empty encoding */ hazeValue;
@property (nonatomic) void /* unknown type, empty encoding */ hazeValueForLTM;
@property (retain, nonatomic) HazeProperties *hazeProperties;
@property (retain, nonatomic) HazeProperties *hazePropertiesForLTM;
@property (nonatomic) struct SourceROI { unsigned int StartX; unsigned int StartY; unsigned int EndX; unsigned int EndY; } hazeROI;

- (int)run;
- (void).cxx_destruct;
- (int)configure;
- (id)initWithMetalContext:(id)a0;
- (int)prepareThumbnail;
- (void)releaseTextures;
- (int)allocInternalData;
- (void /* unknown type, empty encoding */)calculateHazeValues:(int)a0 pixels:(void *)a1 thresh:(float)a2 properties:(id)a3;
- (int)createShaders;
- (int)estimateHaze:(void *)a0;
- (id)getThumbnailTexture;

@end
