@class NSArray, NSString, NSSavePanel, NSURL;
@protocol UINSWindow, UINSDocumentBrowserViewControllerDelegate;

@interface UINSDocumentBrowserViewController : NSObject <UINSDocumentBrowserViewController, NSOpenPanelNewDocumentDelegate, NSSavePanelCustomActionDelegate> {
    NSSavePanel *_savePanel;
    BOOL _panelDidCreateNewDocument;
    NSURL *_urlToImport;
    unsigned long long _importMode;
}

@property (weak, nonatomic) id<UINSDocumentBrowserViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *documentTypes;
@property (nonatomic) BOOL allowsDocumentCreation;
@property (nonatomic) BOOL allowsPickingMultipleItems;
@property (copy, nonatomic) NSArray *customActions;
@property (weak, nonatomic) id<UINSWindow> window;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismiss;
- (void)panel:(id)a0 customActionInvoked:(id)a1 onItems:(id)a2;
- (void)panel:(id)a0 shouldCreateNewDocumentAtURL:(id)a1;
- (void)panel:(id)a0 userRequestedCreateNewDocument:(id /* block */)a1;
- (void)presentWithCompletion:(id /* block */)a0;
- (void)importDocumentAtURL:(id)a0 nextToDocumentAtURL:(id)a1 mode:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)presentWithCompletionHandler:(id /* block */)a0;
- (void)propagateCustomActions;
- (void)revealDocumentAtURL:(id)a0 importIfNeeded:(BOOL)a1 completion:(id /* block */)a2;

@end
