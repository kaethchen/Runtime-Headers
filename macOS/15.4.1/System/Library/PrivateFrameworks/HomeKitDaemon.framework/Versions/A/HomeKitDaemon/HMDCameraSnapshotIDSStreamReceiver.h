@class HMDDevice, HMDSnapshotFile, NSString;
@protocol HMDCameraSnapshotIDSStreamReceiverDelegate;

@interface HMDCameraSnapshotIDSStreamReceiver : HMDCameraSnapshotIDSStream <HMFLogging, IDSServiceDelegate>

@property (readonly) HMDDevice *remoteDevice;
@property (weak) id<HMDCameraSnapshotIDSStreamReceiverDelegate> delegate;
@property (readonly) HMDSnapshotFile *snapshotFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (id)logIdentifier;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 snapshotFile:(id)a2 delegate:(id)a3 remoteDevice:(id)a4;
- (void)_callFileReceivedWithError:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 proxyService:(id)a2 snapshotFile:(id)a3 delegate:(id)a4 remoteDevice:(id)a5;

@end
