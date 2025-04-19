@class PKMetalBuffer;
@protocol MTLBuffer;

@interface PKMetalSDFPenRenderCacheBuffer : NSObject {
    PKMetalBuffer *_pkUniformsBuffer;
    PKMetalBuffer *_pkStrokePointBuffer;
}

@property (readonly, nonatomic) id<MTLBuffer> uniformsBuffer;
@property (readonly, nonatomic) unsigned long long uniformsBufferOffset;
@property (readonly, nonatomic) id<MTLBuffer> strokePointBuffer;
@property (readonly, nonatomic) unsigned long long strokePointBufferOffset;
@property (readonly, nonatomic) unsigned long long numVertices;
@property (readonly, nonatomic) unsigned long long numPoints;

- (id)init;
- (void).cxx_destruct;
- (BOOL)lockPurgeableResourcesAddToSet:(id)a0;
- (id)initWithUniforms:(const struct PKMetalSDFPenKernelUniforms { unsigned int x0; unsigned int x1; } *)a0 points:(const struct PKMetalSDFPenStrokePoint { float x0; void /* unknown type, blank encoding */ x1; void /* unknown type, blank encoding */ x2; unsigned short x3 : 16; unsigned short x4 : 16; } *)a1 numPoints:(unsigned long long)a2 numVertices:(unsigned long long)a3 resourceHandler:(id)a4;

@end
