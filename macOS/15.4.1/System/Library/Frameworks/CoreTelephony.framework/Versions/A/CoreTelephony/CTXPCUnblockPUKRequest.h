@class NSString;

@interface CTXPCUnblockPUKRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) NSString *puk;
@property (readonly, nonatomic) NSString *pin;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 puk:(id)a1 pin:(id)a2;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
