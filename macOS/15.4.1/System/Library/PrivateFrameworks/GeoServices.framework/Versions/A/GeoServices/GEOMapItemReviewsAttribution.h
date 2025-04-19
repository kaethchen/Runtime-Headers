@class NSArray;

@interface GEOMapItemReviewsAttribution : GEOMapItemAttribution

@property (readonly, nonatomic) NSArray *addReviewURLs;

- (id)initWithSearchAttributionInfo:(id)a0 serverAttributionURLs:(id)a1 clientActionURLs:(id)a2 poiID:(id)a3;
- (id)initWithSearchAttributionInfo:(id)a0 serverAttributionURLs:(id)a1 clientActionURLs:(id)a2 yelpID:(id)a3;
- (id)urlsForReview:(id)a0;
- (id)urlsForSelectedItemWithItems:(id)a0;

@end
