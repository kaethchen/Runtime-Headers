@class NSPurgeableData;

@interface WFPurgeableImage : NSObject {
    unsigned int _bitmapInfo;
    NSPurgeableData *_bytes;
    struct CGColorSpace { } *_colorSpace;
    unsigned long long _bitsPerComponent;
    unsigned long long _bytesPerRow;
    struct CGSize { double width; double height; } _size;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (struct CGImage { } *)copyImage;
- (void)accessImageContext:(id /* block */)a0;

@end
