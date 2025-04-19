@interface TSUCGImage : TSUImage {
    struct CGImage { } *mCGImage;
    long long mOrientation;
    double mScale;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (struct CGImage { } *)CGImage;
- (long long)imageOrientation;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;

@end
