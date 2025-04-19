@class NSArray, NSMutableArray;

@interface HDCloudSyncComputedState : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_targets;
}

@property (readonly, copy, nonatomic) NSArray *targets;
@property (readonly, copy, nonatomic) NSArray *pushTargets;
@property (readonly, copy, nonatomic) NSArray *pullTargets;
@property (nonatomic) unsigned long long countOfRebaselineOperations;

- (id)init;
- (void).cxx_destruct;
- (id)detailedDescription;
- (void)replaceTargets:(id)a0;
- (void)addTargets:(id)a0;
- (void)resetTargets;

@end
