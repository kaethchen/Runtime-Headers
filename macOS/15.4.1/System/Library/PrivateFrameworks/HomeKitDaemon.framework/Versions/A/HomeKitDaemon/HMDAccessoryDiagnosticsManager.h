@class HMDAccessoryDiagnosticsSettings, NSString, HMDHAPAccessory, HMDService;

@interface HMDAccessoryDiagnosticsManager : HMDAccessoryDiagnosticsManagerInternal <HMDNetworkRouterFirewallRuleManagerClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) HMDService *diagnosticsService;
@property (retain) HMDAccessoryDiagnosticsSettings *diagnosticsSettings;
@property BOOL didShutDown;
@property BOOL cloudFetchInProgress;
@property BOOL cloudFetchCompleted;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)_start;
- (void)shutDown;
- (id)attributeDescriptions;
- (void)_readDiagnosticsDataWithCloudKitMetadataRequirement:(BOOL)a0 completion:(id /* block */)a1;
- (void)__fetchCloudDiagnosticsMetadataForAccessory:(id)a0 completion:(id /* block */)a1;
- (void)_callCompletionHandler:(id /* block */)a0 diagnostics:(id)a1 error:(id)a2;
- (void)_clearCurrentDiagnosticsSession:(id)a0;
- (void)_fetchCloudDiagnosticsMetadata;
- (void)_fetchModelDiagnosticsMetadataForAccessory:(id)a0 withCompletion:(id /* block */)a1;
- (void)_handleDiagnosticsTransferRequestWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)_handleDiagnosticsTransferWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)_invalidateCloudDiagnosticsMetadata;
- (BOOL)_isRequestSupported:(id)a0;
- (void)_notifyClientsOfDiagnosticsTransferSupportUpdated;
- (void)_readRequiredDiagnosticCharacteristicsIfNeededWithCompletion:(id /* block */)a0;
- (void)_registerForMessagesAndNotifications;
- (void)_shutDown;
- (void)_updateDiagnosticSettings;
- (void)handleAccessoryConfiguredNotification:(id)a0;
- (void)handleCharacteristicValueUpdatedNotification:(id)a0;
- (void)handleCharacteristicsUpdatedNotification:(id)a0;
- (void)handleDiagnosticsTransferWithOptions:(id)a0 message:(id)a1;
- (id)initWithAccessory:(id)a0 service:(id)a1;
- (id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)a0;

@end
