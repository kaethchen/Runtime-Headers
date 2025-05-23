@class FigMetalAllocator, NSString, FigMetalExecutionStatus, MTLVertexDescriptor;
@protocol MTLBuffer, MTLDevice, MTLCommandBuffer, MTLLibrary, MTLCommandQueue, MTLPipelineLibrarySPI;

@interface FigMetalContext : NSObject {
    NSString *_gpuName;
}

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) id<MTLPipelineLibrarySPI> pipelineLibrary;
@property (retain, nonatomic) FigMetalAllocator *allocator;
@property (retain, nonatomic) FigMetalExecutionStatus *executionStatus;
@property (nonatomic) BOOL allowCommandBufferCommitsOnlyByForceCommit;
@property (retain, nonatomic) id<MTLBuffer> fullRangeVertexBuf;
@property (retain, nonatomic) MTLVertexDescriptor *fullRangeVertexDesc;

+ (id)metalDevice;

- (id)init;
- (void).cxx_destruct;
- (void)commit;
- (void)insertDebugCaptureBoundary;
- (void)waitForSchedule;
- (void)forceCommit;
- (id)initWithbundle:(id)a0 andOptionalCommandQueue:(id)a1;
- (id)initWithoutLibraryUsingOptionalCommandQueue:(id)a0;
- (id)CreateMetalTextureFromFile:(const char *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 width:(unsigned long long)a3 height:(unsigned long long)a4;
- (BOOL)ReadMetalTextureFromFile:(const char *)a0 texture:(id)a1 mipmapLevel:(int)a2;
- (BOOL)ReadMetalTextureFromFile:(const char *)a0 texture:(id)a1;
- (int)initRangeVertex;
- (BOOL)WriteMetalTextureToFile:(const char *)a0 texture:(id)a1;
- (BOOL)WriteMetalTextureToFile:(const char *)a0 texture:(id)a1 mipmapLevel:(int)a2;
- (void)_identifyGPU;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 plane:(unsigned long long)a5;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 plane:(unsigned long long)a5 slice:(unsigned long long)a6;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3 alignmentFactor:(unsigned long long)a4;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3 slice:(unsigned long long)a4;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3 slice:(unsigned long long)a4 alignmentFactor:(unsigned long long)a5;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3 slice:(unsigned long long)a4 widthAlignmentFactor:(unsigned long long)a5 heightAlignmentFactor:(unsigned long long)a6;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3 widthAlignmentFactor:(unsigned long long)a4 heightAlignmentFactor:(unsigned long long)a5;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 textureSize:(struct CGSize { double x0; double x1; })a3 plane:(unsigned long long)a4;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 textureSize:(struct CGSize { double x0; double x1; })a3 plane:(unsigned long long)a4 slice:(unsigned long long)a5;
- (id)bindPixelBufferToMTLBuffer:(struct __CVBuffer { } *)a0;
- (void)commitAndWait;
- (int)commonInitWithOptionalCommandQueue:(id)a0;
- (id)computePipelineStateFor:(id)a0 constants:(id)a1;
- (id)create2DTextureFromBuffer:(id)a0 offset:(unsigned long long)a1 stride:(unsigned long long)a2 width:(int)a3 height:(int)a4 format:(unsigned long long)a5 usage:(unsigned long long)a6;
- (id)create2DTextureFromBuffer:(id)a0 offset:(unsigned long long)a1 width:(int)a2 height:(int)a3 format:(unsigned long long)a4 usage:(unsigned long long)a5;
- (unsigned long long)getPixelSizeInBytes:(unsigned long long)a0;
- (id)initWithFigMetalContext:(id)a0 andOptionalCommandQueue:(id)a1;
- (id)initWithLibraryData:(char *)a0 ofSize:(unsigned long long)a1 andOptionalCommandQueue:(id)a2;
- (void)prewarmInternalMetalShadersForFormatsList:(id)a0;
- (id)rebindTex:(id)a0 format:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(int)a3 slice:(int)a4 xFactor:(int)a5;
- (id)rebindTex:(id)a0 format:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(int)a3 xFactor:(int)a4;
- (void)waitForIdle;

@end
