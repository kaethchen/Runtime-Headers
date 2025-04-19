@interface NSTouchBarColorPickerSliderCMYKArtworkProvider : NSTouchBarColorPickerSliderArtworkProvider {
    long long _cmykComponent;
}

+ (id)blackArtworkProvider;
+ (id)cyanArtworkProvider;
+ (id)magentaArtworkProvider;
+ (id)yellowArtworkProvider;

- (BOOL)isEqual:(id)a0;
- (id)initWithComponent:(long long)a0;
- (id)formattedValue:(double)a0;
- (id)accessibilityValueStringForValue:(double)a0;
- (double)lightnessForValue:(double)a0 baseColor:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (id)sliderLabel;
- (void)updateRootTrackLayer:(id)a0 color:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (double)valueFromAccessibilityValueString:(id)a0;

@end
