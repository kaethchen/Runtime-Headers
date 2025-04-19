@class NSDictionary, PHCollectionList;

@interface PXPhotoKitCollectionListActionManager : PXActionManager

@property (readonly, nonatomic) NSDictionary *performerClassByType;
@property (readonly, nonatomic) NSDictionary *collectionListActionTypeByGenericType;
@property (readonly, nonatomic) PHCollectionList *collectionList;

- (void).cxx_destruct;
- (BOOL)canPerformActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (id)contextMenuElementsWithHandler:(id /* block */)a0;
- (id)actionPerformerForActionType:(id)a0 parameters:(id)a1;
- (id)actionTypeForGenericType:(id)a0;
- (id)initWithCollectionList:(id)a0;
- (BOOL)isDestructiveActionType:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (long long)menuActionStateForActionType:(id)a0;
- (id)systemImageNameForActionType:(id)a0;

@end
