@interface _NSTouchBarCustomizationPaletteCheckboxBox : NSView

@property (getter=isHighlighted) BOOL highlighted;
@property (getter=isChecked) BOOL checked;
@property BOOL hasAccessibilityAppearance;
@property double paletteScaleFactor;

+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (BOOL)allowsVibrancy;
- (double)firstBaselineOffsetFromTop;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)lastBaselineOffsetFromBottom;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
