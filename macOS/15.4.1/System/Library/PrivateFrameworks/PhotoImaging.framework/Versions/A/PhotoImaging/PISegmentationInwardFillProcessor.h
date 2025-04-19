@interface PISegmentationInwardFillProcessor : CIImageProcessorKernel

+ (BOOL)allowPartialOutputRegion;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)outputIsOpaque;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)synchronizeInputs;

@end
