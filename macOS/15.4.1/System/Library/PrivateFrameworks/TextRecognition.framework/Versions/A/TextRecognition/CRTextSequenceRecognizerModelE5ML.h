@interface CRTextSequenceRecognizerModelE5ML : CRTextSequenceRecognizerModelEspresso

- (void)dealloc;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)inputBatchFromLineRegions:(id)a0 image:(id)a1 regionWidth:(double)a2 configuration:(id)a3 rectifier:(id)a4;
- (id)predictFromInputs:(id)a0 error:(id *)a1;
- (BOOL)preheatWithError:(id *)a0;

@end
