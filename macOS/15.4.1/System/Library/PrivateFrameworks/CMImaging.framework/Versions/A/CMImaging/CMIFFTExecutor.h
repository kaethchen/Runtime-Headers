@class NSArray, CMIFFTContext, CMIFFTEncode;
@protocol MTLBuffer;

@interface CMIFFTExecutor : NSObject {
    id<MTLBuffer> _inputBuffer;
    NSArray *_workingBuffers;
    CMIFFTContext *_context;
    CMIFFTEncode *_encode;
    NSArray *_toDecrementFig;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)_allocateBuffer:(unsigned long long)a0 label:(id)a1;
- (long long)_allocateWorkingMemory:(id)a0 layout:(long long)a1 precision:(long long)a2 inputBuffer:(id)a3 batchSize:(unsigned long long)a4;
- (id)_execute1DMixedRadix:(id)a0 dimension:(id)a1 layout:(long long)a2 precision:(long long)a3 direction:(long long)a4 primeFactors:(id)a5 batchSize:(unsigned long long)a6;
- (id)_execute1DSingleRadix:(id)a0 dimension:(id)a1 layout:(long long)a2 precision:(long long)a3 direction:(long long)a4 radix:(unsigned long long)a5 batchSize:(unsigned long long)a6;
- (long long)_execute1DTransform:(id)a0 dimensions:(id)a1 layout:(long long)a2 precision:(long long)a3 direction:(long long)a4 batchSize:(unsigned long long)a5;
- (id)_execute1DTwoRadix:(id)a0 dimension:(id)a1 layout:(long long)a2 precision:(long long)a3 direction:(long long)a4 primeFactors:(id)a5 batchSize:(unsigned long long)a6;
- (long long)_execute2DTransform:(id)a0 dimensions:(id)a1 layout:(long long)a2 precision:(long long)a3 direction:(long long)a4;
- (int)_getMetalLayoutType:(long long)a0;
- (int)_getMetalPrecisionType:(long long)a0;
- (id)_getSizes:(id)a0 primeFactors:(id)a1;
- (int)_getStrideForPrecisionType:(long long)a0;
- (id)_reorderBuffers:(id)a0 mostRecentBuffer:(id)a1;
- (void)_reorderWorkingBuffersFromBuffer:(id)a0;
- (long long)copyBufferAToBufferB:(id)a0 bufferA:(id)a1 bufferB:(id)a2;
- (long long)executeTransform:(id)a0 dimensions:(id)a1 inputBuffer:(id)a2 layout:(long long)a3 precision:(long long)a4 direction:(long long)a5 batchSize:(unsigned long long)a6;

@end
