@class NSString, RBProcessIndex, RBProcessMap, NSObject;
@protocol OS_dispatch_queue;

@interface RBThrottleBestEffortNetworkingManager : NSObject <RBThrottleBestEffortNetworkingManaging, RBStateCapturing> {
    NSObject<OS_dispatch_queue> *_queue;
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    BOOL _throttleBestEffortNetworking;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

- (id)init;
- (void).cxx_destruct;
- (id)captureState;
- (void)addProcess:(id)a0;
- (void)didUpdateProcessStates:(id)a0;
- (BOOL)isThrottleBestEffortNetworkingEnabled;
- (void)removeProcess:(id)a0;

@end
