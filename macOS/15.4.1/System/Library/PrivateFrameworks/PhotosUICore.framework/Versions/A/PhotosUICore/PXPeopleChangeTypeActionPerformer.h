@interface PXPeopleChangeTypeActionPerformer : PXAssetCollectionActionPerformer <PXPhotoKitPersonActionPerformer>

+ (BOOL)canPerformOn:(id)a0;
+ (long long)changeTypeFor:(id)a0;
+ (id)localizedTitleForPerson:(id)a0;
+ (id)systemImageNameForPerson:(id)a0;

- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 displayTitleInfo:(id)a2;
- (void)performBackgroundTask;

@end
