@class NSColor, NSGradient;

@interface AKTrackpadBackgroundView : NSView

@property (retain, nonatomic) NSColor *topColor;
@property (retain, nonatomic) NSColor *bottomColor;
@property (retain, nonatomic) NSGradient *gradient;

- (void).cxx_destruct;
- (void)commonInit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
