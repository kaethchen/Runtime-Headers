@interface PXPeopleCustomizeAlbumActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXPhotoKitPersonActionPerformer>

+ (BOOL)canPerformOn:(id)a0;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForPerson:(id)a0;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)systemImageNameForPerson:(id)a0;

- (void)performUserInteractionTask;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 displayTitleInfo:(id)a2;

@end
