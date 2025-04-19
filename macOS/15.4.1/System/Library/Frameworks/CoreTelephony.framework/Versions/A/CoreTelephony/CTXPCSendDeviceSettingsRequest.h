@class CTLazuliMessageID, CTLazuliSuggestedActionSettings, CTLazuliDestination;

@interface CTXPCSendDeviceSettingsRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliDestination *destination;
@property (readonly, nonatomic) CTLazuliMessageID *messageID;
@property (readonly, nonatomic) CTLazuliSuggestedActionSettings *settings;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 destination:(id)a1 messageID:(id)a2 settings:(id)a3;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
