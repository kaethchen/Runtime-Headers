@class NSString;

@interface _MLTImageReader : NSObject

@property (copy, nonatomic) NSString *imagePath;
@property (nonatomic) struct CGImage { } *image;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (struct __CVBuffer { } *)createGrayscalePixelBuffer:(id *)a0;
- (struct __CVBuffer { } *)createImagePixelBuffer:(id *)a0;
- (struct CGImage { } *)createScaledImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithImageAtPath:(id)a0 error:(id *)a1;
- (BOOL)isImageGrayScale:(struct CGImage { } *)a0;
- (struct __CVBuffer { } *)pixelBufferFromCGImage:(struct CGImage { } *)a0 error:(id *)a1;
- (void)resizeImageToWidth:(long long)a0 andHeight:(long long)a1;

@end
