@class NSServiceViewController;

@interface NSServiceViewControllerWindow : NSAutolayoutJailWindow {
    NSServiceViewController *_viewController;
    unsigned int _adjustWindowContextInProgress;
}

- (void).cxx_destruct;
- (BOOL)_isFunctionRowWindow;
- (BOOL)allowsFontSmoothing;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withViewController:(id)a1;
- (BOOL)windowSizeConstraintsShouldAlwaysWin;

@end
