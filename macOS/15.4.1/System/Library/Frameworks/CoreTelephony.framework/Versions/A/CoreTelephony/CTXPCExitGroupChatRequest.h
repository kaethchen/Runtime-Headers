@class CTLazuliOperationID, CTLazuliGroupChatUri;

@interface CTXPCExitGroupChatRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliGroupChatUri *groupChatURI;
@property (readonly, nonatomic) CTLazuliOperationID *operationID;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 groupChatURI:(id)a1 operationID:(id)a2;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
