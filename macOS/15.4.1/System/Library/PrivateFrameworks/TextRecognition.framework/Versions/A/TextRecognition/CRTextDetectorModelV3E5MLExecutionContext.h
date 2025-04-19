@interface CRTextDetectorModelV3E5MLExecutionContext : CRE5MLExecutionContext {
    struct __IOSurface { } *_preboundSurface;
}

- (void)prebindInputImageSurface:(struct __IOSurface { } *)a0 error:(id *)a1;
- (void)unbindPreboundInputImageSurface;
- (void)predictOutputFromPreboundInputsAsync:(id /* block */)a0;
- (id)predictionFromImage:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)predictionFromPreboundInputsWithError:(id *)a0;

@end
