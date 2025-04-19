@interface PXPhotoKitTrashNoConfirmAssetActionPerformer : PXPhotoKitTrashAssetActionPerformer

- (long long)destructivePhotosAction;
- (BOOL)shouldSkipUserConfirmation;

@end
