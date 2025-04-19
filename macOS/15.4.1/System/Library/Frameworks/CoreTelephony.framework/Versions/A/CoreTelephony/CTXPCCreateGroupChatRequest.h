@class CTLazuliOperationID, CTLazuliGroupChatInformation;

@interface CTXPCCreateGroupChatRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliGroupChatInformation *groupChatInfo;
@property (readonly, nonatomic) CTLazuliOperationID *operationID;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 groupChatInfo:(id)a1 operationID:(id)a2;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
