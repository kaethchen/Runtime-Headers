@class NSImage, NSColor;

@interface TintedImageRep : NSImageRep

@property (readonly, nonatomic) NSImage *imageToTint;
@property (readonly, nonatomic) NSColor *tintColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)draw;
- (BOOL)hasAlpha;
- (id)initWithImage:(id)a0 tintColor:(id)a1;

@end
