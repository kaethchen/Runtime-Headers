@interface _NUStyleTransferProcessor : CIImageProcessorKernel

+ (int)outputFormat;
+ (BOOL)allowPartialOutputRegion;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)outputIsOpaque;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)roiTileArrayForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)synchronizeInputs;
+ (id)applyStyleFromInputThumbnail:(id)a0 targetThumbnail:(id)a1 toImage:(id)a2 colorSpace:(id)a3 configuration:(id)a4 tuningParameters:(id)a5 error:(out id *)a6;

@end
