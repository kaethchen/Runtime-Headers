@interface OFNSImage : NSImage {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsCenter;
}

+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)imageWithContentsOfFile:(id)a0;
+ (id)imageNamed:(id)a0 inBundle:(id)a1;

- (struct CGImage { } *)CGImage;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)resizableImageWithCapInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 opaque:(BOOL)a1 scale:(double)a2;

@end
