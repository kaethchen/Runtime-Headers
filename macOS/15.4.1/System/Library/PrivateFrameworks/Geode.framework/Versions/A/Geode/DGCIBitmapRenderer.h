@interface DGCIBitmapRenderer : NSObject

+ (void)initialize;
+ (void)withGPUContext:(id /* block */)a0;
+ (void)withCPUContext:(id /* block */)a0;
+ (void)_withContextFromStack:(id)a0 block:(id /* block */)a1;
+ (id)newBitmapRenderingContext:(BOOL)a0;
+ (void)render:(id)a0 toBitmap:(void *)a1 rowBytes:(long long)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 format:(int)a4 outputColorSpace:(struct CGColorSpace { } *)a5 useSoftwareRenderer:(BOOL)a6;

@end
