@class WBSCoalescedAsynchronousWriter;

@interface WebAppDocumentController : NSDocumentController {
    BOOL _hasRestoredDocuments;
    WBSCoalescedAsynchronousWriter *_documentsStateWriter;
}

+ (id)sharedDocumentController;

- (void).cxx_destruct;
- (void)savePendingChangesBeforeTermination;
- (void)_restoreDocumentFromWindowState:(id)a0 reusingDocument:(id)a1 forTabGroup:(id *)a2 mainWindow:(id *)a3 selectedWindowMapping:(id)a4;
- (void)_updateDocumentsState:(id)a0 withDocument:(id)a1;
- (id)frontmostBrowserDocument;
- (id)frontmostBrowserDocumentPassingTest:(id /* block */)a0;
- (id)goToURL:(id)a0 windowPolicy:(long long)a1 forExtension:(BOOL)a2;
- (void)persistDocumentsSoon;
- (void)restoreDocumentsIfNeeded;

@end
