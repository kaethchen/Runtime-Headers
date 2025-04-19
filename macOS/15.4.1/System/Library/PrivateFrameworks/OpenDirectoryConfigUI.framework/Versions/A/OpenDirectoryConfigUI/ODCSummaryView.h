@class ODCSummaryViewController, SFAuthorizationView;

@interface ODCSummaryView : NSView {
    ODCSummaryViewController *_controller;
}

@property (nonatomic) SFAuthorizationView *authView;
@property (nonatomic) BOOL locked;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startUpdating;
- (void)stopUpdating;
- (void)lookForServers;
- (void)startOSXServerJoin:(id)a0 withUser:(id)a1;
- (void)updateLocked;

@end
