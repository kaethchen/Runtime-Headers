@class NSString, AMSBagKeySet, ACAccount;
@protocol AMSBagProtocol;

@interface AMSFamilyInfoLookupTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) NSString *logKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_processURLResult:(id)a0;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)fetchFamilyInfoLookupFromServer;
- (void)_cacheFamilyInfoLookupResult:(id)a0 forAccount:(id)a1;
- (id)_cachedFamilyInfoLookupResultForAccount:(id)a0;
- (id)_currentCachedFamilyInfo;
- (id)_pathForCachedFamilyInfoLookupResult;
- (id)_performFamilyInfoRequestForAccount:(id)a0 error:(id *)a1;
- (id)fetchFamilyInfoLookupFromCache;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)initWithBag:(id)a0;
- (id)initWithBagContract:(id)a0;
- (id)performFamilyInfoLookup;
- (id)performFamilyInfoLookupWithCachePolicy:(long long)a0;

@end
