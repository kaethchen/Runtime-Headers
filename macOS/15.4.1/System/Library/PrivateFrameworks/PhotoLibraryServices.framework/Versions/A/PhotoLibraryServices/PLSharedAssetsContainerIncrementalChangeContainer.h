@class PLSharedAssetsContainerIncrementalChange, PLManagedAsset;

@interface PLSharedAssetsContainerIncrementalChangeContainer : NSObject

@property (readonly, nonatomic) PLManagedAsset *asset;
@property (readonly, nonatomic) PLSharedAssetsContainerIncrementalChange *change;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 change:(id)a1;

@end
