@class PXSectionedSelectionManager, NSArray, PXSelectionSnapshot, PXSectionedObjectReference;

@interface PXAssetActionManager : PXActionManager

@property (copy, nonatomic) NSArray *excludedContextMenuActionTypes;
@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (retain, nonatomic) PXSectionedObjectReference *objectReference;
@property (readonly, nonatomic) PXSelectionSnapshot *effectiveSelectionSnapshot;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canPerformActionType:(id)a0;
- (BOOL)shouldEnableActionType:(id)a0 onAsset:(id)a1;
- (id)actionPerformerForActionType:(id)a0;
- (void)executeActionForActionType:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithSelectionManager:(id)a0;
- (void)setAdditionalPropertiesFromActionManager:(id)a0;
- (BOOL)canPerformAssetVariationActions;
- (id)contextMenuElementsWithHandler:(id /* block */)a0;
- (void)executeActionForActionType:(id)a0 sender:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithSelectedObjectReference:(id)a0 dataSourceManager:(id)a1;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (void)px_registerAdditionalPerformerClasses;
- (id)systemImageNameForActionType:(id)a0;

@end
