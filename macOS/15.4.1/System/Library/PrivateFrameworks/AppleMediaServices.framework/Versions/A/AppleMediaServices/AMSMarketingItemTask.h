@class NSString, NSDictionary, AMSBagKeySet, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSMarketingItemTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (copy) NSDictionary *contextInfo;
@property (readonly) NSString *clientIdentifier;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) NSString *clientVersion;
@property BOOL hydrateRelatedContent;
@property (retain) NSString *logKey;
@property (retain) NSString *offerHints;
@property (readonly) NSString *placement;
@property (readonly) NSString *serviceType;
@property BOOL includeMediaAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)perform;
- (id)_fetchItems;
- (id)_processMediaResultFromPromise:(id)a0;
- (id)_fetchItemsFromURL:(id)a0;
- (id)_requestForURL:(id)a0 tokenService:(id)a1;
- (id)initWithAccount:(id)a0 bag:(id)a1 clientIdentifier:(id)a2 clientVersion:(id)a3 placement:(id)a4 serviceType:(id)a5;
- (id)initWithBag:(id)a0 clientIdentifier:(id)a1 clientVersion:(id)a2 placement:(id)a3 serviceType:(id)a4;
- (id)performWithFetchOnly;

@end
