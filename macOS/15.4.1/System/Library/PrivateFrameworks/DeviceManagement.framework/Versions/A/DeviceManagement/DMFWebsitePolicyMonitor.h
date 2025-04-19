@class NSSet, NSUUID;

@interface DMFWebsitePolicyMonitor : NSObject

@property (class, readonly, copy, nonatomic) NSSet *policyTypes;

@property (readonly, copy, nonatomic) NSUUID *identifier;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (void)requestPoliciesForWebsites:(id)a0 completionHandler:(id /* block */)a1;

@end
