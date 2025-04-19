@class NSString, NSViewController;

@interface PXPhotoKitAssetCollectionPickerActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PHPickerViewControllerDelegate> {
    NSViewController *_pickerController;
    BOOL _pickerDidFinishPicking;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void).cxx_destruct;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)performUserInteractionTask;
- (void)_addAssets:(id)a0 toUserAlbum:(id)a1;
- (void)_dismissPickerControllerAndCompleteTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_handlePickedAssets:(id)a0;

@end
