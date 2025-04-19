@class NSArray, NSMutableDictionary, NSMutableSet, GKChallenge;

@interface GKDashboardChallengePlayerPickerDataSource : GKCollectionDataSource

@property (retain, nonatomic) GKChallenge *challenge;
@property (retain, nonatomic) NSArray *players;
@property (retain, nonatomic) NSMutableDictionary *playerStates;
@property (retain, nonatomic) NSMutableDictionary *playerAchievementDates;
@property (retain, nonatomic) NSArray *searchPlayers;
@property (retain, nonatomic) NSArray *suggestedFriends;
@property (nonatomic) BOOL showingAllFriendSuggestions;
@property (retain, nonatomic) NSMutableSet *invitedFriendContactIdentifiers;
@property (nonatomic) BOOL showingFriendSuggestions;
@property (readonly, nonatomic) NSArray *selectedPlayers;
@property (copy, nonatomic) id /* block */ inviteFriendHandler;

- (void).cxx_destruct;
- (long long)itemCount;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)clearSelection;
- (id)initWithChallenge:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)loadDataWithCompletionHandler:(id /* block */)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)itemForIndexPath:(id)a0;
- (id)addInvitedFriendContactIdentifier:(id)a0;
- (id)currentPlayers;
- (long long)friendSuggestionsCount;
- (id)headerTextForSection:(long long)a0;
- (id)indexPathForPlayer:(id)a0;
- (id)playerForIndexPath:(id)a0;
- (double)preferredCollectionHeight;
- (id)searchKeyForSection:(long long)a0;
- (void)searchTextHasChanged;
- (void)setupCollectionView:(id)a0;

@end
