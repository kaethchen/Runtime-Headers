@class NSString, GKMatchRequest;
@protocol GKTurnBasedMatchmakerViewControllerDelegate, GKRemoteViewController;

@interface GKTurnBasedMatchmakerViewController : NSViewController <GKRemoteViewControllerDelegate, GKDialogControllerSizing, GKViewController>

@property (retain, nonatomic) GKMatchRequest *matchRequest;
@property (retain, nonatomic) id<GKRemoteViewController> remoteViewController;
@property BOOL didRequestRemoteViewController;
@property (weak, nonatomic) id<GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate;
@property (nonatomic) BOOL showExistingMatches;
@property (nonatomic) long long matchmakingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)view;
- (void)cancel;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)finishWithError:(id)a0;
- (void)requestRemoteViewController;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (id)_gkInGameUIUnavailableAlertWithDismissHandler:(id /* block */)a0;
- (BOOL)_gkMatchParentContentSize;
- (struct CGSize { double x0; double x1; })_gkSizeForDialogController;
- (void)authenticationChanged:(id)a0;
- (void)finishWithMatch:(id)a0;
- (id)initWithMatchRequest:(id)a0;
- (void)playerQuitMatch:(id)a0;
- (void)reloadOrDismissRemoteViewController;
- (void)remoteViewController:(id)a0 receivedMessageFromService:(id)a1;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;

@end
