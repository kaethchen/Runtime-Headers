@class NSString, HMDCameraMediaConfigGenerator, HMDCameraLocalStreamSession, HMDCameraSupportedConfigurationCache, HMDCameraLocalStreamAccessoryCommunicator, NSDictionary, NSNumber, HMDCameraStreamMetrics;

@interface HMDCameraLocalStreamControlManager : HMDCameraStreamControlManager <HMDCameraStreamManagerDelegate, HMDCameraIDSSessionInitiatorDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>

@property (retain) HMDCameraLocalStreamSession *streamSession;
@property (readonly) HMDCameraLocalStreamAccessoryCommunicator *accessoryCommunicator;
@property (readonly) HMDCameraSupportedConfigurationCache *supportedConfigCache;
@property (readonly) HMDCameraMediaConfigGenerator *configGenerator;
@property (readonly, getter=isSendingStream) BOOL sendingStream;
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
- (void)_deregisterForHAPSessionRestore;
- (void)streamManagerDidNetworkImprove:(id)a0;
- (void)negotiateStream;
- (id)_calculateMTU;
- (void)_getSupportedConfigurations;
- (BOOL)_isSetupEndPointConfigurationValid;
- (void)_reconfigureStreams;
- (void)_registerForHAPSessionRestore;
- (void)_sendSetupEndPointReadRequest;
- (void)_sendSetupEndPointWriteRequest;
- (void)_sendUpdatedConfiguration;
- (void)_setupPlaybackParameters;
- (void)_startStreamManager;
- (void)_streamStarted;
- (void)_writeReselectConfig;
- (void)_writeStartConfig;
- (void)_writeStopConfig;
- (void)deviceConnectionSender:(id)a0 didEndSessionWithError:(id)a1;
- (void)deviceConnectionSender:(id)a0 didSetUpWithError:(id)a1;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 delegate:(id)a3 accessory:(id)a4 streamManagementService:(id)a5 supportedConfigCache:(id)a6 streamSession:(id)a7 accessoryCommunicator:(id)a8;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 reachabilityPath:(unsigned long long)a3 device:(id)a4 delegate:(id)a5 accessory:(id)a6 streamManagementService:(id)a7 localNetworkConfig:(id)a8 remoteCapabilities:(id)a9 supportedConfigCache:(id)a10 streamPreference:(id)a11;
- (void)reconfigureStream:(id)a0;
- (void)sessionInitiator:(id)a0 didEndSessionWithError:(id)a1;
- (void)sessionInitiator:(id)a0 didSetUpWithError:(id)a1;
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
