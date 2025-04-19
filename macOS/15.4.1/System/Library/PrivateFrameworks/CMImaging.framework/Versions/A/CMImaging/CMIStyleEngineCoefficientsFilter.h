@class FigMetalContext;
@protocol MTLComputePipelineState, MTLBuffer;

@interface CMIStyleEngineCoefficientsFilter : NSObject {
    id<MTLComputePipelineState> _filterPipeline;
    FigMetalContext *_metalContext;
    id<MTLBuffer> _filterBuf;
    float _iir1HistoryFactor;
    float _iir1HistoryFactorRampUpStep;
    float _iir1TargetHistoryFactor;
    float _learningTime;
    float _gaussianScale;
    struct { float coefficients[5]; } _iir3Coeffs;
}

- (void).cxx_destruct;
- (void)reset;
- (id)initWithMetalContext:(id)a0;
- (int)_calculateGlobalRemixFactorForWindow:(id)a0 filteredWindow:(id)a1 remixFactor:(float *)a2;
- (int)_fillIIROrder1FilterBuffer:(id)a0 historyFactor:(float)a1;
- (int)_fillIIROrder3FilterBuffer:(id)a0 forNumOfFrames:(int)a1;
- (int)_fillSymetricFIRFilterBuffer:(id)a0 forWindow:(id)a1 referenceFramePts:(double)a2;
- (int)filterCoefficientsFIR:(id)a0 forPts:(double)a1 to:(id)a2;
- (int)filterCoefficientsIIR:(id)a0 filteredDataWindow:(id)a1 filterType:(unsigned long long)a2 to:(id)a3;

@end
