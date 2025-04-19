@class SafariWebBookmarkList, NSSet, NSString;
@protocol NSCopying;

@interface FavoritesCanonicalURLCollectingOperation : NSOperation <CacheableResultBookmarksOperation, OverridableBookmarksOperation>

@property (readonly, nonatomic) SafariWebBookmarkList *rootBookmarkListForFavorites;
@property (readonly, copy, nonatomic) NSSet *canonicalURLs;
@property (readonly, nonatomic) id<NSCopying> cacheKey;
@property (retain, nonatomic) id result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)cachedResultIsInvalidatedWhenBookmarksChange;

- (void).cxx_destruct;
- (void)main;
- (id)initWithRootBookmarkListForFavorites:(id)a0;

@end
