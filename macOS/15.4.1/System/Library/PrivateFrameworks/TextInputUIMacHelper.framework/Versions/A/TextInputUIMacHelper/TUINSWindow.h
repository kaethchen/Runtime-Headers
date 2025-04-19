@class NSArray, NSRemoteViewController, NSRemoteView;

@interface TUINSWindow : NSWindow

@property (retain, nonatomic) NSRemoteViewController *remoteViewController;
@property (readonly, nonatomic) NSRemoteView *remoteView;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (double)_cornerRadius;
- (BOOL)_ignoredForScripting;
- (BOOL)_window:(id)a0 shouldCloseForClosingParentPopoverWindowWithTransientContext:(BOOL)a1;
- (BOOL)canBecomeKeyWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (id)uiWindows;

@end
