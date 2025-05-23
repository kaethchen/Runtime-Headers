@interface CIGenericMetalProcessor : CIImageProcessorKernel

+ (id)logDescription:(id)a0;
+ (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputs:(id)a1 arguments:(id)a2 error:(id *)a3;
+ (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shader:(id)a1 inputs:(id)a2 arguments:(id)a3 error:(id *)a4;
+ (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shader:(id)a1 inputs:(id)a2 className:(id)a3 arguments:(id)a4 error:(id *)a5;
+ (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shader:(id)a1 inputs:(id)a2 insetRects:(id)a3 arguments:(id)a4 error:(id *)a5;
+ (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shader:(id)a1 inputs:(id)a2 roiMethods:(id)a3 insetRects:(id)a4 scaleFactors:(id)a5 arguments:(id)a6 error:(id *)a7;
+ (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shader:(id)a1 inputs:(id)a2 scaleFactors:(id)a3 arguments:(id)a4 error:(id *)a5;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)outputIsOpaque;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)skipFormatChecks;
+ (BOOL)synchronizeInputs;

@end
