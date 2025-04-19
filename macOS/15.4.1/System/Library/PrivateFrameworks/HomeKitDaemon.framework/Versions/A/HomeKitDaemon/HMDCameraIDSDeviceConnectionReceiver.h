@class NSString, IDSSession;
@protocol HMDCameraIDSDeviceConnectionReceiverDelegate;

@interface HMDCameraIDSDeviceConnectionReceiver : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamReceiverSocketProtocol>

@property (weak) id<HMDCameraIDSDeviceConnectionReceiverDelegate> delegate;
@property (readonly, nonatomic) int remoteAudioSocket;
@property (readonly, nonatomic) int remoteVideoSocket;
@property (readonly) IDSSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_callSessionEndedWithError:(id)a0;
- (void)_socketOpenedWithError:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2;
- (void)setUpRemoteConnectionWithDevice:(id)a0;

@end
