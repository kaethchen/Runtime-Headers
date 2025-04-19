@class UARPController, NSObject;
@protocol OS_os_log;

@interface UARPUploader : NSObject {
    NSObject<OS_os_log> *_xpcLog;
}

@property (readonly, weak) UARPController *controller;

- (id)init;
- (void).cxx_destruct;
- (BOOL)setController:(id)a0;
- (BOOL)accessoryReachable:(id)a0 error:(id *)a1;
- (BOOL)accessoryUnreachable:(id)a0 error:(id *)a1;
- (BOOL)addAccessory:(id)a0 error:(id *)a1;
- (BOOL)applyStagedAssetsForAccessory:(id)a0 error:(id *)a1;
- (BOOL)cancelAssetStagingForAccessory:(id)a0 asset:(id)a1;
- (void)firmwareStagingComplete:(id)a0 assetID:(id)a1 withStatus:(unsigned long long)a2;
- (void)firmwareStagingDataBlockTransferred:(id)a0 assetID:(id)a1 offset:(unsigned int)a2 blockSize:(unsigned int)a3;
- (void)firmwareStagingProgress:(id)a0 assetID:(id)a1 bytesSent:(unsigned long long)a2 bytesTotal:(unsigned long long)a3 filterProgress:(BOOL)a4;
- (BOOL)genericNotification:(id)a0 notificationName:(id)a1 error:(id *)a2;
- (BOOL)offerAssetToAccessory:(id)a0 asset:(id)a1 error:(id *)a2;
- (BOOL)pauseAssetTransfersForAccessory:(id)a0;
- (id)pendingTssRequests;
- (BOOL)recvDataFromAccessory:(id)a0 data:(id)a1 error:(id *)a2;
- (BOOL)removeAccessory:(id)a0 error:(id *)a1;
- (BOOL)rescindStagedAssetsForAccessory:(id)a0 error:(id *)a1;
- (BOOL)resumeAssetTransfersForAccessory:(id)a0;
- (void)stagedFirmwareApplicationComplete:(id)a0 withStatus:(unsigned long long)a1;
- (void)stagedFirmwareRescindComplete:(id)a0 withStatus:(unsigned long long)a1;
- (BOOL)startTapToRadar:(id)a0;
- (void)stopTapToRadar;
- (BOOL)supplementalAssetUpdated:(id)a0 assetName:(id)a1 error:(id *)a2;
- (void)tssResponse:(id)a0;

@end
