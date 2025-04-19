@class CTLazuliDestination, CTLazuliGroupChatUri, CTLazuliFileTransferDescriptor, CTLazuliMessageID;

@interface CTXPCSendFileTransferMessageRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliMessageID *messageID;
@property (readonly, nonatomic) CTLazuliFileTransferDescriptor *lazuliDescriptor;
@property (readonly, nonatomic) CTLazuliDestination *destination;
@property (readonly, nonatomic) CTLazuliGroupChatUri *groupChatURI;

+ (id)allowedClassesForArguments;
+ (BOOL)isSensitiveMessage;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 destination:(id)a1 messageID:(id)a2 descriptor:(id)a3;
- (id)initWithContext:(id)a0 groupChatURI:(id)a1 messageID:(id)a2 descriptor:(id)a3;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
