@class CTLazuliMessageText, CTLazuliDestinationList, CTLazuliMessageID;

@interface CTXPCSendOneToManyTextMessageRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliDestinationList *destinationList;
@property (readonly, nonatomic) CTLazuliMessageID *messageID;
@property (readonly, nonatomic) CTLazuliMessageText *message;

+ (id)allowedClassesForArguments;
+ (BOOL)isSensitiveMessage;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 to:(id)a1 withMessageID:(id)a2 withMessage:(id)a3;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
