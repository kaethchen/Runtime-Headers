@class NSError, SFSportsItem;

@interface SearchUI.SearchUITVUtilities : NSObject

+ (id)favoritesDidChangeNotificationName;
+ (void)fetchSportsFavoritesEnabledStatusWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
+ (void)fetchSportsItemIsFavoritedWithSportsItem:(SFSportsItem *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;
+ (void)updateSportsItemFavoriteStatusWithSportsItem:(SFSportsItem *)a0 shouldBeFavorite:(BOOL)a1 completionHandler:(void (^)(NSError *))a2;

- (id)init;

@end
