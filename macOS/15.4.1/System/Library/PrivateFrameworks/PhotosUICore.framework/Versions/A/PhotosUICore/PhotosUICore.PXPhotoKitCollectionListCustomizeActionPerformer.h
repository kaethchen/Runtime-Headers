@interface PhotosUICore.PXPhotoKitCollectionListCustomizeActionPerformer : PXPhotoKitCollectionListActionPerformer

+ (BOOL)canPerformOnCollectionList:(id)a0;
+ (id)localizedTitleForActionType:(id)a0 collectionList:(id)a1;
+ (id)systemImageNameForCollectionList:(id)a0 actionType:(id)a1;

- (void)performUserInteractionTask;
- (id)initWithActionType:(id)a0 collectionList:(id)a1 parameters:(id)a2;

@end
