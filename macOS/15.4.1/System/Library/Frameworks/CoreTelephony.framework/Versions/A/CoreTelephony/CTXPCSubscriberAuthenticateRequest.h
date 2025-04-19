@class CTSubscriberAuthDataHolder;

@interface CTXPCSubscriberAuthenticateRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTSubscriberAuthDataHolder *authInfo;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 authInfo:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
