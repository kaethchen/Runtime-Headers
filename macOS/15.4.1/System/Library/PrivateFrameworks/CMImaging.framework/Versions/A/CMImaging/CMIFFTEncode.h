@class NSDictionary, CMIFFTContext, NSArray;
@protocol MTLComputePipelineState;

@interface CMIFFTEncode : NSObject {
    CMIFFTContext *_context;
    NSDictionary *_transform1DGlobalPipelineStates;
    NSDictionary *_transform1DThreadgroupPipelineStates;
    id<MTLComputePipelineState> _transpose2DBufferPipelineState;
    id<MTLComputePipelineState> _transpose3DBufferPipelineState;
    id<MTLComputePipelineState> _applyTwiddlesPipelineState;
    id<MTLComputePipelineState> _unscrambleMixedRadixPipelineState;
    id<MTLComputePipelineState> _realToComplexShimPipelineState;
    NSArray *_supportedFactors;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)_encode1DBatchedGlobalSingleRadixTransform:(id)a0 inputBuffer:(id)a1 scratchBuffer:(id)a2 batchSize:(unsigned long long)a3 depthBatchSize:(unsigned long long)a4 bufferOffset:(unsigned long long)a5 config:(struct CMIFFTStockhamConfig { int x0; unsigned long long x1; unsigned long long x2; int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a6;
- (id)_encode1DBatchedThreadgroupSingleRadixTransform:(id)a0 inputBuffer:(id)a1 scratchBuffer:(id)a2 batchSize:(unsigned long long)a3 depthBatchSize:(unsigned long long)a4 bufferOffset:(unsigned long long)a5 config:(struct CMIFFTStockhamConfig { int x0; unsigned long long x1; unsigned long long x2; int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a6 typeStride:(unsigned long long)a7;
- (id)encode1DTransform:(id)a0 inputBuffer:(id)a1 scratchBuffer:(id)a2 batchSize:(unsigned long long)a3 depthBatchSize:(unsigned long long)a4 bufferOffset:(unsigned long long)a5 config:(struct CMIFFTStockhamConfig { int x0; unsigned long long x1; unsigned long long x2; int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a6;
- (long long)encodeApplyTwiddles:(id)a0 inputBuffer:(id)a1 config:(struct CMIFFTTwiddleConfig { int x0; int x1; unsigned long long x2; int x3; })a2 N1:(unsigned long long)a3 N2:(unsigned long long)a4 bufferOffset:(unsigned long long)a5 batchSize:(unsigned long long)a6;
- (long long)encodeRealToComplexShim:(SEL)a0 inputBuffer:(id)a1 outputBuffer:(id)a2 config:(id)a3 sizes:(struct CMIFFTRealToComplexConfig { int x0; int x1; unsigned long long x2[3]; unsigned long long x3[3]; })a4;
- (long long)encodeTransposeBuffer2D:(id)a0 inputBuffer:(id)a1 outputBuffer:(id)a2 bufferOffset:(unsigned long long)a3 batchSize:(unsigned long long)a4 config:(struct CMIFFTTransposeConfig { int x0; int x1; unsigned long long x2[3]; unsigned long long x3[3]; unsigned long long x4[3]; int x5[3]; int x6; unsigned long long x7; })a5;
- (long long)encodeTransposeBuffer3D:(id)a0 inputBuffer:(id)a1 outputBuffer:(id)a2 bufferOffset:(unsigned long long)a3 batchSize:(unsigned long long)a4 config:(struct CMIFFTTransposeConfig { int x0; int x1; unsigned long long x2[3]; unsigned long long x3[3]; unsigned long long x4[3]; int x5[3]; int x6; unsigned long long x7; })a5;
- (long long)encodeUnscrambleMixedRadix:(id)a0 inputBuffer:(id)a1 outputBuffer:(id)a2 config:(struct CMIFFTUnscrambleConfig { int x0; int x1; int x2; int x3; int x4; int x5; unsigned long long x6; })a3 sizes:(id)a4 bufferoffset:(unsigned long long)a5 batchSize:(unsigned long long)a6;

@end
