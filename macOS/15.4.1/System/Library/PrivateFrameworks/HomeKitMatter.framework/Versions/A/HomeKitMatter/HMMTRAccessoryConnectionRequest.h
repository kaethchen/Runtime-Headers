@class HMMTRFabricConnectionRequest, NSUUID, HMFTimer, NSString, HMMTRAccessoryServer, NSObject, NSMutableArray, NSNumber;
@protocol OS_dispatch_queue;

@interface HMMTRAccessoryConnectionRequest : HMFObject <HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_pendingOperations;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFTimer *idleTimer;
@property (retain, nonatomic) HMFTimer *idleReadTimer;
@property (retain, nonatomic) HMFTimer *idleWriteTimer;
@property (readonly, nonatomic) HMFTimer *lifeTimer;
@property (nonatomic) unsigned long long connectionPriority;
@property (weak, nonatomic) HMMTRFabricConnectionRequest *parentFabricRequest;
@property (weak, nonatomic) HMMTRAccessoryServer *server;
@property (readonly, nonatomic) NSNumber *nodeID;
@property (readonly, nonatomic) NSUUID *fabricUUID;
@property (nonatomic) unsigned char connectionIdleTime;
@property BOOL wedConnectionPending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)privateDescription;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)timerDidFire:(id)a0;
- (void)_restartConnectionIdleTimer:(double)a0;
- (void)updateConnectionIdleTime:(unsigned char)a0;
- (id)_getAllPendingOperations;
- (unsigned long long)_numPendingOperations;
- (double)_getIdleAccessoryConnectionTimeoutWEDShort;
- (double)_getIdleAccessoryConnectionTimeoutWEDShortRead;
- (double)_getIdleAccessoryConnectionTimeoutWEDShortWrite;
- (void)_handleReadWriteTimerDidFire:(id)a0 altTimer:(id)a1;
- (void)_restartReadWriteIdleTimersWithReadInterval:(double)a0 writeInterval:(double)a1;
- (void)abortAllPendingOperations:(id)a0;
- (void)executeAllPendingOperations;
- (BOOL)hasPendingHighPriorityConnectionRequest;
- (id)initWithQueue:(id)a0 server:(id)a1 highPriority:(BOOL)a2 completion:(id /* block */)a3;
- (void)kickIdleTimer;
- (void)mergeAccessoryConnectionRequest:(id)a0;

@end
