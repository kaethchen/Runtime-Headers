@interface OITSUCGImage : OITSUImage {
    struct CGImage { } *mCGImage;
    int mOrientation;
    double mScale;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (struct CGImage { } *)CGImage;
- (int)imageOrientation;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(int)a2;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;

@end
