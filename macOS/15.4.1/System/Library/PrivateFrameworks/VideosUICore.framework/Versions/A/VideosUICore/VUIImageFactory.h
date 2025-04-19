@interface VUIImageFactory : NSObject

+ (id)URLFromDescriptor:(id)a0;
+ (id)URLFromSource:(id)a0 extension:(id)a1 p3Specifier:(id)a2 cropCode:(id)a3 imageSize:(struct CGSize { double x0; double x1; })a4 displayScaleIsPointMultiplier:(BOOL)a5 centerGrowth:(BOOL)a6 focusSizeIncrease:(double)a7;
+ (id)makeImageProxyWithDescriptor:(id)a0;
+ (id)makeImageViewWithDescriptor:(id)a0 existingView:(id)a1;
+ (id)makeImageViewWithDescriptor:(id)a0 imageProxy:(id)a1 existingView:(id)a2;
+ (id)makeImageViewWithResourceDescriptor:(id)a0 existingView:(id)a1;
+ (id)makeImageWithImage:(id)a0 existingView:(id)a1;
+ (id)_getResourceImageFromDescriptor:(id)a0;
+ (id)_imageProxyWithURL:(id)a0;
+ (id)_makeImageViewWithDescriptor:(id)a0 proxy:(id)a1 existingView:(id)a2;
+ (id)_makeSourceStringFromSource:(id)a0 p3Specifier:(id)a1;

@end
