@class NSString;

@interface CTXPCEnablePINRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) BOOL enable;
@property (readonly, nonatomic) NSString *pin;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 enable:(BOOL)a1 pin:(id)a2;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
