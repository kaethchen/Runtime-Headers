@class NSString;

@interface GKHostedChallengeIssueController : UXViewController <GKDialogControllerSizing, GKRemoteViewControllerDelegate, GKViewController>

@property (retain, nonatomic) id players;
@property (copy, nonatomic) id defaultMessage;
@property (retain, nonatomic) id challenge;
@property (nonatomic) BOOL forcePicker;
@property (retain, nonatomic) id remoteViewController;
@property BOOL didRequestRemoteViewController;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hostedIssueControllerWithChallenge:(id)a0 players:(id)a1 defaultMessage:(id)a2 completionHandler:(id /* block */)a3;
+ (void)presentHostedIssueControllerWithChallenge:(id)a0 players:(id)a1 defaultMessage:(id)a2;

- (void).cxx_destruct;
- (id)view;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)setNavigationController:(id)a0;
- (void)requestRemoteViewController;
- (struct CGSize { double x0; double x1; })_gkSizeForDialogController;
- (id)initWithChallenge:(id)a0 players:(id)a1 defaultMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)remoteViewController:(id)a0 receivedMessageFromService:(id)a1;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;

@end
