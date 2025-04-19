@class NSLock;

@interface ICScannerImageRep : NSObject

@property (retain, nonatomic) NSLock *bufferLock;
@property (nonatomic) BOOL bufferUpdated;
@property (nonatomic) BOOL useOverlay;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overlayRectInternal;
@property (nonatomic) char *overlayBuffer;
@property (nonatomic) long long overlayBufferSize;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long bitsPerComponent;
@property (readonly) unsigned long long bitsPerPixel;
@property (readonly) unsigned long long bytesPerRow;
@property (readonly) struct CGColorSpace { } *colorspace;
@property (readonly) unsigned int bitmapInfo;
@property (readonly) char *buffer;
@property (readonly) long long bufferSize;
@property (readonly) long long bufferSizeUsed;
@property unsigned char backgroundGrayValue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (void)setHeight:(unsigned long long)a0;
- (void)setWidth:(unsigned long long)a0;
- (void)setBitsPerPixel:(unsigned long long)a0;
- (void)setBytesPerRow:(unsigned long long)a0;
- (void)setBitmapInfo:(unsigned int)a0;
- (void)setBitsPerComponent:(unsigned long long)a0;
- (void)setColorspace:(struct CGColorSpace { } *)a0;
- (unsigned long long)copyFromOffset:(long long)a0 length:(unsigned long long)a1 toBuffer:(char *)a2;
- (void)setOverlayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearOverlay;
- (void)clearOverviewImageBuffer;
- (struct CGImage { } *)copyCGImage:(BOOL *)a0;
- (BOOL)copyOverlayBuffer:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)copyToRow:(long long)a0 numRows:(unsigned long long)a1 fromRGBBuffer:(const char *)a2 withBytesPerRow:(unsigned long long)a3;
- (id)initWithBufferSize:(unsigned long long)a0 andBytesPerRow:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })overlayRect;
- (void)setBufferSizeUsed:(long long)a0;

@end
