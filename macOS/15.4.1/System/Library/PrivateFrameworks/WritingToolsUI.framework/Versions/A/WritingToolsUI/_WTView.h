@interface _WTView : NSView

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonLayoutSubviews;
- (id)_commonPlatformViewInit;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })platformGetVisibleRect;
- (id)platformInstalledDisplayLinkWithTarget:(id)a0 selector:(SEL)a1;
- (void)platformPerformWithoutAnimation:(id /* block */)a0;
- (void)platformSetUserInteractionEnabled:(BOOL)a0;

@end
