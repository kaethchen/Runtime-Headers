@class NSObject, NUComposition, NSDictionary, PHAsset, PICompositionController, PHContentEditingInput;
@protocol OS_dispatch_queue;

@interface PXEditAssetDiagnostics : NSObject

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) PHContentEditingInput *contentEditingInput;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (retain, nonatomic) NSDictionary *diagnosticsPackage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diagnosticsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderQueue;
@property (retain, nonatomic) NUComposition *originalComposition;

- (void).cxx_destruct;
- (id)_renameFileAt:(id)a0 usingPrefix:(id)a1;
- (void)_renderAssetWithCompositionController:(id)a0 attachmentPrefix:(id)a1 scalePolicy:(id)a2 completion:(id /* block */)a3;
- (void)collectDiagnosticsToTTRContainer:(id)a0;
- (void)collectDiagnosticsWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)deleteCollectedFiles;
- (id)initWithAsset:(id)a0 contentEditingInput:(id)a1 compositionController:(id)a2 originalComposition:(id)a3;

@end
