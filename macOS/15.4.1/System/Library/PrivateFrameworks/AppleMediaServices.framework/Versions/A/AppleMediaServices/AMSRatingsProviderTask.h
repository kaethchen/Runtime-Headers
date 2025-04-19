@class NSString, AMSBagKeySet;
@protocol AMSBagProtocol;

@interface AMSRatingsProviderTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long mediaType;
@property (readonly) NSString *storeFront;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) NSString *clientIdentifier;
@property (readonly) unsigned long long useCase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)ratingWithValue:(id)a0 mediaType:(unsigned long long)a1 storeFront:(id)a2 clientIdentifier:(id)a3 bag:(id)a4;

- (void).cxx_destruct;
- (id)performTask;
- (id)_appQueryItems;
- (id)_commonQueryItems;
- (id)_unratedRatingQueryItem;
- (id)_urlForMediaType:(unsigned long long)a0 error:(id *)a1;
- (id)initForAllMediaWithClientIdentifier:(id)a0 useCase:(unsigned long long)a1 bag:(id)a2;
- (id)initForAllMediaWithStoreFront:(id)a0 clientIdentifier:(id)a1 useCase:(unsigned long long)a2 bag:(id)a3;
- (id)initForAllMediaWithUnratedRatingsForStoreFront:(id)a0 clientIdentifier:(id)a1 useCase:(unsigned long long)a2 bag:(id)a3;
- (id)initWithMediaType:(unsigned long long)a0 clientIdentifier:(id)a1 bag:(id)a2;
- (id)initWithMediaType:(unsigned long long)a0 storeFront:(id)a1 clientIdentifier:(id)a2 bag:(id)a3;
- (id)resultWithCachedData:(id)a0;

@end
