@class NSImage;

@interface SiriUIImageMaskView : NSView

@property (retain, nonatomic) NSImage *maskImage;

+ (id)imageMaskViewWithDefaultChevron;
+ (id)imageMaskViewWithImage:(id)a0;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setMaskColor:(id)a0;

@end
