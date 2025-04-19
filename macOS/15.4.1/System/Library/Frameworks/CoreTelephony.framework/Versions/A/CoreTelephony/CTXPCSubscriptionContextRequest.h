@class CTServiceDescriptor, CTXPCServiceSubscriptionContext;

@interface CTXPCSubscriptionContextRequest : CTXPCRequestMessage

@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *context;
@property (readonly, nonatomic) CTServiceDescriptor *descriptor;

+ (id)allowedClassesForArguments;

- (id)initWithContext:(id)a0;
- (id)initWithDescriptor:(id)a0;
- (id)initWithContext:(id)a0 namedArguments:(id)a1;
- (id)initWithDescriptor:(id)a0 namedArguments:(id)a1;

@end
