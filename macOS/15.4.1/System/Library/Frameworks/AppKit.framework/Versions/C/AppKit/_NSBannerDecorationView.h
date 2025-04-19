@interface _NSBannerDecorationView : NSView

@property BOOL drawsTopSeparator;
@property BOOL drawsBottomSeparator;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (id)_coreUIOptions;
- (id)_coreUIOptionsWithBackingScaleFactor:(double)a0;
- (int)_vibrancyBlendMode;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
