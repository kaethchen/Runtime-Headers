@interface QLPlatformImage : NSObject {
    struct CGImage { } *_cgImage;
}

@property struct CGSize { double width; double height; } size;
@property struct CGImage { } *CGImage;
@property (copy, nonatomic) id /* block */ cleanupDataBlock;
@property unsigned int orientation;
@property double scale;

+ (id)imageWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(unsigned int)a2;

- (void)dealloc;
- (void).cxx_destruct;

@end
