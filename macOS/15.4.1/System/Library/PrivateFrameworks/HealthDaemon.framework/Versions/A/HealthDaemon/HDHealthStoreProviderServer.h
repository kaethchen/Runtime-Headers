@class NSString;

@interface HDHealthStoreProviderServer : HDStandardTaskServer <HDHealthStoreProviderServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_fetchAvailableIdentifiersWithCompletion:(id /* block */)a0;
- (void)remote_fetchForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_requestAuthorizationToNewIdentifierToShareTypes:(id)a0 readTypes:(id)a1 completion:(id /* block */)a2;
- (void)remote_requestAuthorizationToNewIdentifierWithCompletion:(id /* block */)a0;

@end
