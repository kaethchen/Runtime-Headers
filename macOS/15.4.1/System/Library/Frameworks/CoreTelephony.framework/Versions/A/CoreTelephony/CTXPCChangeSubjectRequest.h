@class CTLazuliOperationID, CTLazuliGroupChatSubject, CTLazuliGroupChatUri;

@interface CTXPCChangeSubjectRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliGroupChatUri *groupChatURI;
@property (readonly, nonatomic) CTLazuliGroupChatSubject *subject;
@property (readonly, nonatomic) CTLazuliOperationID *operationID;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 groupChatURI:(id)a1 subject:(id)a2 operationID:(id)a3;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
