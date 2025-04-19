@class NSTouchBarColorPickerSliderGrayscaleArtworkProvider, NSTouchBarColorPickerSliderArtworkProvider;

@interface NSTouchBarColorPickerSlidersGrayscale : NSTouchBarColorPickerSliders

@property (readonly) double _displayedGrayscaleComponent;
@property (readonly) double _displayedAlphaComponent;
@property (readonly, copy) NSTouchBarColorPickerSliderGrayscaleArtworkProvider *_grayscaleArtworkProvider;
@property (readonly, copy) NSTouchBarColorPickerSliderArtworkProvider *_alphaArtworkProvider;

+ (id)artworkProviderKeyForComponent:(long long)a0;
+ (id)accessibilityIdentifierForComponent:(long long)a0;
+ (id)colorValueKeyForComponent:(long long)a0;
+ (id)defaultColorSpace;

@end
