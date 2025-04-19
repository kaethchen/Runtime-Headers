@interface PIEImageRaster : NSObject

@property (readonly) struct CGSize { double width; double height; } dimensions;
@property (readonly) struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *raster;
@property (readonly) struct CGContext { } *rasterContext;

- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (struct CGImage { } *)createCGImage;
- (id)initWithDimensions:(struct CGSize { double x0; double x1; })a0;
- (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)fastColorAtX:(unsigned long long)a0 y:(unsigned long long)a1;

@end
