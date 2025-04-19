@class SafariWebBookmarkList, NSString, CombinedFavoritesController;
@protocol FunctionBarFavoritesClient;

@interface FunctionBarFavoritesVendor : NSObject <FunctionBarFavoritesVending> {
    CombinedFavoritesController *_combinedFavoritesController;
}

@property (weak, nonatomic) id<FunctionBarFavoritesClient> client;
@property (retain, nonatomic) SafariWebBookmarkList *vendedFolder;
@property (readonly, nonatomic) BOOL canNavigateUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_favoritesDidChange:(id)a0;
- (id)_defaultVendedFolder;
- (void)_notifyClientOfRefresh;
- (void)getFunctionBarFavoritesWithCompletionHandler:(id /* block */)a0;
- (id)initWithCombinedFavoritesController:(id)a0;

@end
