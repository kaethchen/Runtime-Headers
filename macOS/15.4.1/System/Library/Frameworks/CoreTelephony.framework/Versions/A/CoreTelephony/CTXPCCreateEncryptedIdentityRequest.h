@class NSString;

@interface CTXPCCreateEncryptedIdentityRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) NSString *identity;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 identity:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
