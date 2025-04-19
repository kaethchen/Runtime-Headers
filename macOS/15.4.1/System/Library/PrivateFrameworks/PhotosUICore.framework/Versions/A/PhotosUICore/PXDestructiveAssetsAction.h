@class PXActionRecord;

@interface PXDestructiveAssetsAction : PXAssetsAction

@property (readonly, nonatomic) PXActionRecord *record;

+ (id)actionWithAssets:(id)a0 record:(id)a1;

- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)initWithAssets:(id)a0;
- (id)initWithAsset:(id)a0 record:(id)a1;
- (id)initWithAssets:(id)a0 record:(id)a1;

@end
