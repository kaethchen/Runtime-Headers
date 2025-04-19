@interface PXPhotoKitCollectionListMoveOutActionPerformer : PXPhotoKitCollectionListActionPerformer

+ (id)_grandParentOfCollection:(id)a0;
+ (BOOL)canPerformOnCollectionList:(id)a0;
+ (id)localizedTitleForActionType:(id)a0 collectionList:(id)a1;
+ (id)systemImageNameForCollectionList:(id)a0 actionType:(id)a1;

- (void)performUserInteractionTask;
- (void)performBackgroundTask;

@end
