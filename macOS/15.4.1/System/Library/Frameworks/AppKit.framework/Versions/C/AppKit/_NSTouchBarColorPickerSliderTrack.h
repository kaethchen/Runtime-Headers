@class NSColor, NSArray, NSTouchBarColorPickerSliderArtworkProvider;

@interface _NSTouchBarColorPickerSliderTrack : NSView {
    id _autounbinder;
}

@property (copy) NSColor *displayedColor;
@property (copy) NSArray *allowedColorSpaces;
@property (copy) NSTouchBarColorPickerSliderArtworkProvider *artworkProvider;
@property BOOL valueIsFlipped;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (oneway void)release;
- (void)dealloc;
- (id)_autounbinder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (BOOL)wantsLayer;

@end
