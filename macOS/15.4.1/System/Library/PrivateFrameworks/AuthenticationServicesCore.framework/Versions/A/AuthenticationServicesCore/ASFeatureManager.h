@class WBSAutoFillQuirksManager, NSObject;
@protocol OS_dispatch_queue;

@interface ASFeatureManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSAutoFillQuirksManager *_quirksManager;
}

@property (class, readonly, nonatomic) ASFeatureManager *sharedManager;
@property (class, readonly, nonatomic) BOOL shouldAllowAddingNewPasswords;

@property (readonly, nonatomic, getter=isAirDropPasswordsAvailable) BOOL airDropPasswordsAvailable;
@property (readonly, nonatomic, getter=isDeviceConfiguredToAllowPasskeys) BOOL deviceConfiguredToAllowPasskeys;

- (id)init;
- (void).cxx_destruct;
- (id)entepriseAttestationIdentityPersistentReferenceForRelyingParty:(id)a0;
- (BOOL)arePasskeysDisallowedForRelyingParty:(id)a0;
- (BOOL)shouldUseFallbackUIForRelyingParty:(id)a0;
- (id)_fetchCurrentManagedConfiguration;
- (BOOL)_shouldApplyPasskeyQuirks;
- (BOOL)canRequestEnterpriseAttestationForRelyingParty:(id)a0;
- (BOOL)isClientEntitledForInternalTestingWithAuditToken:(struct { unsigned int x0[8]; })a0;

@end
