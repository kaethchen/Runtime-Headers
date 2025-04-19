@class NSSet, NSDictionary, NSUUID;

@interface DMFCommunicationPolicyMonitor : NSObject

@property (class, readonly, copy, nonatomic) NSSet *policyTypes;
@property (class, readonly, copy, nonatomic) NSSet *communicationBundleIdentifiers;

@property (copy) NSDictionary *policiesByBundleIdentifier;
@property (nonatomic) BOOL didFetchInitialPolicies;
@property (readonly, copy, nonatomic) NSUUID *identifier;

+ (id)new;
+ (unsigned long long)communicationPolicyForApplicationPolicy:(id)a0 downtimeEnforced:(BOOL)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (void)_updatePoliciesByBundleIdentifier;
- (void)requestPoliciesByBundleIdentifierWithCompletionHandler:(id /* block */)a0;
- (id)requestPoliciesByBundleIdentifierWithError:(id *)a0;

@end
