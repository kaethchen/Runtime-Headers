@class NSTouchBarColorPickerSliderHSBArtworkProvider, NSTouchBarColorPickerSliderArtworkProvider;

@interface NSTouchBarColorPickerSlidersHSB : NSTouchBarColorPickerSliders

@property (readonly) double _displayedHueComponent;
@property (readonly) double _displayedSaturationComponent;
@property (readonly) double _displayedBrightnessComponent;
@property (readonly) double _displayedAlphaComponent;
@property (readonly, copy) NSTouchBarColorPickerSliderHSBArtworkProvider *_hueArtworkProvider;
@property (readonly, copy) NSTouchBarColorPickerSliderHSBArtworkProvider *_saturationArtworkProvider;
@property (readonly, copy) NSTouchBarColorPickerSliderHSBArtworkProvider *_brightnessArtworkProvider;
@property (readonly, copy) NSTouchBarColorPickerSliderArtworkProvider *_alphaArtworkProvider;

+ (id)artworkProviderKeyForComponent:(long long)a0;
+ (id)accessibilityIdentifierForComponent:(long long)a0;
+ (id)colorValueKeyForComponent:(long long)a0;
+ (id)keyPathsForValuesAffecting_brightnessArtworkProvider;
+ (id)keyPathsForValuesAffecting_hueArtworkProvider;
+ (id)keyPathsForValuesAffecting_saturationArtworkProvider;

- (id)brightnessSlider;
- (id)colorWithValue:(double)a0 forComponent:(long long)a1 baseColor:(id)a2;
- (id)hueSlider;
- (id)saturationSlider;

@end
