@class NSColor, NSImage, CALayer;

@interface NSTouchBarCustomizationPreviewPulseView : NSView {
    CALayer *_borderLayer;
    CALayer *_imageLayer;
}

@property (copy) NSColor *pulseColor;
@property (copy) NSImage *contentImage;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setLayer:(id)a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
