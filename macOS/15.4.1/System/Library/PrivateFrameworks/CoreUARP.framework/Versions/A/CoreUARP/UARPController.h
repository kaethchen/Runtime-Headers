@class UARPPacketDumper, NSString, NSArray, UARPUploader, UARPPowerLogManager, NSMutableDictionary, UARPPersonalizationManager, UARPAnalyticsUpdateFirmwareManager, NSObject, NSCache;
@protocol OS_os_log, UARPControllerInternalDelegate, UARPControllerChipInfoDelegate, OS_dispatch_queue, UARPControllerDelegateProtocol;

@interface UARPController : NSObject <UARPPersonalizationHelperProtocol> {
    NSMutableDictionary *_accessories;
    NSCache *_assetCache;
    NSObject<OS_os_log> *_xpcLog;
    NSObject<OS_os_log> *_controllerLog;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_personalizationQueue;
    UARPUploader *_uploader;
    id<UARPControllerInternalDelegate> _internalDelegate;
    id<UARPControllerChipInfoDelegate> _chipInfoDelegate;
    UARPAnalyticsUpdateFirmwareManager *_updateFirmwareAnalytics;
    UARPPacketDumper *_packetDumper;
    NSMutableDictionary *_assetAvailabilityNotificationTokenDict;
    NSMutableDictionary *_supplementalAssetAvailabilityNotificationTokenDict;
    NSMutableDictionary *_assetAvailabilityUARPProductGroupNotificationTokenDict;
    NSMutableDictionary *_attestationCertificatesAvailabilitySubjectKeyIdentifierNotificationTokenDict;
    NSMutableDictionary *_generalNotificationTokenDict;
    UARPPowerLogManager *_powerLogManager;
    BOOL _isInternalBuild;
    UARPPersonalizationManager *_personalizationManager;
}

