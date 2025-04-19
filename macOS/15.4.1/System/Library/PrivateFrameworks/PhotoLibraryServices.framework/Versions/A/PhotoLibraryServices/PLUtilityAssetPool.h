@class NSMutableArray;

@interface PLUtilityAssetPool : NSObject {
    NSMutableArray *_locked_recycledAssets;
    NSMutableArray *_locked_recycledClassifications;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)_dequeueRecylableClassification;
- (id)_dequeueRecylableAsset;
- (void)recycleAsset:(id)a0;

@end
