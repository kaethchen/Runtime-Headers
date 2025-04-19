@class CTLazuliFileTransferDescriptor, CTLazuliDestinationList, CTLazuliMessageID;

@interface CTXPCSendOneToManyFileTransferRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliDestinationList *destinationList;
@property (readonly, nonatomic) CTLazuliMessageID *messageID;
@property (readonly, nonatomic) CTLazuliFileTransferDescriptor *fileTransferDescriptor;

+ (id)allowedClassesForArguments;
+ (BOOL)isSensitiveMessage;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 to:(id)a1 withMessageID:(id)a2 withDescriptor:(id)a3;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
