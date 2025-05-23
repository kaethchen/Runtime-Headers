@class PXPhotoKitDuplicateActionController;

@interface PXPhotoKitDuplicateAssetActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) PXPhotoKitDuplicateActionController *duplicateActionController;
@property (nonatomic) long long action;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageTime;

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;

- (void).cxx_destruct;
- (void)performBackgroundTask;

@end
