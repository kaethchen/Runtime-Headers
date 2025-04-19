@class NSString, NSTextField;

@interface BadgeView : NSView {
    NSTextField *_badgeTextLabel;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double maxWidth;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)_mainWindowDidChange:(id)a0;

@end
