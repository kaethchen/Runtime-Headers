@class NSString;

@interface CTXPCUnlockPINRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) NSString *pin;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 pin:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
