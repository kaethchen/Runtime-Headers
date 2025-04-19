@class GKNoContentView, NSDictionary, NSString, GKGameLayerCollectionDataSource, NSScrollView, NSCollectionView;

@interface GKLeaderboardListViewController : GKLoadingViewController <NSWindowDelegate, GameCenterUI.ScrollViewProvider>

@property NSCollectionView *collectionView;
@property (nonatomic) BOOL showingLeaderboardSets;
@property (retain, nonatomic) GKNoContentView *noContentView;
@property (nonatomic) BOOL canSegueToScores;
@property (retain, nonatomic) GKGameLayerCollectionDataSource *dataSource;
@property (retain, nonatomic) NSDictionary *leaderboardSetAssetNames;
@property (retain, nonatomic) NSDictionary *leaderboardAssetNames;
@property (nonatomic) BOOL isDeeplinked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSScrollView *scrollView;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)hasData;
- (id)title;
- (void)loadData;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })windowWillResize:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isLoading;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)clearSelection;
- (void)donePressed:(id)a0;
- (id)backButtonImage;
- (BOOL)isNewsApp;
- (void)setNeedsRefresh;
- (void)_gkRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)configureCloseButton;
- (void)dataUpdated:(BOOL)a0 withError:(id)a1;
- (void)didEnterLoadingState;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (void)hideNoContentPlaceholder;
- (id)initWithGameRecord:(id)a0 leaderboardSet:(id)a1;
- (void)removeVisualEffectInView:(id)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)showNoContentPlaceholderForError:(id)a0;
- (void)viewFrameDidChange;

@end
