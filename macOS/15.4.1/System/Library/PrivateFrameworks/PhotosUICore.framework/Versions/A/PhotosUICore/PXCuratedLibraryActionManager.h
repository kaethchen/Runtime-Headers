@class NSDictionary, PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionManager : PXActionManager

@property (readonly, weak, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) NSDictionary *actionPerformersByType;
@property (readonly, nonatomic) NSDictionary *assetCollectionActionPerformersByType;
@property (readonly, nonatomic) NSDictionary *constructorSpecificActionPerformersByType;

+ (id)actionsWithActionPerformers;

- (id)init;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (BOOL)canPerformActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0 withAssetCollectionReference:(id)a1;
- (id)actionPerformerForHitTestResult:(id)a0;
- (id)actionPerformerForNavigatingToNextZoomLevelInLayout:(id)a0;
- (id)curationDebugPerformerAssetCollectionReference:(id)a0 diagnosticLayout:(id)a1;
- (id)ellipsisButtonActionPerformerWithAssetCollectionReference:(id)a0;
- (id)ellipsisButtonActionPerformerWithAssetCollectionReferenceProvider:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (id)showAllActionPerformerWithAssetCollectionReference:(id)a0;
- (id)tapToRadarPerformerAssetCollectionReference:(id)a0 diagnosticLayout:(id)a1;

@end