@property (readonly) NSArray *accessoryList;
@property (weak) id<UARPControllerDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)accessoryKnown:(id)a0;
- (BOOL)checkForUpdate:(id)a0;
- (BOOL)requestConsent:(id)a0;
- (void)sendMessageToAccessory:(id)a0 uarpMsg:(id)a1;
- (BOOL)accessoryIDKnown:(id)a0;
- (BOOL)accessoryReachable:(id)a0;
- (BOOL)accessoryReachableInternal:(id)a0;
- (void)accessoryTransportNeeded:(id)a0 isNeeded:(BOOL)a1;
- (BOOL)accessoryUnreachable:(id)a0;
- (BOOL)accessoryUnreachableInternal:(id)a0;
- (BOOL)addAccessory:(id)a0 assetID:(id)a1;
- (BOOL)applyFirmwareUpdateOnAccessoryList:(id)a0 withUserIntent:(BOOL)a1;
- (BOOL)applyStagedFirmwareOnAccessoryList:(id)a0 withUserIntent:(BOOL)a1;
- (void)assetAvailabilityNotificationPosted:(int)a0;
- (id)assetAvailabilityTokenForAccessory:(id)a0;
- (void)assetAvailablityUpdateForAccessory:(id)a0 assetID:(id)a1;
- (void)assetAvailablityUpdateForAccessoryID:(id)a0 assetID:(id)a1;
- (void)assetSolicitationComplete:(id)a0 assetID:(id)a1 withStatus:(unsigned long long)a2;
- (void)assetSolicitationProgress:(id)a0 assetID:(id)a1 bytesReceived:(unsigned long long)a2 bytesTotal:(unsigned long long)a3;
- (void)assetStagingPause:(id)a0;
- (void)assetStagingResume:(id)a0;
- (void)availabilityNotificationForAttestationCertificatesPosted:(int)a0;
- (void)availabilityNotificationForSupportedAccessoriesPosted:(int)a0;
- (BOOL)cancelFirmwareStagingForAccessory:(id)a0 assetID:(id)a1;
- (BOOL)cancelFirmwareUpdateOnAccessoryList:(id)a0;
- (BOOL)changeAssetLocation:(id)a0 assetID:(id)a1;
- (id)createSupportedAccessory:(id)a0 accessoryMetadata:(id)a1;
- (BOOL)createUploader;
- (BOOL)disableTRMSystemAuthenticationForRegistryEntryID:(id)a0;
- (BOOL)downloadAvailableFirmwareUpdate:(id)a0 assetID:(id)a1 withUserIntent:(BOOL)a2;
- (BOOL)downloadReleaseNotes:(id)a0 assetID:(id)a1;
- (BOOL)dynamicAssetAvailableForAccessory:(id)a0 assetID:(id)a1 error:(id *)a2;
- (BOOL)enableTRMSystemAuthenticationForRegistryEntryID:(id)a0;
- (void)firmwareStagingComplete:(id)a0 assetID:(id)a1 withStatus:(unsigned long long)a2;
- (void)firmwareStagingDataBlockTransferred:(id)a0 assetID:(id)a1 offset:(unsigned int)a2 blockSize:(unsigned int)a3;
- (void)firmwareStagingProgress:(id)a0 assetID:(id)a1 bytesSent:(unsigned long long)a2 bytesTotal:(unsigned long long)a3 filterProgress:(BOOL)a4;
- (void)firmwareUpdateResult:(id)a0 vendorSpecificStatus:(unsigned int)a1 error:(id)a2;
- (void)genericNotificationPosted:(int)a0;
- (BOOL)getAttestationCertificates:(id)a0 assetLocationType:(long long)a1;
- (BOOL)getAttestationCertificatesInternal:(id)a0 assetID:(id)a1;
- (BOOL)getBatchedSupportedAccessories:(id)a0 assetLocationType:(long long)a1;
- (BOOL)getSupportedAccessories:(id)a0 assetLocationType:(long long)a1;
- (BOOL)getSupportedAccessoriesInternal:(id)a0 assetID:(id)a1 batchRequest:(BOOL)a2;
- (void)handleReceivedAttestationCertificates:(id)a0 forSubjectKeyIdentifier:(id)a1;
- (void)manifestPropertiesReceivedForAccessory:(id)a0 assetTag:(unsigned int)a1 properties:(id)a2;
- (BOOL)pauseAssetTransfersForAccessory:(id)a0;
- (id)pendingAssetForAccessory:(id)a0 assetID:(id)a1;
- (id)pendingTatsuRequests;
- (id)personalizationHelperQueryPendingTssRequests:(id)a0;
- (void)personalizationHelperTssResponse:(id)a0 updaterName:(id)a1;
- (void)personalizationResponseForAccessoryID:(id)a0 response:(id)a1 error:(id)a2;
- (BOOL)personalizationVectorForAccessory:(id)a0 assetTag:(unsigned int)a1 outVector:(unsigned int *)a2;
- (void)progressForUARPConsent:(id)a0 bytesSent:(unsigned long long)a1 bytesTotal:(unsigned long long)a2;
- (void)progressForUARPConsentInPostLogout:(id)a0 bytesSent:(unsigned long long)a1 bytesTotal:(unsigned long long)a2;
- (void)queryCompleteForAccessory:(id)a0 appleModelNumber:(id)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 boardID:(unsigned long long)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 chipID:(unsigned long long)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 chipRevision:(unsigned long long)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 ecid:(unsigned long long)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 enableMixMatch:(BOOL)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 epoch:(unsigned long long)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 firmwareVersion:(id)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 friendlyName:(id)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 hardwareVersion:(id)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 hwFusingType:(id)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 liveNonce:(BOOL)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 manifestPrefix:(id)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 manufacturer:(id)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 modelName:(id)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 prefixNeedsLUN:(BOOL)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 productionMode:(unsigned long long)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 securityDomain:(unsigned long long)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 securityMode:(unsigned long long)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 serialNumber:(id)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 stagedFirmwareVersion:(id)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 stats:(id)a1 error:(id)a2;
- (void)queryCompleteForAccessory:(id)a0 suffixNeedsLUN:(BOOL)a1 error:(id)a2;
- (void)queryFirmwareUpdateResultForAccessory:(id)a0;
- (long long)queryProperty:(unsigned long long)a0 forAccessory:(id)a1;
- (long long)queryPropertyInternal:(unsigned long long)a0 forAccessory:(id)a1;
- (BOOL)recvDataFromAccessory:(id)a0 data:(id)a1 error:(id *)a2;
- (BOOL)registerForAssetAvailabilityNotification:(id)a0;
- (BOOL)registerForAttestationCertificatesAvailability:(id)a0;
- (BOOL)registerForGenericNotification:(id)a0 notificationName:(id)a1;
- (BOOL)registerForSupplementalAssetAvailabilityNotification:(id)a0;
- (BOOL)registerForSupportedAccessoriesAvailability:(id)a0;
- (BOOL)removeAccessory:(id)a0;
- (BOOL)rescindStagedFirmwareOnAccessoryList:(id)a0 withUserIntent:(BOOL)a1;
- (BOOL)resumeAssetTransfersForAccessory:(id)a0;
- (BOOL)revokeConsentRequest:(id)a0;
- (void)sendFirmwareUpdateProgressForAccessory:(id)a0 assetID:(id)a1 bytesSent:(unsigned long long)a2 bytesTotal:(unsigned long long)a3;
- (void)sendFirmwareUpdateProgressForUARPConsent:(id)a0 bytesSent:(unsigned long long)a1 bytesTotal:(unsigned long long)a2;
- (void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(id)a0 assetID:(id)a1 params:(id)a2;
- (void)setChipInfoDelegate:(id)a0;
- (void)setPowerLogStagingWindowPeriodSeconds:(unsigned int)a0;
- (BOOL)solicitDynamicAsset:(id)a0 assetID:(id)a1;
- (BOOL)stageFirmwareUpdateOnAccessoryList:(id)a0 withUserIntent:(BOOL)a1;
- (void)stagedFirmwareApplicationComplete:(id)a0 withStatus:(unsigned long long)a1;
- (void)stagedFirmwareRescindComplete:(id)a0 withStatus:(unsigned long long)a1;
- (BOOL)startPacketCapture:(id)a0;
- (void)startPersonalizationHelperService:(id)a0 entitlement:(id)a1;
- (BOOL)startTapToRadar:(id)a0;
- (void)stopPacketCapture;
- (void)stopTapToRadar;
- (void)supplementalAssetAvailabilityNotificationPosted:(int)a0;
- (id)supplementalAssetAvailabilityTokenForAccessory:(id)a0;
- (void)supplementalAssetAvailablityUpdateForAccessory:(id)a0 assetName:(id)a1;
- (void)supplementalAssetAvailablityUpdateForAccessoryID:(id)a0 assetName:(id)a1;
- (void)supportedAccessories:(id)a0 forProductGroup:(id)a1 isComplete:(BOOL)a2;
- (BOOL)triggerUnsolicitedDynamicAsset:(id)a0 assetTag:(id)a1;
- (void)tssResponse:(id)a0;
- (void)unregisterForAllAssetAvailabilityNotifications;
- (void)unregisterForAllAttestationCertificatesAvailabilityNotifications;
- (void)unregisterForAllGenericNotifications;
- (void)unregisterForAllSupplementalAssetAvailabilityNotifications;
- (void)unregisterForAssetAvailabilityNotification:(id)a0;
- (void)unregisterForAttestationCertificatesAvailability:(int)a0;
- (void)unregisterForSupplementalAssetAvailabilityNotification:(id)a0;
- (void)unregisterForSupportedAccessoriesAvailability:(int)a0;
- (id)unsolicitedDynamicAssetOffered:(id)a0 assetID:(id)a1;
- (void)updatePendingAssetsForAccessory:(id)a0 assetID:(id)a1;
- (BOOL)updateProperty:(unsigned long long)a0 value:(id)a1 forAccessory:(id)a2;

@end
