@class NSString;
@protocol MTLTexture, MTLComputePipelineState;

@interface CMIStyleEngineCreateSpotlights : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _createSpotlightsComputePipelineState;
    struct { void /* unknown type, empty encoding */ spotlightCount; void /* unknown type, empty encoding */ imageSize; float spotlightScale; } _params;
}

@property (nonatomic) void /* unknown type, empty encoding */ inputImageSize;
@property (weak, nonatomic) id<MTLTexture> outputSpotlightTextureTopLeft;
@property (weak, nonatomic) id<MTLTexture> outputSpotlightTextureTopEdge;
@property (weak, nonatomic) id<MTLTexture> outputSpotlightTextureTopRight;
@property (weak, nonatomic) id<MTLTexture> outputSpotlightTextureLeftEdge;
@property (weak, nonatomic) id<MTLTexture> outputSpotlightTextureCentral;
@property (weak, nonatomic) id<MTLTexture> outputSpotlightTextureRightEdge;
@property (weak, nonatomic) id<MTLTexture> outputSpotlightTextureBottomLeft;
@property (weak, nonatomic) id<MTLTexture> outputSpotlightTextureBottomEdge;
@property (weak, nonatomic) id<MTLTexture> outputSpotlightTextureBottomRight;
@property (nonatomic) float scaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
