@interface ADFlowFrameOutputPool : NSObject {
    struct __CVPixelBufferPool { } *_depthBufferPool;
    struct __CVPixelBufferPool { } *_confidenceBufferPool;
    struct __CVPixelBufferPool { } *_confidenceLevelsBufferPool;
    struct __CVPixelBufferPool { } *_normalsBufferPool;
    struct __CVPixelBufferPool { } *_uncertaintyBufferPool;
    struct __CVPixelBufferPool { } *_depthMaskBufferPool;
}

+ (id)poolWithDepthDescriptor:(id)a0 confidenceDescriptor:(id)a1;
+ (id)poolWithDepthDescriptor:(id)a0 confidenceDescriptor:(id)a1 confidenceLevelsDescriptor:(id)a2 normalsDescriptor:(id)a3 uncertaintyDescriptor:(id)a4 depthMaskDescriptor:(id)a5 layout:(unsigned long long)a6;
+ (id)poolWithDepthDescriptor:(id)a0 confidenceDescriptor:(id)a1 layout:(unsigned long long)a2;
+ (id)poolWithDepthDimensions:(struct CGSize { double x0; double x1; })a0 depthFormat:(unsigned int)a1 confidenceDimensions:(struct CGSize { double x0; double x1; })a2 confidenceFormat:(unsigned int)a3 confidenceLevelsDimensions:(struct CGSize { double x0; double x1; })a4 confidenceLevelsFormat:(unsigned int)a5 normalsDimensions:(struct CGSize { double x0; double x1; })a6 normalsFormat:(unsigned int)a7 uncertaintyDimensions:(struct CGSize { double x0; double x1; })a8 uncertaintyFormat:(unsigned int)a9 depthMaskDimensions:(struct CGSize { double x0; double x1; })a10 depthMaskFormat:(unsigned int)a11;

- (void)dealloc;
- (struct __CVBuffer { } *)bufferFromPool:(struct __CVPixelBufferPool { } *)a0;
- (id)frameOutput;
- (id)initWithDepthDimensions:(struct CGSize { double x0; double x1; })a0 depthFormat:(unsigned int)a1 confidenceDimensions:(struct CGSize { double x0; double x1; })a2 confidenceFormat:(unsigned int)a3 confidenceLevelsDimensions:(struct CGSize { double x0; double x1; })a4 confidenceLevelsFormat:(unsigned int)a5 normalsDimensions:(struct CGSize { double x0; double x1; })a6 normalsFormat:(unsigned int)a7 uncertaintyDimensions:(struct CGSize { double x0; double x1; })a8 uncertaintyFormat:(unsigned int)a9 depthMaskDimensions:(struct CGSize { double x0; double x1; })a10 depthMaskFormat:(unsigned int)a11;

@end
