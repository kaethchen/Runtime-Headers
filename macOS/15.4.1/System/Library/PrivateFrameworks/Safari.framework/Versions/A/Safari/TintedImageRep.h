@class NSImage, NSColor;

@interface TintedImageRep : NSImageRep {
    NSImage *_image;
    NSColor *_tintColor;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)draw;
- (id)initWithImage:(id)a0 tintColor:(id)a1 luminance:(double)a2;

@end
