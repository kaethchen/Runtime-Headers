@class CTLazuliMessageIDList;

@interface CTXPCAcknowledgeIncomingMessagesRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliMessageIDList *messageIDList;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 messageIDList:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
