@interface PXSocialGroupRejectGroupActionPerformer : PXPhotoKitAssetCollectionActionPerformer

@property (class, nonatomic, readonly) BOOL isActionDestructive;

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 displayTitleInfo:(id)a2;
- (void)performBackgroundTask;

@end
