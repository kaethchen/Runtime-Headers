@class NSColor, CALayer;

@interface VTUITickMarkView : NSView {
    float _phase;
    NSColor *_redColor;
    NSColor *_blueColor;
    NSColor *_backgroundColor;
    CALayer *_checkMaskLayer;
    CALayer *_xMaskLayer;
    BOOL _isSAEMacBuddy;
}

@property float phase;
@property (nonatomic) int glyph;

+ (id)defaultAnimationForKey:(id)a0;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)checkMaskLayer;
- (void)cycleWithCompletion:(id /* block */)a0;
- (void)setIsSAEMacBuddy:(BOOL)a0;
- (id)xMaskLayer;

@end
