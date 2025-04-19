@class NSImage, NSColor;

@interface CNUIColorButton : NSButton

@property (retain) NSImage *defaultImage;
@property (retain) NSImage *selectedImage;
@property (retain) NSImage *focusedImage;
@property (retain) NSImage *activatedImage;
@property (retain) NSColor *color;
@property double wellDiamter;

+ (id)ringedWellImageWithColor:(id)a0 diameter:(double)a1;
+ (id)ringedWellImageWithColor:(id)a0 shadingFraction:(double)a1 diameter:(double)a2;
+ (id)wellImageWithColor:(id)a0 diameter:(double)a1 drawBorder:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)initWithColor:(id)a0 size:(double)a1;

@end
