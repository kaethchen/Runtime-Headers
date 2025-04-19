@protocol MTLBuffer;

@interface CMIStyleEngineSolveLinearSystemMPS : CMIStyleEngineSolveLinearSystem {
    id<MTLBuffer> _inputLHSBuffer;
    id<MTLBuffer> _inputRHSBuffer;
    id<MTLBuffer> _inputStatusBuffer;
    id<MTLBuffer> _outputCoefficients;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 ssytemCount:(unsigned int)a1 lhsSize:(unsigned int)a2 rhsSize:(unsigned int)a3;
- (id)inputLHSBuffer;
- (id)inputRHSBuffer;
- (id)inputStatusBuffer;
- (id)outputCoefficients;
- (void)setInputLHSBuffer:(id)a0;
- (void)setInputRHSBuffer:(id)a0;
- (void)setInputStatusBuffer:(id)a0;
- (void)setOutputCoefficients:(id)a0;
- (int)solveLinearSystem:(id)a0;

@end
