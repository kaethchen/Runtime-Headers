@interface TiledHistogram : CIImageProcessorKernel

+ (BOOL)allowPartialOutputRegion;
+ (int)formatForInputAtIndex:(int)a0 arguments:(id)a1;
+ (int)outputFormatWithArguments:(id)a0;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (id)roiTileArrayForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
