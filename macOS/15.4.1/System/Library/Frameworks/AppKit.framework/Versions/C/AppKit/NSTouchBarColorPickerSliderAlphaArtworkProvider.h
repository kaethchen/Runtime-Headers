@interface NSTouchBarColorPickerSliderAlphaArtworkProvider : NSTouchBarColorPickerSliderArtworkProvider

- (BOOL)isEqual:(id)a0;
- (id)formattedValue:(double)a0;
- (id)accessibilityValueStringForValue:(double)a0;
- (id)sliderLabel;
- (long long)textEffectForValue:(double)a0 baseColor:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (void)updateRootTrackLayer:(id)a0 color:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (double)valueFromAccessibilityValueString:(id)a0;

@end
