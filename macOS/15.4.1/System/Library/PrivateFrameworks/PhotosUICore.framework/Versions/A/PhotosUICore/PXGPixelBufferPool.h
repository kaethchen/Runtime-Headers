@interface PXGPixelBufferPool : NSObject <NSCopying> {
    struct __CVPixelBufferPool { } *_pixelBufferPool;
}

@property (readonly, nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) unsigned int pixelFormatType;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;

+ (id)pixelBufferPoolWithSize:(struct CGSize { double x0; double x1; })a0 format:(unsigned int)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithPixelBufferPool:(struct __CVPixelBufferPool { } *)a0;

@end
