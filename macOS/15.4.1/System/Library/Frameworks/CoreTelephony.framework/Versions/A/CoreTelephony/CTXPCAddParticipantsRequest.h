@class CTLazuliGroupChatParticipantList, CTLazuliOperationID, CTLazuliGroupChatUri;

@interface CTXPCAddParticipantsRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliGroupChatUri *groupChatURI;
@property (readonly, nonatomic) CTLazuliGroupChatParticipantList *participants;
@property (readonly, nonatomic) CTLazuliOperationID *operationID;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 groupChatURI:(id)a1 participants:(id)a2 operationID:(id)a3;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
