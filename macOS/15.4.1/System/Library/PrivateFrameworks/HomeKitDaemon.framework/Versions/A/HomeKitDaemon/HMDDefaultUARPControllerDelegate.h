@class NSString, HMDAccessoryFirmwareUpdateManager;

@interface HMDDefaultUARPControllerDelegate : HMFObject <HMFLogging, UARPControllerDelegateProtocol>

@property (readonly, weak) HMDAccessoryFirmwareUpdateManager *accessoryFirmwareUpdateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)assetAvailablityUpdateForAccessory:(id)a0 assetID:(id)a1;
- (void)assetSolicitationComplete:(id)a0 assetID:(id)a1 withStatus:(unsigned long long)a2;
- (void)assetSolicitationProgress:(id)a0 assetID:(id)a1 bytesReceived:(unsigned long long)a2 bytesTotal:(unsigned long long)a3;
- (void)firmwareStagingComplete:(id)a0 assetID:(id)a1 withStatus:(unsigned long long)a2;
- (void)firmwareStagingProgress:(id)a0 assetID:(id)a1 bytesSent:(unsigned long long)a2 bytesTotal:(unsigned long long)a3;
- (void)firmwareUpdateResult:(id)a0 vendorSpecificStatus:(unsigned int)a1 error:(id)a2;
- (BOOL)sendMessageToAccessory:(id)a0 uarpMsg:(id)a1 error:(id *)a2;
- (void)stagedFirmwareApplicationComplete:(id)a0 withStatus:(unsigned long long)a1;
- (id)initWithAccessoryFirmwareUpdateManager:(id)a0;

@end
