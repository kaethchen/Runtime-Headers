@class NSMutableDictionary, CKSoftwareMapObserver;

@interface CKSoftwareMap : CKServiceInterface

@property (retain, nonatomic) NSMutableDictionary *productsObservers;
@property (retain, nonatomic) CKSoftwareMapObserver *sharedObserver;

+ (id)sharedSoftwareMap;

- (void).cxx_destruct;
- (void)connectionWasInterrupted;
- (id)initWithStoreClient:(id)a0;
- (id)receiptFromBundleAtPath:(id)a0;
- (void)removeProductsObserverForToken:(id)a0;
- (id)productForPath:(id)a0;
- (id)addProductsObserver:(id /* block */)a0 queue:(id)a1;
- (id)adopt:(id)a0;
- (id)adoptableBundleIdentifiers;
- (BOOL)adoptionCompletedForBundleID:(id)a0 adoptingDSID:(out id *)a1 appleID:(out id *)a2;
- (id)allProducts;
- (id)bundleInfoFromBundleAtPath:(id)a0;
- (id)iconForApplicationWithBundeID:(id)a0;
- (BOOL)isTrialVersionOfBundleIdentifier:(id)a0;
- (id)productForBundleIdentifier:(id)a0;
- (id)productForItemIdentifier:(unsigned long long)a0;
- (void)startAdoptionEligibilityCheckWithReplyBlock:(id /* block */)a0;
- (id)updateRequestBodyData:(BOOL *)a0 includeInstalledApps:(BOOL)a1 includeBundledApps:(BOOL)a2 conditionally:(BOOL)a3 hadUnadoptedApps:(out BOOL *)a4;

@end
