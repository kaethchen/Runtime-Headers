@class HMFOSTransaction, NSString, NSNumber, HMDVideoStreamReconfigure;
@protocol HMDVideoStreamLastDecodedFrameDelegate, HMDVideoStreamInterfaceDataSource, HMDVideoStreamInterfaceDelegate, HMDAVCVideoStream;

@interface HMDVideoStreamInterface : HMDStreamInterface <HMDAVCVideoStreamDelegate, HMDVideoStreamReconfigureDelegate>

@property (readonly) id<HMDAVCVideoStream> videoStream;
@property (readonly) HMDVideoStreamReconfigure *videoStreamReconfigure;
@property (readonly) id<HMDVideoStreamInterfaceDataSource> dataSource;
@property (retain) HMFOSTransaction *snapshotDataTransaction;
@property (readonly, nonatomic) NSNumber *syncSource;
@property (readonly, nonatomic) NSNumber *streamToken;
@property (weak) id<HMDVideoStreamInterfaceDelegate> delegate;
@property (weak) id<HMDVideoStreamLastDecodedFrameDelegate> snapshotDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (int)_createLocalRTPSocketWithRemoteSender:(id)a0 localNetworkConfig:(id)a1;
+ (id)_createLocalStreamAndRTPSocket:(int *)a0 localNetworkConfig:(id)a1 sessionID:(id)a2;
+ (id)_createStreamWithRemoteDestinationReceiver:(id)a0 sessionID:(id)a1;
+ (id)_createStreamWithRemoteSocketReceiver:(id)a0 sessionID:(id)a1;
+ (id)_createVideoStreamWithSessionHandler:(id)a0 localNetworkConfig:(id)a1 localRTPSocket:(int *)a2 sessionID:(id)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidRTPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;
- (void)streamDidStop:(id)a0;
- (id)logIdentifier;
- (void)stopStream;
- (void)captureSnapshot;
- (void)stream:(id)a0 didGetLastDecodedFrame:(id)a1;
- (void)stream:(id)a0 didUpdateVideoConfiguration:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 downlinkQualityDidChange:(id)a1;
- (void)_callDidGetLastDecodedFrame:(id)a0;
- (void)_callDidUpdateConfiguration;
- (void)_callNetworkDeteriorated;
- (void)_callNetworkImproved;
- (void)_callStarted:(id)a0;
- (void)_callStopped:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 sessionHandler:(id)a3 localNetworkConfig:(id)a4;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 sessionHandler:(id)a3 videoStream:(id)a4 localRTPSocket:(int)a5 videoStreamReconfigure:(id)a6 dataSource:(id)a7;
- (void)startStreamWithConfig:(id)a0;
- (void)updateReconfigurationMode:(BOOL)a0;
- (void)updateStreamConfiguration:(id)a0;
- (void)videoStreamReconfigureDidNetworkDeteriorate:(id)a0;
- (void)videoStreamReconfigureDidNetworkImprove:(id)a0;

@end
