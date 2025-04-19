@class NSArray, RTMapServiceManager;

@interface RTMapsSupportManager : RTService <MapsSync.MapsSyncStoreDelegate>

@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (copy, nonatomic) NSArray *storeSubscriptionTypes;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchFavoriteItemsWithHandler:(id /* block */)a0;
- (void)_showParkedCarBulletinForEvent:(id)a0;
- (void)fetchFavoritePlacesWithHandler:(id /* block */)a0;
- (void)_clearParkedCarBulletin;
- (void)_fetchCollectionPlaceItemsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchFavoritePlacesWithHandler:(id /* block */)a0;
- (void)_fetchFavoritePlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchHistoryDirectionsItemsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchHistoryEntryPlaceDisplaysWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchHistoryEntryRoutesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchHistoryPlaceItemsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchPinnedPlacesWithHandler:(id /* block */)a0;
- (void)_fetchReviewedPlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchReviewedPlacesWrapperWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (int)castReferenceFrame:(int)a0;
- (Class)classForMapsSyncClassName:(id)a0;
- (id)classNameForMapsSyncClass:(Class)a0;
- (id)classNamesForMapsSyncClasses:(id)a0;
- (void)clearParkedCarBulletin;
- (void)fetchFavoritePlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchHistoryEntryPlaceDisplaysWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchHistoryEntryRoutesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchPinnedPlacesWithHandler:(id /* block */)a0;
- (void)fetchReviewedPlacesWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)initWithMapServiceManager:(id)a0;
- (long long)queryTypeForMapsSyncClass:(Class)a0;
- (long long)queryTypeForMapsSyncClassName:(id)a0;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (id)storeChangeNotificationClasses;
- (void)storeDidChangeWithTypes:(id)a0;
- (id)stringForQueryType:(long long)a0;

@end
