@class NSString;

@interface CTXPCDeleteChatRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) NSString *chat;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 chat:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
