@class NSImage;

@interface OITSUNSImage : OITSUImage {
    NSImage *mNSImage;
    double mScale;
}

+ (id)imageNamed:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithData:(id)a0;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (struct CGImage { } *)CGImage;
- (int)imageOrientation;
- (id)NSImage;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)CGImageForContentsScale:(double)a0;
- (id)initWithNSImage:(id)a0;
- (struct CGImage { } *)p_CGImageForGraphicsContext:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)stretchedImageOfSize:(struct CGSize { double x0; double x1; })a0 leftCapWidth:(double)a1 rightCapWidth:(double)a2 topCapHeight:(double)a3 bottomCapHeight:(double)a4;

@end
