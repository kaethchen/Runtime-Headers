@interface SOFontSmoothingTextField : NSTextField

@property BOOL disableFontSmoothing;

- (BOOL)canSmoothFontsInLayer;
- (BOOL)shouldSetFontSmoothingBackgroundColor;

@end
