@protocol MTLFunction, MTLComputePipelineState;

@interface MipGenPolyphase : NSObject {
    struct { id<MTLFunction> kernel; id<MTLComputePipelineState> pipelineState; } variant[5];
    int _tileMaxCountPerLevel[14];
    int _tileMaxCount;
    BOOL *_tileValid;
}

+ (struct _MipGenPolyphaseOptions { BOOL x0; BOOL x1; })defaultOptions;

- (void)dealloc;
- (void)copyAndGenerateMipmapsFromTexture:(id)a0 toTexture:(id)a1 withComputeEncoder:(id)a2;
- (void)copyAndGenerateMipmapsFromTexture:(id)a0 toTexture:(id)a1 withComputeEncoder:(id)a2 withOptions:(struct _MipGenPolyphaseOptions { BOOL x0; BOOL x1; })a3;
- (void)generateMipmapsForTexture:(id)a0 withComputeEncoder:(id)a1;
- (void)generateMipmapsForTexture:(id)a0 withComputeEncoder:(id)a1 withOptions:(struct _MipGenPolyphaseOptions { BOOL x0; BOOL x1; })a2;
- (id)initWithLibrary:(id)a0;

@end
