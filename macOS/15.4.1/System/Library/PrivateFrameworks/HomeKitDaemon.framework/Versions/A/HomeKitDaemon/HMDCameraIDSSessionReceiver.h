@class HMDCameraIDSSessionInviterDeviceVerifier, NSString, IDSSession;
@protocol HMDCameraIDSSessionReceiverDelegate;

@interface HMDCameraIDSSessionReceiver : HMDCameraIDSSessionHandler <IDSSessionDelegate, HMDCameraRemoteStreamReceiverDestinationProtocol>

@property (readonly, nonatomic) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier;
@property (weak) id<HMDCameraIDSSessionReceiverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *remoteDestination;
@property (readonly) IDSSession *session;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 inviteReceivedForSession:(id)a2 fromID:(id)a3 withContext:(id)a4;
- (void)sessionStarted:(id)a0;
- (void)sessionEnded:(id)a0 withReason:(unsigned int)a1 error:(id)a2;
- (id)logIdentifier;
- (void)_callSessionEndedWithError:(id)a0;
- (void)_callSessionSetup:(id)a0;
- (void)_receivedIDSSession:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 sessionInviterDeviceVerifier:(id)a2 delegate:(id)a3;
- (void)setUpRemoteConnectionWithDevice:(id)a0;

@end
