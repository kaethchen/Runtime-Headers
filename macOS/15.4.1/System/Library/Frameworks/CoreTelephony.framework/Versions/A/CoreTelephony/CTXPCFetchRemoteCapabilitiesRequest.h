@class CTLazuliOperationID, CTLazuliFetchRemoteCapabilitiesOptions, CTLazuliDestination;

@interface CTXPCFetchRemoteCapabilitiesRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliDestination *destination;
@property (readonly, nonatomic) CTLazuliFetchRemoteCapabilitiesOptions *options;
@property (readonly, nonatomic) CTLazuliOperationID *operationID;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 destination:(id)a1 options:(id)a2 operationID:(id)a3;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
