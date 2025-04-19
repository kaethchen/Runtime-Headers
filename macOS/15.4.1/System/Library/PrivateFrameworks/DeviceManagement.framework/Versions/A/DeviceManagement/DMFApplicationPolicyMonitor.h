@class NSSet, NSUUID, DMFPolicyRegistration;

@interface DMFApplicationPolicyMonitor : NSObject

@property (class, readonly, copy, nonatomic) NSSet *policyTypes;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) DMFPolicyRegistration *registration;

+ (void)createPolicyMonitorWithPolicyChangeHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (void)requestPoliciesForBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)requestPoliciesForBundleIdentifiers:(id)a0 withError:(id *)a1;
- (id)_initWithPolicyChangeHandler:(id /* block */)a0 addingRegistration:(BOOL)a1;

@end
