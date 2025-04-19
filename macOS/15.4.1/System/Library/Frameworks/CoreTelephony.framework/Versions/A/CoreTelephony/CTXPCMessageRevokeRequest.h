@class CTLazuliMessageRevokeData, CTLazuliMessageID;

@interface CTXPCMessageRevokeRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliMessageRevokeData *revokeData;
@property (readonly, nonatomic) CTLazuliMessageID *messageID;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 revokeData:(id)a1 messageID:(id)a2;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
