@class NSWindow, NSObject, GKGameCenterViewController;

@interface GKAccessPoint : NSObject <GKGameCenterControllerDelegate>

@property (class, readonly, nonatomic) GKAccessPoint *shared;

@property (retain, nonatomic) NSWindow *window;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) long long hideCount;
@property (nonatomic) BOOL willBecomeActive;
@property (nonatomic) BOOL isPresentingGameCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInScreenCoordinates;
@property (nonatomic) BOOL isShowingTriggeredPresentation;
@property (retain, nonatomic) id viewController;
@property (retain, nonatomic) GKGameCenterViewController *gameCenterViewController;
@property (retain, nonatomic) NSObject *privateImplementation;
@property (nonatomic) double delay;
@property (nonatomic) double timeLastShown;
@property (retain, nonatomic) NSWindow *window;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) long long hideCount;
@property (nonatomic) BOOL willBecomeActive;
@property (nonatomic) BOOL isPresentingGameCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInScreenCoordinates;
@property (nonatomic) BOOL isShowingTriggeredPresentation;
@property (retain, nonatomic) id viewController;
@property (retain, nonatomic) GKGameCenterViewController *gameCenterViewController;
@property (retain, nonatomic) NSObject *privateImplementation;
@property (nonatomic) double delay;
@property (nonatomic) double timeLastShown;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isFocused) BOOL focused;
@property (nonatomic) BOOL showHighlights;
@property (nonatomic) long long location;
@property (weak, nonatomic) NSWindow *parentWindow;

+ (BOOL)canUseViewBridge;

- (void).cxx_destruct;
- (void)updateUI;
- (void)showWindow;
- (void)loadModels;
- (void)didUpdateLocation:(long long)a0;
- (void)triggerAccessPointWithLeaderboardID:(id)a0 playerScope:(long long)a1 timeScope:(long long)a2 handler:(id /* block */)a3;
- (void)triggerAccessPointWithState:(long long)a0 handler:(id /* block */)a1;
- (void)showDashboardWithState:(long long)a0 handler:(id /* block */)a1;
- (void)hideAccessPoint;
- (void)resetUI;
- (void)showAccessPoint;
- (void)configureIfNeeded;
- (void)decrementHideCount;
- (void)didTapAccessPoint;
- (void)didUpdateParentWindow:(id)a0;
- (void)dismissGameCenter;
- (void)gameCenterViewControllerDidFinish:(id)a0;
- (void)incrementHideCount;
- (void)recordAccessPointClick;
- (void)removeWindow;
- (void)showDashboardWithAchievementID:(id)a0 handler:(id /* block */)a1;
- (void)showDashboardWithLeaderboardID:(id)a0 playerScope:(long long)a1 timeScope:(long long)a2 handler:(id /* block */)a3;
- (void)showDashboardWithLeaderboardSetID:(id)a0 handler:(id /* block */)a1;
- (void)showDashboardWithPlayer:(id)a0 handler:(id /* block */)a1;
- (void)showPlayTogetherWithChallengeDefinitionID:(id)a0 handler:(id /* block */)a1;
- (void)triggerAccessPointForFriendInvitesWithHandler:(id /* block */)a0;
- (void)triggerAccessPointForPlayTogetherWithHandler:(id /* block */)a0;
- (void)triggerAccessPointWithAchievementID:(id)a0 handler:(id /* block */)a1;
- (void)triggerAccessPointWithChallengeDefinitionID:(id)a0 handler:(id /* block */)a1;
- (void)triggerAccessPointWithHandler:(id /* block */)a0;
- (void)triggerAccessPointWithLeaderboardSetID:(id)a0 handler:(id /* block */)a1;
- (void)triggerAccessPointWithPlayer:(id)a0 handler:(id /* block */)a1;

@end
