@class NSArray, NSURL;

@interface GEOMapItemPlaceAttribution : GEOMapItemAttribution

@property (readonly, nonatomic) NSArray *checkInURLs;
@property (readonly, nonatomic) NSURL *webURL;

- (id)initWithSearchAttributionInfo:(id)a0 serverAttributionURLs:(id)a1 clientActionURLs:(id)a2 poiID:(id)a3;

@end
