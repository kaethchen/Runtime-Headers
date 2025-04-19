@interface NSTouchBarColorPickerSliderArtworkProvider : NSObject <NSCopying>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedValue:(double)a0;
- (id)accessibilityValueStringForValue:(double)a0;
- (double)lightnessForValue:(double)a0 baseColor:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (id)sliderLabel;
- (long long)textEffectForValue:(double)a0 baseColor:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (id)trackLabelForValue:(double)a0;
- (void)updateRootTrackLayer:(id)a0 color:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (double)valueFromAccessibilityValueString:(id)a0;

@end
