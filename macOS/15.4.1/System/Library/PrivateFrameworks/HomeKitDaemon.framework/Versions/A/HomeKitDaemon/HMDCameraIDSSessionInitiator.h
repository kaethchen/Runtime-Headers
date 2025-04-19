@class HMFOSTransaction, AVCPacketRelay, HMDCameraNetworkConfig, NSString, NSNumber, HMDDevice;
@protocol HMDCameraIDSSessionInitiatorDelegate;

@interface HMDCameraIDSSessionInitiator : HMDCameraIDSSessionHandler <AVCPacketRelayDelegate, IDSSessionDelegate, HMDCameraRemoteStreamSenderProtocol>

@property (retain) AVCPacketRelay *packetRelay;
@property (retain) HMFOSTransaction *packetRelayTransaction;
@property (weak) id<HMDCameraIDSSessionInitiatorDelegate> delegate;
@property (readonly, nonatomic) HMDDevice *device;
@property (readonly, nonatomic) HMDCameraNetworkConfig *localNetworkConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *mtu;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)sessionStarted:(id)a0;
- (void)session:(id)a0 receivedInvitationAcceptFromID:(id)a1;
- (void)session:(id)a0 receivedInvitationCancelFromID:(id)a1;
- (void)session:(id)a0 receivedInvitationDeclineFromID:(id)a1;
- (void)sessionEnded:(id)a0 withReason:(unsigned int)a1 error:(id)a2;
- (id)logIdentifier;
- (void)packetRelay:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)packetRelay:(id)a0 didStop:(BOOL)a1 error:(id)a2;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 device:(id)a2 localNetworkConfig:(id)a3 delegate:(id)a4;
- (void)_sendInvitation;
- (void)_callSessionEndedWithError:(id)a0;
- (void)_callSessionStarted;
- (void)_startPacketRelayWithVideoSocket:(int)a0 videoNetworkConfig:(id)a1 cameraVideoSSRC:(unsigned int)a2 audioSocket:(int)a3 audioNetworkConfig:(id)a4 cameraAudioSSRC:(unsigned int)a5;
- (void)openRelaySession;
- (void)startPacketRelayWithVideoSocket:(int)a0 videoNetworkConfig:(id)a1 cameraVideoSSRC:(unsigned int)a2 audioSocket:(int)a3 audioNetworkConfig:(id)a4 cameraAudioSSRC:(unsigned int)a5;

@end
