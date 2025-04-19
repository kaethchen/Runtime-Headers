@class NSString;

@interface UINSPrintingController : NSObject {
    BOOL _isShowingPrintOrExportSheet;
    BOOL _isShowingPrintOrExportAppModalDialog;
}

@property (retain, nonatomic) NSString *sceneIdentifier;

+ (id)_currentPrintInfoDictionaryForPrintOperation:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_abortModalPrintOperation;
- (id)_newNSPrintInfoFromUIPrintInfo:(id)a0 isExport:(BOOL)a1;
- (id)_pdfExportOperationWithPrintInfo:(id)a0 andPDFDocumentGenerator:(id /* block */)a1;
- (void)_printOperationDidRun:(id)a0 success:(BOOL)a1 contextInfo:(void *)a2;
- (id)_printOperationWithPrintInfo:(id)a0 andPDFDocumentGenerator:(id /* block */)a1;
- (void)_runModalPrintOperation:(id)a0 withCompletion:(id /* block */)a1;
- (void)_showPanelWithPrintInfo:(id)a0 andPDFDocumentGenerator:(id /* block */)a1 isExport:(BOOL)a2;
- (void)dismissPrintOrExportPanel;
- (void)showExportPanelWithPrintInfo:(id)a0 andPDFDocumentGenerator:(id /* block */)a1;
- (void)showPrintPanelWithPrintInfo:(id)a0 andPDFDocumentGenerator:(id /* block */)a1;

@end
