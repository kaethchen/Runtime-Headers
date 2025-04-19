@class CTLazuliMessageID, CTLazuliChatBotResponseForSuggestedReply, CTLazuliDestination;

@interface CTXPCSendResponseForSuggestedReplyRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliDestination *destination;
@property (readonly, nonatomic) CTLazuliMessageID *messageID;
@property (readonly, nonatomic) CTLazuliChatBotResponseForSuggestedReply *response;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 destination:(id)a1 messageID:(id)a2 response:(id)a3;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
