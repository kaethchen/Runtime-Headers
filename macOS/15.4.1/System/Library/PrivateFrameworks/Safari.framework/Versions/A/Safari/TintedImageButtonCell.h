@class NSColor;

@interface TintedImageButtonCell : NSButtonCell

@property (retain, nonatomic) NSColor *tintColor;
@property (nonatomic) double imageAlpha;

- (void).cxx_destruct;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;

@end
