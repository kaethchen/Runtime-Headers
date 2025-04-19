@class CTLazuliChatBotSpamReportInformation, CTLazuliOperationID, CTLazuliDestination;

@interface CTXPCReportChatBotSpamRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliDestination *destination;
@property (readonly, nonatomic) CTLazuliChatBotSpamReportInformation *spamReportInfo;
@property (readonly, nonatomic) CTLazuliOperationID *operationID;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 destination:(id)a1 spamReportInfo:(id)a2 operationID:(id)a3;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
