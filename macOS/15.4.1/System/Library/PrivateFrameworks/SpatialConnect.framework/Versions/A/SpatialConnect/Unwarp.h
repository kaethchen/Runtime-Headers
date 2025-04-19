@protocol MTLFunction, MTLBuffer, MTLRenderPipelineState;

@interface Unwarp : NSObject {
    void /* unknown type, empty encoding */ _quadCountXY;
    unsigned int _quadCount;
    void /* unknown type, empty encoding */ _vertexCountXY;
    unsigned int _vertexCount;
    unsigned int _indexByteCount;
    id<MTLFunction> _vertexFunction;
    id<MTLFunction> _fragmentFunction;
    id<MTLRenderPipelineState> _unwarpRenderPipelineState;
}

@property (readonly) id<MTLBuffer> indexBuffer;
@property (readonly) unsigned long long indexCount;
@property (readonly) unsigned long long indexType;

+ (struct _UnwarpRenderOptions { BOOL x0; float x1; })defaultRenderOptions;
+ (id)parameterDataFromVRRMap:(id)a0;

- (void).cxx_destruct;
- (void)encodeUnwarpFromTexture:(id)a0 withWarpMap:(id)a1 withRenderEncoder:(id)a2 withOptions:(struct _UnwarpRenderOptions { BOOL x0; float x1; })a3;
- (id)initForRenderingWithLibrary:(id)a0 destinationPixelFormat:(unsigned long long)a1 warpMode:(int)a2;
- (void)updateQuadMeshWithQuadCount:(SEL)a0 withDevice:(id)a1;

@end
