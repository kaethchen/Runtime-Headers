@class NSString, HKSharingRecipientAuthorizationStoreTaskConfiguration;

@interface HDSharingRecipientAuthorizationStoreServer : HDStandardTaskServer <HKSharingRecipientAuthorizationStoreServerInterface, HDSharingAuthorizationManagerObserver> {
    HKSharingRecipientAuthorizationStoreTaskConfiguration *_configuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_addSharingAuthorizations:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchSharingAuthorizationsMarkedForDeletionWithCompletion:(id /* block */)a0;
- (void)remote_fetchSharingAuthorizationsWithCompletion:(id /* block */)a0;
- (void)remote_registerObservers;
- (void)remote_removeSharingAuthorizations:(id)a0 completion:(id /* block */)a1;
- (void)remote_revokeWithCompletion:(id /* block */)a0;
- (void)remote_unregisterObservers;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)sharingAuthorizationManager:(id)a0 didAddSharingAuthorizations:(id)a1 recipientIdentifier:(id)a2;
- (void)sharingAuthorizationManager:(id)a0 didRemoveSharingAuthorizations:(id)a1 recipientIdentifier:(id)a2;
- (void)sharingAuthorizationManager:(id)a0 didRevokeRecipientWithIdentifier:(id)a1;

@end
