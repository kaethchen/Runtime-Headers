@class NSMutableDictionary;

@interface PXFileBackedAssetActionManager : PXAssetActionManager

@property (readonly, nonatomic) NSMutableDictionary *performerClassByType;

- (void).cxx_destruct;
- (BOOL)canPerformActionType:(id)a0;
- (id)_selectionSnapshotForPerformerClass:(Class)a0;
- (id)actionPerformerForActionType:(id)a0;
- (id)initWithSelectionManager:(id)a0;
- (BOOL)supportsActionType:(id)a0;

@end
