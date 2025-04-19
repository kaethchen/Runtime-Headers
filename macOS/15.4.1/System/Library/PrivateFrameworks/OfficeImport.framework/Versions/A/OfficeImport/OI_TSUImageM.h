@interface OI_TSUImageM : OITSUImage

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)init;
+ (id)initWithContentsOfFile:(id)a0;
+ (id)initWithData:(id)a0;
+ (id)initWithCGImage:(struct CGImage { } *)a0;
+ (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(int)a2;
+ (id)initWithImageSourceRef:(struct CGImageSource { } *)a0;
+ (id)initWithNSImage:(id)a0;

@end
