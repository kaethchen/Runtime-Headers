@class NSString;

@interface PXPhotoKitAssetCollectionCopyInternalURLActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXPhotoKitPersonActionPerformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformOn:(id)a0;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForPerson:(id)a0;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)systemImageNameForPerson:(id)a0;

- (void)performUserInteractionTask;

@end
