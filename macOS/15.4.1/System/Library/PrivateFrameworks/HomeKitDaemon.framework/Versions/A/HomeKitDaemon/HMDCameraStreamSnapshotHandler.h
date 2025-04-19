@class NSString, NSMutableDictionary, NSMutableSet, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraStreamSnapshotHandler : HMFObject <HMFLogging, HMDCameraStreamSnapshotCaptureDelegate, HMDCameraGetSnapshotProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_streamSnapshotCaptures;
    NSMutableSet *_retiredStreamSnapshotCaptures;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_serviceInstanceStreamStatus;
    NSHashTable *_delegates;
}

@property (readonly) NSString *logIdentifier;
@property (readonly, getter=isStreamAvailable) BOOL streamAvailable;
@property (readonly, getter=isStreamSetupInProgress) BOOL streamSetupInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)addVideoStreamInterface:(id)a0;
- (void)getSnapshot:(unsigned long long)a0;
- (id)initWithWorkQueue:(id)a0 services:(id)a1 logIdentifier:(id)a2;
- (void)removeVideoStreamInterface:(id)a0;
- (void)setStreamSetupStatusForService:(id)a0 inProgress:(BOOL)a1;
- (void)streamSnapshotCapture:(id)a0 didGetLastSnapshot:(id)a1;
- (void)streamSnapshotCapture:(id)a0 didGetNewSnapshot:(id)a1;

@end
