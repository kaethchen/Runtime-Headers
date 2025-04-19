@class NSString;
@protocol MTLTexture, MTLComputePipelineState;

@interface CMIStyleEngineDownScaler : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _computePipelineStates[20];
}

@property (weak, nonatomic) id<MTLTexture> inputTexture;
@property (weak, nonatomic) id<MTLTexture> outputTexture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputCropRect;
@property (nonatomic) const struct { float x0; float x1; float x2[8]; float x3[8]; float x4; } *gdcParams;
@property (nonatomic) struct CGSize { double width; double height; } boxSize;
@property (nonatomic) unsigned long long filter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
