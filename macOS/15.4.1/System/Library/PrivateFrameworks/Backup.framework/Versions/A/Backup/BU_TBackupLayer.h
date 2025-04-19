@class CALayer, CABackdropLayer;

@interface BU_TBackupLayer : CALayer {
    unsigned long long fIndex;
    BOOL fSnapshotImageRequested;
    struct shared_ptr<TTimeMachineTarget> { struct TTimeMachineTarget *__ptr_; struct __shared_weak_count *__cntrl_; } fTarget;
    CABackdropLayer *_backdropLayer;
    CALayer *_effectLayer;
}

@property (retain, nonatomic) CABackdropLayer *backdropLayer;
@property (retain, nonatomic) CALayer *effectLayer;
@property (nonatomic) BOOL configuredForInvalid;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)removeAnimationForKey:(id)a0;
- (BOOL)showAsValidTarget;

@end
