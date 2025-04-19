@class PHCollectionList;

@interface PXPhotoKitCollectionListActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PHCollectionList *collectionList;

+ (BOOL)canPerformOnCollectionList:(id)a0;
+ (id)localizedTitleForActionType:(id)a0 collectionList:(id)a1;
+ (long long)menuActionStateForCollectionList:(id)a0 actionType:(id)a1;
+ (id)systemImageNameForCollectionList:(id)a0 actionType:(id)a1;

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 collectionList:(id)a1;
- (id)initWithActionType:(id)a0 collectionList:(id)a1 parameters:(id)a2;

@end
