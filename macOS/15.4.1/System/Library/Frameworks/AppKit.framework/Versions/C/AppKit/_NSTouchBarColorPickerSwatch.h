@class NSColor, NSView, NSColorDisplayView;

@interface _NSTouchBarColorPickerSwatch : NSView {
    NSView *_borderView;
    NSColorDisplayView *_colorView;
}

@property (copy) NSColor *color;

- (void)dealloc;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityRole;
- (id)accessibilityValueAttribute;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isAccessibilityElement;

@end
