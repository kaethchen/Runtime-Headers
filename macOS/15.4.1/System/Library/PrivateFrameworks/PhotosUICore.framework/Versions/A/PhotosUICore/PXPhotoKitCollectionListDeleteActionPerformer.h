@interface PXPhotoKitCollectionListDeleteActionPerformer : PXPhotoKitCollectionListActionPerformer

+ (BOOL)canPerformOnCollectionList:(id)a0;

- (void)performUserInteractionTask;
- (void)_promptDeleteConfirmationWithCompletionHandler:(id /* block */)a0;

@end
