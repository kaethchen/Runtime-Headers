@class NSURL, NSString, WBSPageCollectionMetadata, BrowserViewController, WKWebView, NSButton, NSWindow;
@protocol PageCollectionControllerDelegate;

@interface PageCollectionController : NSViewController <NSWindowDelegate> {
    BrowserViewController *_browserViewController;
    NSButton *_additionalQuestionsWindowCaptureDoesNotMatchButton;
    NSButton *_additionalQuestionsWindowCaptureDoesMatchButton;
    NSButton *_additionalQuestionsWindowPopupButton;
    WKWebView *_additionalQuestionsWebView;
    NSURL *_temporarySaveDirectory;
    NSURL *_temporaryDirectory;
    NSURL *_downloadLocationURLWithSecurityScopedAccess;
    WBSPageCollectionMetadata *_collectionMetadata;
}

@property (readonly, nonatomic) NSWindow *additionalQuestionsWindow;
@property (weak, nonatomic) id<PageCollectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)windowWillClose:(id)a0;
- (void)_clickedAdditionalQuestionsWindowCaptureDoesOrDoesNotMatchButton:(id)a0;
- (void)_saveWebpageWithMetadataToURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_saveWebpageWithMetadataToURL:(id)a0 shouldBookmarkURL:(BOOL)a1;
- (void)_selectedFormTypeChanged:(id)a0;
- (void)_showFailedToSaveWebpageWithMetadataAlertWithError:(id)a0;
- (void)_showOpenPanelAndSaveWebpageWithMetadata;
- (void)_showWebViewWithAdditionalQuestionsForURL:(id)a0;
- (id)initWithBrowserViewController:(id)a0;
- (void)saveWebpageWithMetadataPromptingForWorkerIDIfNecessary;

@end
