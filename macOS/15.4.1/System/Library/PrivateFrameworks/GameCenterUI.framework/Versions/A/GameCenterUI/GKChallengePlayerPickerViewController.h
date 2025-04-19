@class NSTextField, NSView, NSArray, NSString, GKChallenge, GKComposeController, NSLayoutConstraint, NSButton;

@interface GKChallengePlayerPickerViewController : GKDashboardCollectionViewController <GKComposeControllerDelegate, GKDaemonProxyDataUpdateDelegate>

@property (retain, nonatomic) GKChallenge *challenge;
@property (retain, nonatomic) NSArray *initiallySelectedPlayers;
@property (nonatomic) BOOL shouldIgnoreClearSelection;
@property (nonatomic) NSTextField *descriptionLabel;
@property (nonatomic) NSButton *sendButton;
@property (nonatomic) NSTextField *messageField;
@property NSView *titleView;
@property NSTextField *titleTextField;
@property NSButton *cancelButton;
@property (nonatomic) NSView *scrollingHeader;
@property (nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint;
@property (nonatomic) BOOL shouldApplyInitialOffset;
@property (retain, nonatomic) GKComposeController *composeController;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ inviteFriendHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (void)loadData;
- (void)viewDidLoad;
- (void)send:(id)a0;
- (void)addMessage:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)setSearchText:(id)a0;
- (void)clearSelection;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)backButtonImage;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)preferredFocusEnvironments;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)applyInitialContentOffset;
- (void)composeController:(id)a0 didFinishWithMessage:(id)a1;
- (void)composeControllerWasCancelled:(id)a0;
- (void)dataUpdated:(BOOL)a0 withError:(id)a1;
- (void)doneWithComposeController;
- (id)initWithChallenge:(id)a0 initiallySelectedPlayers:(id)a1;
- (void)selectPlayersAtIndexPaths:(id)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)updateButtonEnableState;

@end
