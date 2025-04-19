@class NSUUID, NSString, HMDCameraMediaConfigGenerator, HMDCameraRemoteStreamSession, HMDDevice, HMDCameraResidentMessageHandler, NSDictionary, NSNumber, HMDCameraStreamMetrics;

@interface HMDCameraRemoteStreamControlManager : HMDCameraStreamControlManager <HMDCameraStreamManagerDelegate, HMDCameraIDSSessionReceiverDelegate, HMDCameraIDSDeviceConnectionReceiverDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>

@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly, copy, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (readonly) HMDCameraMediaConfigGenerator *configGenerator;
@property (readonly) HMDDevice *remoteAccessDevice;
@property (retain) HMDCameraRemoteStreamSession *streamSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long audioStreamSetting;
@property (readonly, copy) NSNumber *aspectRatio;
@property (readonly, copy) NSNumber *slotIdentifier;
@property (readonly) HMDCameraStreamMetrics *streamMetrics;
@property (readonly, copy) NSDictionary *stateDump;
@property (readonly, copy) NSNumber *audioDownlinkToken;
@property (readonly, copy) NSNumber *audioUplinkToken;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)updateMaximumVideoResolutionQuality:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_cleanUpStreamSessionWithError:(id)a0;
- (void)_dispatchReconfigureToResident:(id)a0;
- (void)streamManagerDidNetworkImprove:(id)a0;
- (void)negotiateStream;
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)a0 audioSSRC:(id)a1;
- (void)_idsSessionCreatedAndConfigNegotiated;
- (void)_reconfigureStreams;
- (void)_relaySessionStarted:(id)a0;
- (void)_sendStopMessageToResident;
- (void)_sendUpdatedConfiguration;
- (void)_setParametersSelected:(id)a0;
- (void)_streamStarted;
- (void)deviceConnectionReceiver:(id)a0 didEndSessionWithError:(id)a1;
- (void)deviceConnectionReceiver:(id)a0 didSetUpWithError:(id)a1;
- (void)deviceConnectionSender:(id)a0 didEndSessionWithError:(id)a1;
- (void)deviceConnectionSender:(id)a0 didSetUpWithError:(id)a1;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 delegate:(id)a3 accessory:(id)a4 streamManagementService:(id)a5 profileUniqueIdentifier:(id)a6 residentMessageHandler:(id)a7 streamSession:(id)a8;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 reachabilityPath:(unsigned long long)a3 device:(id)a4 delegate:(id)a5 accessory:(id)a6 streamManagementService:(id)a7 remoteCapabilities:(id)a8 profileUniqueIdentifier:(id)a9 residentMessageHandler:(id)a10 remoteAccessDevice:(id)a11 streamPreference:(id)a12;
- (void)reconfigureStream:(id)a0;
- (void)sessionReceiver:(id)a0 didEndSessionWithError:(id)a1;
- (void)sessionReceiver:(id)a0 didSetUpWithError:(id)a1;
- (void)setUpRemoteConnectionWithDevice:(id)a0;
- (void)startStreamWithRemoteSettings:(id)a0;
- (void)stopStreamWithError:(id)a0;
- (void)streamManagerDidNetworkDeteriorate:(id)a0;
- (void)streamManagerDidReceiveFirstFrame:(id)a0;
- (void)streamManagerDidStartRelay:(id)a0;
- (void)streamManagerDidStartStream:(id)a0;
- (void)streamManagerDidStopStream:(id)a0 error:(id)a1;
- (void)streamManagerDidUpdateConfiguration:(id)a0;
- (void)updateAudioSetting:(unsigned long long)a0;
- (void)updateAudioVolume:(id)a0 callback:(id /* block */)a1;

@end
