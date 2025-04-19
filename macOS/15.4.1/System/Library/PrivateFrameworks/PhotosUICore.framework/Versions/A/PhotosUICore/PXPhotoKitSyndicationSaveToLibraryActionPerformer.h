@interface PXPhotoKitSyndicationSaveToLibraryActionPerformer : PXPhotoKitAssetActionPerformer

+ (BOOL)canPerformWithActionManager:(id)a0;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;

- (void)performUserInteractionTask;
- (void)performBackgroundTask;

@end
