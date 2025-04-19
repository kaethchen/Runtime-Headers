@interface NSTouchBarColorPickerSliderHSBArtworkProvider : NSTouchBarColorPickerSliderArtworkProvider

@property (readonly) long long representedHSBComponent;

+ (id)brightnessArtworkProviderWithDisplayHue:(double)a0 displaySaturation:(double)a1;
+ (id)hueArtworkProvider;
+ (id)saturationArtworkProviderWithDisplayHue:(double)a0;

@end
