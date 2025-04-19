@class NSTextField, NSString, NSAttributedString, NSColor;

@interface NSTouchBarCustomizationPalettePushButton : NSControl <NSAccessibilityButton> {
    NSTextField *_titleField;
    id _autounbinder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isHighlighted) BOOL highlighted;
@property (readonly) double _labelFontSize;
@property (readonly, copy) NSColor *_labelTextColor;
@property (readonly, copy) NSColor *_bezelBackgroundColor;
@property (readonly, copy) NSAttributedString *_labelFontAttributedString;
@property (copy) NSString *title;
@property double paletteScaleFactor;

+ (id)buttonWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
+ (id)keyPathsForValuesAffecting_labelFontAttributedString;
+ (id)keyPathsForValuesAffecting_labelFontSize;
+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (oneway void)release;
- (void)dealloc;
- (void)_accessibilityDisplayOptionsDidChange:(id)a0;
- (id)_autounbinder;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (BOOL)allowsVibrancy;
- (double)firstBaselineOffsetFromTop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (double)lastBaselineOffsetFromBottom;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
