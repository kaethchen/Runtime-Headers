@class NSArray, NSString, NSHashTable, NSObject, PKXPCService;
@protocol PKPassLibraryDelegate, OS_dispatch_queue, NSObject;

@interface PKPassLibrary : NSObject <PKXPCServiceDelegate, PKPassLibraryExportedInterface> {
    PKXPCService *_remoteService;
    PKPassLibrary *_remoteLibrary;
    id<NSObject> _remoteLibraryObserver;
    unsigned long long _interfaceType;
    NSHashTable *_delegates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegatesLock;
    NSObject<OS_dispatch_queue> *_asynchronousImageQueue;
}

@property (weak, nonatomic) id<PKPassLibraryDelegate> delegate;
@property (readonly, nonatomic, getter=isSecureElementPassActivationAvailable) BOOL secureElementPassActivationAvailable;
@property (readonly, copy, nonatomic) NSArray *remoteSecureElementPasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (unsigned long long)requestAutomaticPassPresentationSuppressionWithResponseHandler:(id /* block */)a0;
+ (id)sharedInstanceWithRemoteLibrary;
+ (BOOL)contactlessInterfaceCanBePresentedFromSource:(long long)a0;
+ (BOOL)contactlessInterfaceCanBePresentedFromSource:(long long)a0 deviceUILocked:(BOOL)a1;
+ (void)endAutomaticPassPresentationSuppressionWithRequestToken:(unsigned long long)a0;
+ (BOOL)isPassLibraryAvailable;
+ (BOOL)isPaymentPassActivationAvailable;
+ (BOOL)isSecureElementPassActivationAvailable;
+ (BOOL)isSuppressingAutomaticPassPresentation;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)delegates;
- (id)passes;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_filterPeerPaymentPass:(id)a0 request:(id)a1;
- (void)_postLibraryChangeWithUserInfo:(id)a0;
- (void)presentContactlessInterfaceForDefaultPassFromSource:(long long)a0 completion:(id /* block */)a1;
- (id)passesOfStyles:(unsigned long long)a0;
- (void)_activateSecureElementPass:(id)a0 withActivationCode:(id)a1 activationData:(id)a2 completion:(id /* block */)a3;
- (void)_applyDataAccessorToObject:(id)a0;
- (void)_applyDataAccessorToObjects:(id)a0;
- (id)_copyPassesOfStyles:(unsigned long long)a0 withRetries:(unsigned long long)a1;
- (id)_copyPassesOfType:(unsigned long long)a0 withRetries:(unsigned long long)a1;
- (id)_copyPassesWithRetries:(unsigned long long)a0;
- (long long)_currentNotificationCountForIdentifier:(id)a0;
- (id)_defaultPaymentPassForPaymentRequest:(id)a0;
- (id)_extendedRemoteObjectProxy;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)_fetchContentForUniqueID:(id)a0 usingSynchronousProxy:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_fetchImageSetContainerForUniqueID:(id)a0 ofType:(long long)a1 displayProfile:(id)a2 suffix:(id)a3 usingSynchronousProxy:(BOOL)a4 withCompletion:(id /* block */)a5;
- (void)_fetchImageSetForUniqueID:(id)a0 ofType:(long long)a1 displayProfile:(id)a2 suffix:(id)a3 usingSynchronousProxy:(BOOL)a4 withCompletion:(id /* block */)a5;
- (void)_getGroupsControllerSnapshotWithOptions:(id)a0 synchronously:(BOOL)a1 retries:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)_getPassesAndCatalogOfPassTypes:(unsigned long long)a0 synchronously:(BOOL)a1 limitResults:(BOOL)a2 withRetries:(unsigned long long)a3 handler:(id /* block */)a4;
- (BOOL)_hasInterfaceOfType:(unsigned long long)a0;
- (BOOL)_hasRemoteLibrary;
- (id)_inAppRemoteObjectProxy;
- (id)_inAppRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_inAppRemoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (id)_initWithRemote:(id)a0;
- (id)_remoteLibrary;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (BOOL)_setSetting:(unsigned long long)a0 enabled:(BOOL)a1 forPass:(id)a2;
- (id)_sortedPaymentPassesForPaymentRequest:(id)a0;
- (id)_sortedPaymentPassesForPaymentRequest:(id)a0 additionalPaymentPasses:(id)a1;
- (id)_synchronousExtendedRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_synchronousInAppRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)activatePaymentPass:(id)a0 withActivationCode:(id)a1 completion:(id /* block */)a2;
- (void)activatePaymentPass:(id)a0 withActivationData:(id)a1 completion:(id /* block */)a2;
- (void)activateSecureElementPass:(id)a0 withActivationData:(id)a1 completion:(id /* block */)a2;
- (void)addISO18013Blobs:(id)a0 cardType:(long long)a1 completion:(id /* block */)a2;
- (void)addISO18013BlobsFromCredentials:(id)a0 cardType:(long long)a1 completion:(id /* block */)a2;
- (void)addPasses:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addPassesContainer:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addPassesWithData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addPassesWithIngestionPayloads:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addUnsignedPassesAtURLs:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)archiveForObjectWithUniqueID:(id)a0;
- (void)archivePassWithUniqueID:(id)a0;
- (void)availableHomeKeyPassesWithCompletionHandler:(id /* block */)a0;
- (id)backupMetadata;
- (void)badgeCountItemsWithCompletion:(id /* block */)a0;
- (id)cachedImageSetForUniqueID:(id)a0 type:(long long)a1 withDisplayProfile:(id)a2 displayTraits:(id)a3;
- (void)canAddCarKeyPassWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (BOOL)canAddFelicaPass;
- (BOOL)canAddPassOfType:(unsigned long long)a0;
- (BOOL)canAddPaymentPassWithPrimaryAccountIdentifier:(id)a0;
- (BOOL)canAddSecureElementPassWithConfiguration:(id)a0;
- (void)canAddSecureElementPassWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (BOOL)canAddSecureElementPassWithConfiguration:(id)a0 outError:(id *)a1;
- (BOOL)canAddSecureElementPassWithPrimaryAccountIdentifier:(id)a0;
- (void)canPresentPaymentRequest:(id)a0 completion:(id /* block */)a1;
- (void)catalogChanged:(id)a0 withNewPasses:(id)a1;
- (void)catalogChanged:(id)a0 withNewPasses:(id)a1 states:(id)a2;
- (void)checkFidoKeyPresenceForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 fidoKeyHash:(id)a2 completion:(id /* block */)a3;
- (void)checkForTransitNotification;
- (void)configureHomeAuxiliaryCapabilitiesForSerialNumber:(id)a0 homeIdentifier:(id)a1 fromUnifiedAccessDescriptor:(id)a2 andAliroDescriptor:(id)a3 completion:(id /* block */)a4;
- (void)configurePushProvisioningConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)configurePushProvisioningConfigurationV2:(id)a0 completion:(id /* block */)a1;
- (void)contactlessInterfaceDidDismissFromSource:(long long)a0;
- (void)contactlessInterfaceDidPresentFromSource:(long long)a0;
- (BOOL)containsPass:(id)a0;
- (void)containsPassWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1 completionHandler:(id /* block */)a2;
- (id)contentForUniqueID:(id)a0;
- (unsigned long long)countOfPasses;
- (unsigned long long)countPassesOfType:(unsigned long long)a0;
- (void)createFidoKeyForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 challenge:(id)a2 externalizedAuth:(id)a3 completion:(id /* block */)a4;
- (id)dataForBundleResourceNamed:(id)a0 withExtension:(id)a1 objectUniqueIdentifier:(id)a2;
- (id)dataForBundleResources:(id)a0 objectUniqueIdentifier:(id)a1;
- (id)defaultPaymentPassesWithRemotePasses:(BOOL)a0;
- (void)deleteKeyMaterialForSubCredentialId:(id)a0;
- (id)diffForPassUpdateUserNotificationWithIdentifier:(id)a0;
- (id)dynamicStateForPassUniqueID:(id)a0;
- (void)enableExpressForPassWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1 completionHandler:(id /* block */)a2;
- (void)enabledValueAddedServicePassesWithCompletion:(id /* block */)a0;
- (void)encryptedServiceProviderDataForSecureElementPass:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)estimatedTimeToResetApplePay;
- (id)expressFelicaTransitPasses;
- (void)fetchContentForUniqueID:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchCurrentRelevantPassInfo:(id /* block */)a0;
- (void)fetchHasCandidatePasses:(id /* block */)a0;
- (void)fetchHomePaymentApplicationsForSerialNumber:(id)a0 completion:(id /* block */)a1;
- (void)fetchImageSetForUniqueID:(id)a0 ofType:(long long)a1 displayProfile:(id)a2 suffix:(id)a3 withCompletion:(id /* block */)a4;
- (void)fetchTransactionKeyForPassTypeIdentifier:(id)a0 serialNumber:(id)a1 completionHandler:(id /* block */)a2;
- (void)forceImmediateRevocationCheck;
- (void)generateAuxiliaryCapabilitiesForRequirements:(id)a0 completion:(id /* block */)a1;
- (void)generateISOEncryptionCertificateForSubCredentialId:(id)a0 completion:(id /* block */)a1;
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)a0 completion:(id /* block */)a1;
- (void)generateTransactionKeyWithReaderIdentifier:(id)a0 readerPublicKey:(id)a1 completion:(id /* block */)a2;
- (void)getContainmentStatusAndSettingsForPass:(id)a0 withHandler:(id /* block */)a1;
- (void)getGroupsControllerSnapshotWithOptions:(id)a0 synchronously:(BOOL)a1 handler:(id /* block */)a2;
- (void)getMetadataForFieldWithProperties:(id)a0 withHandler:(id /* block */)a1;
- (void)getPassesAndCatalog:(BOOL)a0 synchronously:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)getPassesAndCatalog:(BOOL)a0 withHandler:(id /* block */)a1;
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)a0 synchronously:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)getPassesWithUniqueIdentifiers:(id)a0 handler:(id /* block */)a1;
- (void)hasInAppPaymentPassesForNetworks:(id)a0 capabilities:(unsigned long long)a1 issuerCountryCodes:(id)a2 isMultiTokensRequest:(BOOL)a3 withHandler:(id /* block */)a4;
- (void)hasInAppPaymentPassesForNetworks:(id)a0 capabilities:(unsigned long long)a1 issuerCountryCodes:(id)a2 paymentRequestType:(id)a3 isMultiTokensRequest:(BOOL)a4 withHandler:(id /* block */)a5;
- (void)hasInAppPaymentPassesForNetworks:(id)a0 capabilities:(unsigned long long)a1 issuerCountryCodes:(id)a2 withHandler:(id /* block */)a3;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)a0 issuerCountryCodes:(id)a1 isMultiTokensRequest:(BOOL)a2 withHandler:(id /* block */)a3;
- (void)hasInAppPrivateLabelPaymentPassesForWebDomain:(id)a0 issuerCountryCodes:(id)a1 isMultiTokensRequest:(BOOL)a2 withHandler:(id /* block */)a3;
- (BOOL)hasPassesInExpiredSection;
- (BOOL)hasPassesOfType:(unsigned long long)a0;
- (BOOL)hasPassesWithSupportedNetworks:(id)a0 merchantCapabilities:(unsigned long long)a1 issuerCountryCodes:(id)a2 webDomain:(id)a3;
- (BOOL)hasPassesWithSupportedNetworks:(id)a0 merchantCapabilities:(unsigned long long)a1 issuerCountryCodes:(id)a2 webDomain:(id)a3 paymentRequestType:(id)a4 isMultiTokensRequest:(BOOL)a5;
- (BOOL)hasSecureElementPassesOfType:(long long)a0;
- (BOOL)iPadSupportsPasses;
- (id)imageSetForUniqueID:(id)a0 ofType:(long long)a1 displayProfile:(id)a2 suffix:(id)a3;
- (id)inAppPaymentPassesForPaymentRequest:(id)a0;
- (id)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)a0 issuerCountryCodes:(id)a1 isMultiTokensRequest:(BOOL)a2;
- (id)inAppPrivateLabelPaymentPassesForWebDomain:(id)a0 issuerCountryCodes:(id)a1 isMultiTokensRequest:(BOOL)a2;
- (id)initWithMachServiceName:(id)a0 resumeNotificationName:(id)a1 interfaceType:(unsigned long long)a2;
- (void)introduceDatabaseIntegrityProblem;
- (void)invalidateVehicleConnectionSessionIdentifier:(id)a0;
- (BOOL)isPassbookVisible;
- (BOOL)isPaymentPassActivationAvailable;
- (BOOL)isRemovingPassesOfType:(unsigned long long)a0;
- (BOOL)isWatchIssuerAppProvisioningSupported;
- (void)issueWalletUserNotificationWithTitle:(id)a0 message:(id)a1 forPassUniqueIdentifier:(id)a2 customActionRoute:(id)a3;
- (void)issuerBindingAuthenticationOccured;
- (void)longTermPrivacyKeyForCredentialGroupIdentifier:(id)a0 reuseExisting:(BOOL)a1 completion:(id /* block */)a2;
- (id)manifestHashForPassWithUniqueID:(id)a0;
- (void)meetsProvisioningRequirements:(id)a0 completion:(id /* block */)a1;
- (BOOL)meetsProvisioningRequirements:(id)a0 missingRequirements:(id *)a1;
- (BOOL)migrateDataWithDidRestoreFromBackup:(BOOL)a0;
- (void)noteACAccountChanged:(id)a0;
- (void)noteAppleAccountChanged:(id)a0;
- (void)noteObjectSharedWithUniqueID:(id)a0;
- (void)notifyPassUsedWithIdentifier:(id)a0 fromSource:(long long)a1;
- (void)openPaymentSetup;
- (void)openPaymentSetupForMerchantIdentifier:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
- (void)passAdded:(id)a0;
- (void)passArchived:(id)a0;
- (id)passForProvisioningCredentialHash:(id)a0;
- (id)passLocalizedStringForKey:(id)a0 uniqueID:(id)a1;
- (void)passRecovered:(id)a0;
- (void)passRemoved:(id)a0;
- (id)passUniqueIDsForAssociatedApplicationIdentifier:(id)a0;
- (void)passUpdated:(id)a0;
- (id)passWithDPANIdentifier:(id)a0;
- (id)passWithFPANIdentifier:(id)a0;
- (id)passWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (id)passWithUniqueID:(id)a0;
- (BOOL)passbookHasBeenDeleted;
- (id)passesOfType:(unsigned long long)a0;
- (id)passesPendingActivation;
- (id)passesWithReaderIdentifier:(id)a0;
- (void)passesWithSearchableTransactions:(id /* block */)a0;
- (void)paymentPassWithAssociatedAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)paymentPassesWithLocallyStoredValue;
- (void)paymentSetupFeaturesForConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)peerPaymentPassUniqueID;
- (void)pendingUserNotificationsWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)postUpgradedPassNotificationForMarket:(id)a0 passUniqueID:(id)a1;
- (void)postUpgradesAvailableNotificationForMarket:(id)a0 passUniqueID:(id)a1;
- (void)prepareForBackupRestoreWithExistingPreferencesData:(id)a0;
- (void)prepareForBackupRestoreWithSafeHavenPath:(id)a0;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)a0 fromSource:(long long)a1 completion:(id /* block */)a2;
- (void)presentIssuerBindingFlowForIssuerData:(id)a0 signature:(id)a1 orientation:(id)a2;
- (void)presentPaymentPass:(id)a0;
- (void)presentPaymentSetupRequest:(id)a0 orientation:(id)a1 completion:(id /* block */)a2;
- (void)presentSecureElementPass:(id)a0;
- (void)presentWalletWithRelevantPassUniqueID:(id)a0;
- (void)provisionHomeKeyPassForSerialNumbers:(id)a0 completionHandler:(id /* block */)a1;
- (void)pushProvisioningNoncesWithCredentialCount:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)recomputeRelevantPassesWithSearchMode:(long long)a0;
- (void)recoverPassWithUniqueID:(id)a0;
- (id)remotePaymentPasses;
- (void)remoteService:(id)a0 didEstablishConnection:(id)a1;
- (void)remoteService:(id)a0 didInterruptConnection:(id)a1;
- (void)removeAllScheduledActivities;
- (void)removePass:(id)a0;
- (void)removePassWithUniqueID:(id)a0 diagnosticReason:(id)a1;
- (void)removePasses:(id)a0;
- (void)removePassesOfType:(unsigned long long)a0 withDiagnosticReason:(id)a1;
- (void)removePassesOfType:(unsigned long long)a0 withDiagnosticReason:(id)a1 completion:(id /* block */)a2;
- (void)removePassesWithUniqueIDs:(id)a0 diagnosticReason:(id)a1;
- (BOOL)replacePassWithPass:(id)a0;
- (void)replaceUnsignedPassAtURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestIssuerBoundPassesWithBindingWithData:(id)a0 automaticallyProvision:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)requestPersonalizationOfPassWithUniqueIdentifier:(id)a0 contact:(id)a1 personalizationToken:(id)a2 requiredPersonalizationFields:(unsigned long long)a3 personalizationSource:(unsigned long long)a4 handler:(id /* block */)a5;
- (void)requestUpdateOfObjectWithUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)rescheduleCommutePlanRenewalReminderForPassWithUniqueID:(id)a0;
- (BOOL)resetApplePayWithDiagnosticReason:(id)a0;
- (void)resetApplePayWithDiagnosticReason:(id)a0 completion:(id /* block */)a1;
- (BOOL)resetSettingsForPass:(id)a0;
- (BOOL)sendRKEPassThroughMessage:(id)a0 forSessionIdentifier:(id)a1 error:(id *)a2;
- (void)sendUserEditedCatalog:(id)a0;
- (void)serviceProviderDataForSecureElementPass:(id)a0 completion:(id /* block */)a1;
- (BOOL)setAutomaticPresentationEnabled:(BOOL)a0 forPass:(id)a1;
- (BOOL)setAutomaticUpdatesEnabled:(BOOL)a0 forPass:(id)a1;
- (void)setBackupMetadata:(id)a0;
- (unsigned long long)setLiveRenderingEnabled:(BOOL)a0 forPassUniqueID:(id)a1;
- (BOOL)setNotificationServiceUpdatesEnabled:(BOOL)a0 forPass:(id)a1;
- (BOOL)setShowInLockScreenEnabled:(BOOL)a0 forPass:(id)a1;
- (void)setSortingState:(long long)a0 forObjectWithUniqueID:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)setSuppressNotificationsEnabled:(BOOL)a0 forPass:(id)a1;
- (BOOL)setSuppressPromotionsEnabled:(BOOL)a0 forPass:(id)a1;
- (void)shuffleGroups:(int)a0;
- (void)signData:(id)a0 signatureEntanglementMode:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)signData:(id)a0 withSecureElementPass:(id)a1 completion:(id /* block */)a2;
- (void)signWithFidoKeyForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 fidoKeyHash:(id)a2 challenge:(id)a3 publicKeyIdentifier:(id)a4 externalizedAuth:(id)a5 completion:(id /* block */)a6;
- (void)sortedTransitPassesForAppletDataFormat:(id)a0 completion:(id /* block */)a1;
- (void)sortedTransitPassesForTransitNetworkIdentifiersWithCompletion:(id /* block */)a0;
- (void)spotlightReindexAllContentWithAcknowledgement:(id /* block */)a0;
- (void)spotlightReindexContentWithIdentifiers:(id)a0 acknowledgement:(id /* block */)a1;
- (void)spotlightResetWithCompletion:(id /* block */)a0;
- (void)spotlightStatusWithCompletion:(id /* block */)a0;
- (void)startVehicleConnectionSessionWithPassUniqueIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)supportsSearchForPassUniqueID:(id)a0;
- (void)unexpiredPassesOrderedByGroup:(id /* block */)a0;
- (void)updateDate:(id)a0 forPendingNotificationWithIdentifier:(id)a1;
- (void)updateIngestedDate:(id)a0 forPassWithUniqueID:(id)a1;
- (void)updateSettings:(unsigned long long)a0 forObjectWithUniqueID:(id)a1;
- (void)vehicleConnectionDidRecievePassthroughData:(id)a0;
- (void)vehicleConnectionDidUpdateConnectionState:(long long)a0;

@end
