@class NSView, NSString, GKTurnBasedMatchDetailViewController, NSButton, GKGame, GKMatchRequest, GKCollectionViewController, GKTurnBasedMatchesDataSource, GKTurnBasedInviteViewController, GKMatchDetailDimmingView;
@protocol GKTurnBasedMatchesViewControllerDelegate;

@interface GKTurnBasedMatchesViewController : GKCollectionViewController <GKTurnBasedInviteViewControllerDelegate, GKTurnBasedMatchDetailViewControllerDelegate>

@property (retain) GKTurnBasedMatchesDataSource *matchesDataSource;
@property long long maxMatchesSeen;
@property (retain) NSString *matchIDWaitingForTurnEvent;
@property (retain) GKTurnBasedInviteViewController *inviteController;
@property (retain) GKTurnBasedMatchDetailViewController *detailViewController;
@property (retain, nonatomic) NSView *topContainer;
@property (retain, nonatomic) NSButton *doneButton;
@property (retain, nonatomic) GKMatchDetailDimmingView *dimmingView;
@property (weak, nonatomic) GKCollectionViewController *masterViewController;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) GKMatchRequest *matchRequest;
@property (weak, nonatomic) id<GKTurnBasedMatchesViewControllerDelegate> delegate;
@property (nonatomic) BOOL showExistingMatches;
@property (nonatomic) BOOL showPlay;
@property (nonatomic) BOOL showQuit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)doneButtonPressed;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)configureDataSource;
- (void)showMatch:(id)a0;
- (void)updateRecipientProperties:(id)a0 forPlayer:(id)a1;
- (void)acceptInviteForMatch:(id)a0;
- (void)configureHeader:(id)a0 indexPath:(id)a1;
- (void)configureViewFactories;
- (void)detailPressedForMatch:(id)a0;
- (void)detailViewControllerHasBeenDismissed;
- (void)didEnterNoContentState;
- (void)dismissDetailViewController;
- (void)gameButtonPressed;
- (void)handleTurnBasedEvent:(id)a0;
- (void)hideNonEssentialView:(BOOL)a0;
- (id)initWithMatchRequest:(id)a0;
- (BOOL)isInGame;
- (void)launchGameAndShowMatch:(id)a0;
- (void)loadDataWithCompletionHandlerAndError:(id /* block */)a0;
- (void)notifyGameWithMatch:(id)a0 orError:(id)a1;
- (void)showDetailForMatch:(id)a0;
- (void)showInviteControllerAnimated:(BOOL)a0;
- (void)turnBasedInviteViewController:(id)a0 didCreateMatchID:(id)a1;
- (void)turnBasedInviteViewController:(id)a0 didFailWithError:(id)a1;
- (void)turnBasedInviteViewControllerWasCancelled:(id)a0;
- (void)turnBasedMatchDetailViewControllerDidAcceptInvitation:(id)a0;
- (void)turnBasedMatchDetailViewControllerDidChooseMatch:(id)a0;
- (void)turnBasedMatchDetailViewControllerDidDeclineInvitation:(id)a0;
- (void)turnBasedMatchDetailViewControllerDidFinish:(id)a0;
- (void)turnBasedMatchDetailViewControllerDidQuitMatch:(id)a0;
- (void)turnBasedMatchDetailViewControllerDidRemoveMatch:(id)a0;
- (void)turnBasedMatchDetailViewControllerDidShowStore:(id)a0;
- (void)turnBasedMatchesDataSource:(id)a0 didQuitMatch:(id)a1;

@end
