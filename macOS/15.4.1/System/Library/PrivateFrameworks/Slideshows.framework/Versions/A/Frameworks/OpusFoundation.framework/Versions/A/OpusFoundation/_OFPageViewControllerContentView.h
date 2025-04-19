@class NSObject;

@interface _OFPageViewControllerContentView : OFNSView

@property (readonly, nonatomic) NSObject *pageControl;

- (void)dealloc;
- (id)makeBackingLayer;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidatePageViewController;

@end
