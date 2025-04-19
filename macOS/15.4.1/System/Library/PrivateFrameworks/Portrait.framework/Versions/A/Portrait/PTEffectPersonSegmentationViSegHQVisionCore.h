@class PTMetalContext, NSString, VisionCoreVideoSegmentationInferenceNetworkDescriptor, NSObject;
@protocol MTLTexture, OS_dispatch_queue, OS_dispatch_semaphore;

@interface PTEffectPersonSegmentationViSegHQVisionCore : NSObject <PTEffectPersonSegmentation> {
    void *_context;
    void *_plan[3];
    struct { void *plan; int network_index; } _network[3];
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _ebuffer[5][2];
    struct __CVBuffer *_pixelBufferMatting[2];
    id<MTLTexture> _textureMatting[2];
    VisionCoreVideoSegmentationInferenceNetworkDescriptor *_viSegHQDescriptor[3];
    PTMetalContext *_metalContext;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSObject<OS_dispatch_queue> *_asyncDispatchQueue;
    int _frameCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })segmentationSizeForColorSize:(struct CGSize { double x0; double x1; })a0;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned int)reset;
- (id)initWithMetalContext:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned int)clearIOSurface:(struct __IOSurface { } *)a0 tensorType:(int)a1 value:(float)a2;
- (BOOL)createEspressoBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 fromNetwork:(int)a1 name:(id)a2 isInput:(BOOL)a3;
- (id)debugTextures;
- (struct __CVBuffer { } *)outputPixelbuffer;
- (void)postProcessUpdateFrame;
- (id)runPersonSegmentationForPixelBuffer:(struct __CVBuffer { } *)a0;

@end
