@class NSView;

@interface SiriSharedUIContentPlatterSeparatorView : NSView

@property (retain, nonatomic) NSView *backgroundView;
@property (retain, nonatomic) NSView *backgroundViewSmall;
@property (nonatomic) long long separatorType;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsLayer;
- (double)_scale;
- (void)_setupBackgroundView;
- (void)_setupBackgroundViewSmall;

@end
