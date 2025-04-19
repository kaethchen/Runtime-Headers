@class NSString, GKLeaderboard, NSObject;
@protocol GKGameCenterControllerDelegate, GKRemoteViewController;

@interface GKGameCenterViewController : NSViewController <GKRemoteViewControllerDelegate, GKDialogControllerSizing, GKViewController>

@property (retain, nonatomic) id<GKRemoteViewController> remoteViewController;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) NSString *playerIdentifier;
@property (retain, nonatomic) NSString *leaderboardCategory;
@property (nonatomic) long long leaderboardTimeScope;
@property (nonatomic) long long leaderboardPlayerScope;
@property (nonatomic) long long viewState;
@property BOOL didRequestRemoteViewController;
@property BOOL isShowingAuthOrOnboardingUI;
@property (nonatomic) BOOL isArcade;
@property (nonatomic) BOOL isPresentingOverlay;
@property (copy, nonatomic) NSString *launchContext;
@property (retain, nonatomic) NSString *leaderboardIdentifier;
@property (retain, nonatomic) NSString *leaderboardSetIdentifier;
@property (retain, nonatomic) NSString *achievementIdentifier;
@property (retain, nonatomic) NSObject *overlay;
@property (nonatomic) unsigned long long _gkRemotePresentation;
@property (weak) id<GKGameCenterControllerDelegate> gameCenterDelegate;
@property (copy, nonatomic) NSString *launchContext;
@property (retain, nonatomic) NSString *leaderboardIdentifier;
@property (retain, nonatomic) NSString *leaderboardSetIdentifier;
@property (retain, nonatomic) NSString *achievementIdentifier;
@property (retain, nonatomic) NSObject *overlay;
@property (nonatomic) unsigned long long _gkRemotePresentation;
@property (weak) id<GKGameCenterControllerDelegate> gameCenterDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)view;
- (id)initWithState:(long long)a0;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)initWithPlayer:(id)a0;
- (void)requestRemoteViewController;
- (BOOL)isNewsApp;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (void)checkArcadeStateWithCompletion:(id /* block */)a0;
- (void)presentOverlayWithInitialState:(id)a0;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (id)_gkInGameUIUnavailableAlertWithDismissHandler:(id /* block */)a0;
- (BOOL)_gkMatchParentContentSize;
- (struct CGSize { double x0; double x1; })_gkSizeForDialogController;
- (id)constructInitialState;
- (id)initWithAchievementID:(id)a0;
- (id)initWithLeaderboard:(id)a0 playerScope:(long long)a1;
- (id)initWithLeaderboardID:(id)a0 playerScope:(long long)a1 timeScope:(long long)a2;
- (id)initWithLeaderboardSetID:(id)a0;
- (id)initWithPlayerID:(id)a0 withFriendsList:(BOOL)a1;
- (void)playPressedForChallenge:(id)a0;
- (void)processAuthOrOnboardingMessageType:(unsigned long long)a0;
- (void)reloadOrDismissRemoteViewController;
- (void)remoteViewController:(id)a0 receivedMessageFromService:(id)a1;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;
- (void)requestAuthOnboardingRemoteViewControllerWithMode:(unsigned long long)a0;
- (BOOL)shouldShowPlayForChallenge;

@end
