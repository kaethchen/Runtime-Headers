@class NSString, ODCServersViewController, SFAuthorizationView;

@interface ODCServersView : NSView {
    ODCServersViewController *_controller;
}

@property (nonatomic) SFAuthorizationView *authView;
@property (nonatomic) BOOL locked;
@property (copy) NSString *remoteServerName;
@property (copy) NSString *remoteAdminName;
@property (copy) NSString *remotePassword;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startUpdating;
- (void)stopUpdating;
- (void)lookForServers;
- (void)updateLocked;

@end
