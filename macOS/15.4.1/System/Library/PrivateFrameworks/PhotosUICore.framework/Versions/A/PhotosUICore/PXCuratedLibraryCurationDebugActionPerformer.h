@class PXGLayout;

@interface PXCuratedLibraryCurationDebugActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

@property (readonly, weak, nonatomic) PXGLayout *layoutForDiagnosticDescription;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0 assetCollectionReference:(id)a1 diagnosticLayout:(id)a2;

@end
