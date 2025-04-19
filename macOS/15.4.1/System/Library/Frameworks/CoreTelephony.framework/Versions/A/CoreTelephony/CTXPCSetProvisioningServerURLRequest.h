@class NSString;

@interface CTXPCSetProvisioningServerURLRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) NSString *url;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 url:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
