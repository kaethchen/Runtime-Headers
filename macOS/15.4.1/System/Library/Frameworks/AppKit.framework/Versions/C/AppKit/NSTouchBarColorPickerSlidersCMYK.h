@class NSTouchBarColorPickerSliderCMYKArtworkProvider, NSTouchBarColorPickerSliderArtworkProvider;

@interface NSTouchBarColorPickerSlidersCMYK : NSTouchBarColorPickerSliders

@property (readonly) double _displayedCyanComponent;
@property (readonly) double _displayedMagentaComponent;
@property (readonly) double _displayedYellowComponent;
@property (readonly) double _displayedBlackComponent;
@property (readonly) double _displayedAlphaComponent;
@property (readonly, copy) NSTouchBarColorPickerSliderCMYKArtworkProvider *_cyanArtworkProvider;
@property (readonly, copy) NSTouchBarColorPickerSliderCMYKArtworkProvider *_magentaArtworkProvider;
@property (readonly, copy) NSTouchBarColorPickerSliderCMYKArtworkProvider *_yellowArtworkProvider;
@property (readonly, copy) NSTouchBarColorPickerSliderCMYKArtworkProvider *_blackArtworkProvider;
@property (readonly, copy) NSTouchBarColorPickerSliderArtworkProvider *_alphaArtworkProvider;

+ (id)artworkProviderKeyForComponent:(long long)a0;
+ (id)accessibilityIdentifierForComponent:(long long)a0;
+ (id)colorValueKeyForComponent:(long long)a0;
+ (id)defaultColorSpace;

@end
