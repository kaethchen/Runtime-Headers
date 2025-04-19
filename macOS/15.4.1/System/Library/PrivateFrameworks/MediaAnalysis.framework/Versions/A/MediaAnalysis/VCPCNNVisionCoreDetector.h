@class NSArray, VisionCoreISPInferenceNetworkDescriptor, NSMutableDictionary, VisionCoreMutableNamedObjects;

@interface VCPCNNVisionCoreDetector : NSObject {
    VisionCoreISPInferenceNetworkDescriptor *_descriptor;
    struct { void *plan; int network_index; } _espressoNetwork;
    void *_espressoContext;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
    NSMutableDictionary *_outputBufferMapping;
    NSMutableDictionary *_inputBufferMapping;
    int _frameCount;
    NSArray *_inputMasksNames;
    struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct *__begin_; struct *__end_; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct *__value_; } __end_cap_; } _outputEspressoBuffers;
    struct __CVBuffer { } *_personBuffer;
    struct __CVBuffer { } *_salientBuffer;
    struct __CVBuffer { } *_skinBuffer;
    struct __CVBuffer { } *_hairBuffer;
    struct __CVBuffer { } *_skyBuffer;
    VisionCoreMutableNamedObjects *_inferenceOutputNamedObjects;
    VisionCoreMutableNamedObjects *_postProcessingObjects;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithOptions:(id)a0;
- (int)UpdateInputBuffersAndBindPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)allocatePostProcessingBuffers:(id)a0 error:(id *)a1;
- (int)downscaleBuffer:(struct __CVBuffer { } *)a0 scaledImage:(struct __CVBuffer **)a1;
- (int)getBodyRegions:(id)a0 fromVisionCorePostProcessingOutput:(id)a1 imageWidth:(int)a2 imageHeight:(int)a3 extendRatio:(float)a4 portrait_mode:(BOOL)a5;
- (int)getHandsRegions:(id)a0 fromVisionCorePostProcessingOutput:(id)a1 imageWidth:(int)a2 imageHeight:(int)a3 extendRatio:(float)a4 portrait_mode:(BOOL)a5;
- (int)loadModel:(id)a0 withOptions:(id)a1;
- (id)planExecutionandOutput:(struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct *x0; struct *x1; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct *x0; } x2; })a0 descriptor:(id)a1;
- (id)resultForPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 Error:(id *)a2;

@end
