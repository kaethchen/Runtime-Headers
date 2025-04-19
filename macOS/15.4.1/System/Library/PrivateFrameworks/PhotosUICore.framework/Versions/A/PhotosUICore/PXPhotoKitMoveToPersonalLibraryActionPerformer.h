@protocol PXFastEnumeration;

@interface PXPhotoKitMoveToPersonalLibraryActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) id<PXFastEnumeration> assetsToMove;

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2 socialGroup:(id)a3;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1 socialGroup:(id)a2;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (BOOL)canPresentAlertInBackgroudState;
- (void)_moveAssetsToPersonalLibraryWithCompletionHandler:(id /* block */)a0;
- (void)_presentFailureWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)performBackgroundTask;
- (BOOL)shouldExitSelectModeForState:(unsigned long long)a0;
- (BOOL)shouldShowConfirmation;

@end
