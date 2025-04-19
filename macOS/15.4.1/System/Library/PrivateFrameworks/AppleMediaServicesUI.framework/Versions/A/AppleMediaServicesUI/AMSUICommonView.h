@class NSString, NSColor, CALayer;

@interface AMSUICommonView : NSView

@property (readonly) NSString *accessibilityElementLabel;
@property double alpha;
@property (getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (retain) NSColor *backgroundColor;
@property (retain) CALayer *layer;
@property (retain) NSColor *tintColor;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)_setup;
- (id)accessibilityLabel;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)layoutSubviews;
- (void)mouseDown:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)setNeedsLayout;
- (void)bringSubviewToFront:(id)a0;
- (void)sendSubviewToBack:(id)a0;

@end
