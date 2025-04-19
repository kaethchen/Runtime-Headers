@class NSString, NSMapTable, NSPointerArray;
@protocol FavoritesPickerViewControllerDelegate, FavoritesPickerViewControllerDataSource;

@interface FavoritesPickerViewController : NSViewController <FavoritesPickerCellViewAccessibilityDelegate, NSScrubberDataSource, NSScrubberDelegate, NSScrubberFlowLayoutDelegate> {
    NSMapTable *_cellViewsToTokens;
    NSPointerArray *_cellViews;
    BOOL _ignoreSelectionChange;
}

@property (weak, nonatomic) id<FavoritesPickerViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<FavoritesPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_scrubber;
- (void)didFinishInteractingWithScrubber:(id)a0;
- (void)loadView;
- (long long)numberOfItemsForScrubber:(id)a0;
- (void)reloadData;
- (void)scrubber:(id)a0 didSelectItemAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })scrubber:(id)a0 layout:(id)a1 sizeForItemAtIndex:(long long)a2;
- (id)scrubber:(id)a0 viewForItemAtIndex:(long long)a1;
- (void)_goBack;
- (unsigned long long)_favoriteIndexForScrubberIndex:(unsigned long long)a0;
- (id)_enqueuedSiteMetadataRequestForCellView:(id)a0 favorite:(id)a1;
- (BOOL)_isBackButtonAtIndex:(unsigned long long)a0;
- (BOOL)_shouldShowBackButton;
- (int)_styleForFavoriteAtIndex:(unsigned long long)a0;
- (void)viewDidReceiveAccessibilityInteraction:(id)a0;

@end
