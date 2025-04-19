@class NSDictionary, SHTokenizedURL, NSString;

@interface SHOffers : NSObject

@property (readonly) SHTokenizedURL *shazamURL;
@property (readonly) NSDictionary *offerResponse;
@property (readonly) SHTokenizedURL *defaultURL;
@property (readonly, copy) NSString *defaultSubtitle;
@property (readonly, copy) NSString *campaignSubtitle;

- (void).cxx_destruct;
- (id)subtitleForOfferNamed:(id)a0 bundleID:(id)a1;
- (id)campaignURLForTrackID:(id)a0 bundleID:(id)a1 token:(id)a2;
- (id)configForOfferNamed:(id)a0 bundleID:(id)a1;
- (id)defaultURLForBundleID:(id)a0;
- (id)initWithOfferResponse:(id)a0;
- (id)urlForOfferNamed:(id)a0 bundleID:(id)a1;
- (id)valueForSpecializedKey:(id)a0 forBundleID:(id)a1 inDictionary:(id)a2;

@end
