@class HMDAudioStreamInterface, HMDVideoStreamInterface, HMDCameraStreamSessionID, NSString, AVCRemoteVideoClient, HMDCameraStreamSnapshotHandler, NSObject, NSNumber;
@protocol OS_dispatch_queue, HMDCameraStreamManagerDelegate;

@interface HMDCameraStreamManager : HMFObject <AVCRemoteVideoClientDelegate, HMDVideoStreamInterfaceDelegate, HMDAudioStreamInterfaceDelegate, HMFLogging>

@property (readonly) HMDCameraStreamSessionID *sessionID;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) id<HMDCameraStreamManagerDelegate> delegate;
@property (readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (copy) NSNumber *slotIdentifier;
@property (copy) NSNumber *aspectRatio;
@property (retain) AVCRemoteVideoClient *avcRemoteVideo;
@property (readonly) unsigned long long audioStreamSetting;
@property (readonly) HMDVideoStreamInterface *videoStreamInterface;
@property (readonly) HMDAudioStreamInterface *audioStreamInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)remoteVideoClient:(id)a0 remoteVideoAttributesDidChange:(id)a1;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)a0;
- (void)remoteVideoClientDidReceiveLastFrame:(id)a0;
- (void)remoteVideoServerDidDie:(id)a0;
- (void)stopStream;
- (void)_callConfigurationUpdated;
- (void)_callNetworkDeteriorated;
- (void)_callNetworkImproved;
- (void)_callReceivedFirstFrame;
- (void)_callRelayStarted;
- (void)_callStreamStarted;
- (void)_callStreamStoppedWithError:(id)a0;
- (void)audioStream:(id)a0 didPause:(id)a1;
- (void)audioStream:(id)a0 didResume:(id)a1;
- (void)audioStream:(id)a0 didStart:(id)a1;
- (void)audioStream:(id)a0 didStop:(id)a1;
- (id)initWithSessionID:(id)a0 streamSnapshotHandler:(id)a1 workQueue:(id)a2 delegate:(id)a3 localVideoNetworkConfig:(id)a4 localAudioNetworkConfig:(id)a5 sessionHandler:(id)a6;
- (id)initWithSessionID:(id)a0 streamSnapshotHandler:(id)a1 workQueue:(id)a2 delegate:(id)a3 videoStreamInterface:(id)a4 audioStreamInterface:(id)a5;
- (void)startStreamWithVideoConfig:(id)a0 audioConfig:(id)a1;
- (void)updateAudioSetting:(unsigned long long)a0;
- (void)updateAudioVolume:(id)a0 callback:(id /* block */)a1;
- (void)updateReconfigurationMode:(BOOL)a0;
- (void)updateStreamConfiguration:(id)a0;
- (void)videoStream:(id)a0 didStart:(id)a1;
- (void)videoStream:(id)a0 didStop:(id)a1;
- (void)videoStreamDidNetworkDeteriorate:(id)a0;
- (void)videoStreamDidNetworkImprove:(id)a0;
- (void)videoStreamDidUpdateConfiguration:(id)a0;

@end
