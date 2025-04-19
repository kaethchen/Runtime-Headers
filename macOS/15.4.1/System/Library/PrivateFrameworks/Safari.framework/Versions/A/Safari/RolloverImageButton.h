@class NSColor, NSArray, NSImage;

@interface RolloverImageButton : RolloverTrackingButton

@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *rolloverColor;
@property (retain, nonatomic) NSColor *alternateColor;
@property (retain, nonatomic) NSColor *rolloverBackgroundColor;
@property (retain, nonatomic) NSColor *alternateBackgroundColor;
@property (retain, nonatomic) NSArray *symbolColorPalette;
@property (nonatomic) BOOL shouldUseReaderActivatedColorPalette;
@property (retain, nonatomic) NSImage *rolloverImage;
@property (retain, nonatomic) NSImage *focusRingMask;
@property (nonatomic) BOOL allowsVibrancy;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;
- (id)_modifierBackgroundColor;
- (id)_modifierColor;
- (void)_setAttributes;
- (void)_windowChangedKeyState;
- (void)awakeFromNib;
- (void)drawFocusRingMask;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldUseRolloverAppearance;
- (id)_currentSymbolColorPalette;

@end
