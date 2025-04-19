@class NSBox, NSString, NSFileVersion, NSArray, NSURL, NSOperationQueue, NSSet, NSPanel, _NSDocumentConflictNonTableView, NSButton, NSImageView, NSTableView;

@interface NSDocumentConflictPanelController : NSObject <NSTableViewDataSource, NSTableViewDelegate, QLPreviewPanelDelegate, QLPreviewPanelDataSource, NSFilePresenter> {
    NSPanel *_panel;
    NSTableView *_tableView;
    NSButton *_keepButton;
    NSButton *_cancelButton;
    NSBox *_nonTableViewContainer;
    _NSDocumentConflictNonTableView *_nonTableView;
    NSURL *_url;
    BOOL _documentIsShared;
    NSImageView *_clickedImageView;
    id _clickedConflict;
    BOOL _forceTableView;
    double _fullPanelHeight;
    double _staticHeight;
    NSArray *_conflicts;
}

@property (readonly, copy) NSArray *conflicts;
@property (readonly) NSFileVersion *currentVersion;
@property (readonly) NSArray *selectedVersions;
@property (readonly) NSArray *unselectedVersions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

- (void).cxx_destruct;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)a0;
- (void)presentedItemDidLoseVersion:(id)a0;
- (void)presentedItemDidMoveToURL:(id)a0;
- (void)presentedItemDidResolveConflictVersion:(id)a0;
- (void)cancel:(id)a0;
- (id)_conflictsForURL:(id)a0;
- (double)_desiredHeightOfPanel;
- (void)_didClickOnImageView:(id)a0 forConflict:(id)a1;
- (void)_enumerateAllRowViewsUsingBlock:(id /* block */)a0;
- (id)_keepButtonTitleForNumberOfSelectedVersions:(long long)a0 totalNumber:(long long)a1;
- (id)_makeVersionView;
- (id)_panel;
- (void)_reloadConflictsRefreshingAll:(BOOL)a0;
- (id)_selectedConflicts;
- (void)_selectedConflictsChanged;
- (BOOL)_shouldShowTableView;
- (void)_startLoadingThumbnailForConflict:(id)a0 force:(BOOL)a1;
- (id)_unselectedConflicts;
- (void)_updateButtons;
- (void)_updateConflictDisplay;
- (void)_updateNonTableView;
- (void)_windowBackingDidChange:(id)a0;
- (BOOL)acceptsPreviewPanelControl:(id)a0;
- (void)beginConflictPanelForURL:(id)a0 modalForWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginPreviewPanelControl:(id)a0;
- (void)endPreviewPanelControl:(id)a0;
- (void)keep:(id)a0;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;
- (BOOL)previewPanel:(id)a0 shouldOpenURL:(id)a1 forPreviewItem:(id)a2;
- (BOOL)previewPanel:(id)a0 shouldShowOpenButtonForItem:(id)a1;
- (BOOL)previewPanel:(id)a0 shouldShowShareButtonForItem:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewPanel:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;

@end
