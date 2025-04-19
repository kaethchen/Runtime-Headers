@class NSArray, PHCollection;

@interface PXPhotoKitCollectionListCreateCollectionActionPerformer : PXPhotoKitCollectionListActionPerformer

@property (copy, nonatomic) id /* block */ finishedPickingBlock;
@property (retain, nonatomic) PHCollection *createdCollection;
@property (retain, nonatomic) NSArray *preselectedAssets;

+ (BOOL)canPerformOnCollectionList:(id)a0;
+ (id)localizedTitleForActionType:(id)a0 collectionList:(id)a1;
+ (id)systemImageNameForCollectionList:(id)a0 actionType:(id)a1;

- (void).cxx_destruct;
- (void)performUserInteractionTask;

@end
