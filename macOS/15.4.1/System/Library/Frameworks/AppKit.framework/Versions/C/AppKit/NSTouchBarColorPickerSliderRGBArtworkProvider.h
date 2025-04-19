@interface NSTouchBarColorPickerSliderRGBArtworkProvider : NSTouchBarColorPickerSliderArtworkProvider {
    long long _rgbComponent;
    long long _entryMode;
}

+ (id)blueArtworkProviderWithEntryMode:(long long)a0;
+ (id)greenArtworkProviderWithEntryMode:(long long)a0;
+ (id)redArtworkProviderWithEntryMode:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (id)formattedValue:(double)a0;
- (id)accessibilityValueStringForValue:(double)a0;
- (id)initWithComponent:(long long)a0 entryMode:(long long)a1;
- (double)lightnessForValue:(double)a0 baseColor:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (id)sliderLabel;
- (void)updateRootTrackLayer:(id)a0 color:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (double)valueFromAccessibilityValueString:(id)a0;

@end
