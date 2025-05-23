@class NSColor, NSString;

@interface _CRKDebugOverlayView : _CRKHitTestPassThroughView

@property (copy, nonatomic) NSColor *color;
@property (copy, nonatomic) NSString *debugText;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
