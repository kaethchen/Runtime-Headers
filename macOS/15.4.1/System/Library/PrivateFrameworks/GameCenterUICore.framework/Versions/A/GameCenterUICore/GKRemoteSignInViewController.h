@class GKLocalPlayer, NSString;
@protocol GKRemoteSignInViewControllerDelegate, GKRemoteViewController;

@interface GKRemoteSignInViewController : NSViewController <GKRemoteViewControllerDelegate, GKDialogControllerSizing>

@property (retain, nonatomic) id<GKRemoteViewController> remoteViewController;
@property BOOL didRequestRemoteViewController;
@property (retain) GKLocalPlayer *localPlayer;
@property long long viewAppearCount;
@property (weak) id<GKRemoteSignInViewControllerDelegate> delegate;
@property unsigned long long signInViewControllerMode;
@property BOOL invokedFromSystemSettings;
@property (readonly) struct CGSize { double x0; double x1; } dialogSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)view;
- (void)applicationWillTerminate:(id)a0;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)requestRemoteViewController;
- (unsigned long long)_gkDimmingMethod;
- (BOOL)_gkMatchParentContentSize;
- (struct CGSize { double x0; double x1; })_gkSizeForDialogController;
- (id)initWithLocalPlayer:(id)a0;
- (void)remoteViewController:(id)a0 receivedMessageFromService:(id)a1;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;

@end
