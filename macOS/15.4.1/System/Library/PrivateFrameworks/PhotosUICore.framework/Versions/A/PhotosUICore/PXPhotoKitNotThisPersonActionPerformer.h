@interface PXPhotoKitNotThisPersonActionPerformer : PXPhotoKitAssetActionPerformer

@property (nonatomic) BOOL didPresentNamingViewController;

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (id)_assetsForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (BOOL)isActionDestructive;
+ (id)test_assetsForActionManager:(id)a0;

- (void)performBackgroundTask;

@end
