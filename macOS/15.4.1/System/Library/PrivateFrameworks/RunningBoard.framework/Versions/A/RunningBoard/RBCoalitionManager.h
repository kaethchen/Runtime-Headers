@class NSString, NSMutableDictionary, RBProcessMap;
@protocol RBCoalitionKernelAdapting;

@interface RBCoalitionManager : NSObject <RBCoalitionManaging, RBStateCapturing> {
    NSMutableDictionary *_lock_coalitions;
    RBProcessMap *_lock_processes;
    id<RBCoalitionKernelAdapting> _adapter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

- (void).cxx_destruct;
- (id)captureState;
- (id)initWithAdapter:(id)a0;
- (void)addProcess:(id)a0 withState:(id)a1;
- (void)didUpdateProcessStates:(id)a0;
- (void)removeProcess:(id)a0;

@end
