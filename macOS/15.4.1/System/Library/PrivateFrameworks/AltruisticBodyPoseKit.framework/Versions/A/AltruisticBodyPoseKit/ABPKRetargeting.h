@class NSUUID;

@interface ABPKRetargeting : NSObject {
    NSUUID *_skeletonIdentifier;
    struct CoreIKSolver { } *_coreIKSolver;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)processData:(id)a0;
- (id)_retargetSkeleton:(id)a0;

@end
