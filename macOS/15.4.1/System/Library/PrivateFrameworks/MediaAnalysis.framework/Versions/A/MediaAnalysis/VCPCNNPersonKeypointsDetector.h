@class VCPCNNModelEspresso;

@interface VCPCNNPersonKeypointsDetector : NSObject {
    int _maxNumRegions;
    float *_inputData;
    VCPCNNModelEspresso *_modelEspresso;
    int _inputWidth;
    int _inputHeight;
    int _outputWidth;
    int _outputHeight;
    int _padX;
    int _padY;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)parseKeypoints:(id)a0;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withBox:(id)a1 keypoints:(id)a2 padX:(int *)a3 padY:(int *)a4;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3 box:(id)a4;
- (id)initWithForceCPU:(BOOL)a0 sharedModel:(BOOL)a1;

@end
