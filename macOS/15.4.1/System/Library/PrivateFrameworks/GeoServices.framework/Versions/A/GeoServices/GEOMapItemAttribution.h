@class NSArray, NSString, GEOSearchAttributionInfo;

@interface GEOMapItemAttribution : NSObject {
    GEOSearchAttributionInfo *_info;
    NSArray *_attributionURLs;
    NSString *_yelpID;
    NSString *_poiID;
}

@property (copy, nonatomic) NSArray *serverAttributionURLs;
@property (copy, nonatomic) NSArray *clientActionURLs;
@property (readonly, nonatomic) NSString *providerID;
@property (readonly, nonatomic) NSString *providerName;
@property (readonly, nonatomic) NSString *captionDisplayName;
@property (readonly, nonatomic) NSArray *attributionURLs;
@property (readonly, nonatomic) NSArray *attributionApps;
@property (readonly, nonatomic) NSString *webBaseActionURL;
@property (readonly, nonatomic) BOOL shouldOpenInAppStore;
@property (readonly, nonatomic) BOOL requiresAttributionInCallout;
@property (readonly, nonatomic) BOOL requiresAttributionInDeveloperPlaceCard;
@property (readonly, nonatomic) NSString *appAdamID;

+ (id)attributionWithDataAttribution:(id)a0 searchInfo:(id)a1 class:(Class)a2;

- (void).cxx_destruct;
- (id)_yelpHTTPURLForRequirement:(int)a0 withUID:(id)a1 writeAReview:(BOOL)a2;
- (id)initWithSearchAttributionInfo:(id)a0 serverAttributionURLs:(id)a1 clientActionURLs:(id)a2;
- (id)initWithSearchAttributionInfo:(id)a0 serverAttributionURLs:(id)a1 clientActionURLs:(id)a2 poiID:(id)a3;
- (id)initWithSearchAttributionInfo:(id)a0 serverAttributionURLs:(id)a1 clientActionURLs:(id)a2 yelpID:(id)a3;
- (id)providerLogoPathForScale:(double)a0;
- (id)providerSnippetLogoPathForScale:(double)a0;

@end
