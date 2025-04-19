@class NSArray;

@interface PXPhotoKitUnifiedDestructiveActionPerformer : PXPhotoKitAssetActionPerformer

@property (readonly, nonatomic) NSArray *performerClasses;

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (id)_containedPerformerClasses;
+ (id)_localizedTitleForAsset:(id)a0 titleUseCase:(unsigned long long)a1 key:(id)a2;
+ (id)_localizedTitleForAssets:(id)a0 titleUseCase:(unsigned long long)a1 key:(id)a2;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (BOOL)isActionDestructive;

- (void).cxx_destruct;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)performUserInteractionTask;
- (void)_handleActionPickForPerformerClass:(Class)a0;
- (id)createContainedPerformers;

@end
