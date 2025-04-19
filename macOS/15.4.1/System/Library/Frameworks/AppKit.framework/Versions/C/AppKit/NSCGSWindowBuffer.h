@interface NSCGSWindowBuffer : NSObject {
    void *_bytes;
    unsigned long long _width;
    unsigned long long _height;
    long long _bytesPerRow;
    unsigned long long _bitsPerPixel;
    unsigned long long _bitsPerComponent;
    unsigned int _bitmapInfo;
    struct CGColorSpace { } *_colorSpace;
    double _scale;
}

@property (readonly) void *bytes;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) long long bytesPerRow;
@property (readonly) unsigned long long bitsPerPixel;
@property (readonly) unsigned long long bitsPerComponent;
@property (readonly) unsigned int bitmapInfo;
@property (readonly, copy) struct CGColorSpace { } *colorSpace;
@property (readonly) double scale;

- (void)dealloc;
- (id)init;
- (id)initWithBytes:(void *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bytesPerRow:(long long)a3 bitsPerPixel:(unsigned long long)a4 bitsPerComponent:(unsigned long long)a5 bitmapInfo:(unsigned int)a6 colorSpace:(struct CGColorSpace { } *)a7 scale:(double)a8;

@end
