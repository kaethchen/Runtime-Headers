@class NSObject, NSString, HMDCameraStreamSessionID;
@protocol OS_dispatch_queue, HMDCameraRemoteStreamProtocol;

@interface HMDStreamInterface : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy) id /* block */ socketCloseHandler;
@property (readonly) HMDCameraStreamSessionID *sessionID;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) id<HMDCameraRemoteStreamProtocol> sessionHandler;
@property (readonly, nonatomic) int localRTPSocket;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)extractNetworkConfig:(int)a0 peerNameExtractor:(void /* function */ *)a1;
+ (int)openSocketWithNetworkConfig:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)logIdentifier;
- (BOOL)loadMiscFields:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 sessionHandler:(id)a2 localRTPSocket:(int)a3;
- (void)setStreamInterfaceState:(unsigned long long)a0;

@end
