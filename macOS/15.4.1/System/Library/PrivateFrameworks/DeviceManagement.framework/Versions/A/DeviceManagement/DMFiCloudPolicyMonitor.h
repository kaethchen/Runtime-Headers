@class NSArray, NSUUID;

@interface DMFiCloudPolicyMonitor : NSObject

@property (readonly, copy, nonatomic) NSArray *policyTypes;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (nonatomic) long long iCloudLogoutPolicy;

+ (id)new;
+ (id)iCloudLogoutPolicyForPoliciesByType:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPolicyChangeHandler:(id /* block */)a0;
- (void)requestiCloudLogoutPolicyWithCompletionHandler:(id /* block */)a0;
- (id)requestiCloudLogoutPolicyWithError:(id *)a0;

@end
