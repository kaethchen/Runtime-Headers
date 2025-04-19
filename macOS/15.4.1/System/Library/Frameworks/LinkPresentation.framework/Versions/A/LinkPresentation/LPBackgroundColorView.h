@class NSColor;

@interface LPBackgroundColorView : NSView

@property (retain, nonatomic) NSColor *color;

- (void).cxx_destruct;
- (id)initWithColor:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)updateColor;

@end
