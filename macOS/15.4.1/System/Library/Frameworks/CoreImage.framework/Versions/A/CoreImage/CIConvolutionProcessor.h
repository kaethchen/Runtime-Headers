@interface CIConvolutionProcessor : CIImageProcessorKernel

+ (int)outputFormat;
+ (id)logDescription:(id)a0;
+ (BOOL)allowCompressedInputsAndOutputs;
+ (id)applyBoxToImage:(id)a0 width:(int)a1 height:(int)a2;
+ (id)applyConToImage:(id)a0 width:(int)a1 height:(int)a2 bias:(double)a3 weights:(id)a4;
+ (BOOL)canReduceOutputChannels;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)synchronizeInputs;

@end
