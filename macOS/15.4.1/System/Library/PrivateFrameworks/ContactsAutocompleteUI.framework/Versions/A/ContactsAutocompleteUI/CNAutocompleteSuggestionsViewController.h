@class NSString, NSCollectionViewLayout, NSArray, CNAvatarImageRenderer, NSCollectionViewDiffableDataSource, CNAutocompleteStore, NSObject, NSCollectionView;
@protocol OS_os_log, CNAutocompleteSuggestionsViewControllerDelegate, CNCancelable;

@interface CNAutocompleteSuggestionsViewController : NSViewController <NSCollectionViewDelegate, CNAutocompleteFetchDelegate>

@property (readonly) NSObject<OS_os_log> *os_log;
@property (nonatomic) unsigned long long searchType;
@property (retain, nonatomic) NSCollectionView *collectionView;
@property (retain, nonatomic) NSCollectionViewLayout *layout;
@property (retain, nonatomic) NSCollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) CNAutocompleteStore *autocompleteStore;
@property (retain, nonatomic) id<CNCancelable> autocompleteFetchToken;
@property (retain, nonatomic) NSArray *fetchedResults;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *selectedResults;
@property (retain, nonatomic) NSArray *otherRecipientAddressesExpanded;
@property (retain, nonatomic) CNAvatarImageRenderer *avatarRenderer;
@property (weak, nonatomic) id<CNAutocompleteSuggestionsViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSArray *otherRecipientAddresses;
@property (nonatomic) BOOL shouldExpandGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 shouldSelectItemsAtIndexPaths:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (void)autocompleteFetchDidFinish:(id)a0;
- (void)fetchRecipients;
- (void)buildCollectionView;
- (id)compositionalLayout;
- (void)didSelectSuggestion:(id)a0;
- (void)imageForResultItem:(id)a0 imageUpdateBlock:(id /* block */)a1;
- (id)initWithSearchType:(unsigned long long)a0;
- (void)invalidateSelectedRecipients;
- (void)processFetchedResults;
- (BOOL)refreshAndUpdateIfNeeded;
- (BOOL)refreshSelectedResults;

@end
