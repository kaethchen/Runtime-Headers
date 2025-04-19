@class FavoritesPickerViewController, NSString, NSCustomTouchBarItem, FavoritesPickerItemStyleResolver, NSTouchBar, NSArray;
@protocol FavoritesPickerFunctionBarProviderDelegate, FunctionBarFavoritesVending;

@interface FavoritesPickerFunctionBarProvider : NSObject <FavoritesPickerViewControllerDataSource, FavoritesPickerViewControllerDelegate, FunctionBarFavoritesClient, NSTouchBarDelegate, NSTouchBarProvider> {
    NSCustomTouchBarItem *_favoritesPickerBarItem;
    FavoritesPickerViewController *_favoritesPickerViewController;
    FavoritesPickerItemStyleResolver *_styleResolver;
    NSArray *_displayedFavorites;
    BOOL _canNavigateUp;
    unsigned long long _favoritesGenerationAtLastFetch;
}

@property (weak, nonatomic) id<FavoritesPickerFunctionBarProviderDelegate> delegate;
@property (retain, nonatomic) id<FunctionBarFavoritesVending> favoritesVendor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)makeTouchBar;
- (id)_expectedFunctionBarItemIdentifiers;
- (id)_favoriteAtIndex:(unsigned long long)a0;
- (unsigned long long)_numberOfFavorites;
- (void)_openFolder:(id)a0;
- (void)_refreshFavorites;
- (void)_updateFunctionBarIfNeeded;
- (BOOL)canNavigateUpInFavoritesPickerViewController:(id)a0;
- (void)favoritesPickerViewController:(id)a0 didSelectFavoriteAtIndex:(unsigned long long)a1;
- (id)favoritesPickerViewController:(id)a0 favoriteAtIndex:(unsigned long long)a1;
- (int)favoritesPickerViewController:(id)a0 styleForFavoriteAtIndex:(unsigned long long)a1;
- (void)favoritesPickerViewControllerDidNavigateUp:(id)a0;
- (void)functionBarFavoritesVendorDidRefresh:(id)a0;
- (unsigned long long)numberOfFavoritesForFavoritesPickerViewController:(id)a0;
- (void)refreshItems;
- (void)resetCurrentFolder;

@end
