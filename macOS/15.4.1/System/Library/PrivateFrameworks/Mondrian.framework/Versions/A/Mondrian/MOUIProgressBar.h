@class NSColor, CALayer;

@interface MOUIProgressBar : NSView {
    CALayer *_progressBarLayer;
}

@property (nonatomic) float progress;
@property (retain, nonatomic) NSColor *color;
@property (retain, nonatomic) NSColor *borderColor;
@property (retain, nonatomic) NSColor *backgroundColor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)initWithWidth:(double)a0;

@end
