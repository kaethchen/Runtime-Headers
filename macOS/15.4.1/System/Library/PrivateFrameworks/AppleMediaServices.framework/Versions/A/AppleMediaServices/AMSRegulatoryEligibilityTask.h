@class NSNumber, NSObject;

@interface AMSRegulatoryEligibilityTask : AMSTask

@property (class, readonly) AMSRegulatoryEligibilityTask *sharedInstance;

@property (retain) NSObject *cachedServerDataService;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } overrideLock;
@property (retain) NSNumber *override;

+ (id)fetchRegulatoryiTunesAccounts;
+ (BOOL)setBillingCountries:(id)a0 withStatus:(unsigned long long)a1 error:(id *)a2;
+ (id)setRegulatoryPropertyOnAccounts:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)update;
- (void)updateAMSDefaultsWith:(id)a0 accounts:(id)a1;
- (void)clearAMSDefaults;
- (void)handleCachedDataUpdate;
- (id)initWithServerData:(id)a0;
- (BOOL)setForcedOverride:(id)a0 error:(id *)a1;

@end
