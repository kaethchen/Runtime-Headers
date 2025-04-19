@class NSTouchBarColorPickerSliderArtworkProvider, NSTouchBarColorPickerSliderRGBArtworkProvider;

@interface NSTouchBarColorPickerSlidersRGB : NSTouchBarColorPickerSliders

@property long long entryMode;
@property (readonly) double _displayedRedComponent;
@property (readonly) double _displayedGreenComponent;
@property (readonly) double _displayedBlueComponent;
@property (readonly) double _displayedAlphaComponent;
@property (readonly, copy) NSTouchBarColorPickerSliderRGBArtworkProvider *_redArtworkProvider;
@property (readonly, copy) NSTouchBarColorPickerSliderRGBArtworkProvider *_greenArtworkProvider;
@property (readonly, copy) NSTouchBarColorPickerSliderRGBArtworkProvider *_blueArtworkProvider;
@property (readonly, copy) NSTouchBarColorPickerSliderArtworkProvider *_alphaArtworkProvider;

+ (id)artworkProviderKeyForComponent:(long long)a0;
+ (id)accessibilityIdentifierForComponent:(long long)a0;
+ (id)colorValueKeyForComponent:(long long)a0;
+ (id)keyPathsForValuesAffecting_blueArtworkProvider;
+ (id)keyPathsForValuesAffecting_greenArtworkProvider;
+ (id)keyPathsForValuesAffecting_redArtworkProvider;

- (void)dealloc;
- (void)_updateEntryMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
