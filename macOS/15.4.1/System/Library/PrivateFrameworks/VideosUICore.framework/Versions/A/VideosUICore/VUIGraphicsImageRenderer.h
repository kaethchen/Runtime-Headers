@interface VUIGraphicsImageRenderer : NSObject

+ (id)preferredFormat;
+ (void)SVGImagesWithDataDescriptors:(id)a0 format:(id)a1 completion:(id /* block */)a2;
+ (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1 actions:(id /* block */)a2;
+ (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1 actions:(id /* block */)a2;
+ (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1 cgContextActions:(id /* block */)a2;

@end
