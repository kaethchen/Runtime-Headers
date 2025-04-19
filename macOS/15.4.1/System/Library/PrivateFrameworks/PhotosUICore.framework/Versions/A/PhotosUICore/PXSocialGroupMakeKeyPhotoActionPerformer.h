@interface PXSocialGroupMakeKeyPhotoActionPerformer : PXPhotoKitAssetActionPerformer

+ (BOOL)canPerformWithActionManager:(id)a0;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;

- (id)initWithActionType:(id)a0;
- (void)performBackgroundTask;

@end
