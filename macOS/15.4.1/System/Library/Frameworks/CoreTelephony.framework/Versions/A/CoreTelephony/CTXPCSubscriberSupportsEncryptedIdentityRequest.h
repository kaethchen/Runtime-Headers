@class NSString;

@interface CTXPCSubscriberSupportsEncryptedIdentityRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) NSString *service;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 service:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
