@class NSView;

@interface _NSBrowserHeaderClipView : NSClipView

@property (retain, nonatomic) NSView *headerView;

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_currentDocViewFrame;
- (void)_handleFrameChangeForSubview:(id)a0;
- (void)_pinDocRect;
- (void)_selfBoundsChanged;

@end
