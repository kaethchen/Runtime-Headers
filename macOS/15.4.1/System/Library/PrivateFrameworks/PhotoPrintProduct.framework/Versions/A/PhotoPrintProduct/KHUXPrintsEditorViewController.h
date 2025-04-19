@class UXBarButtonItem, KHPrintsProjectBundleController, KHEditorTitleView, NSMenu, KHUXProjectSubgroupsViewController, KHProductSubgroupMenuController, KHProjectSubgroupLayoutsDataSource, NSMenuItem, NSSet, NSString, UXLabel, NSMutableSet, KHUXPrintsCollectionViewController, NSArray, NSWindow, KHBarPopupButtonItem;

@interface KHUXPrintsEditorViewController : KHSplitViewController <NSMenuDelegate> {
    KHBarPopupButtonItem *_actionButtonItem;
    UXBarButtonItem *_inspectorButtonItem;
    NSWindow *_sheetWindow;
    NSMenu *_toolbarActionMenu;
    NSMenuItem *_toolbarActionMenuPhotoCountItem;
    NSMenu *_layoutsActionMenu;
    NSMutableSet *_observers;
}

@property (readonly, nonatomic) UXBarButtonItem *buyButtonItem;
@property (readonly, nonatomic) UXBarButtonItem *cancelButtonItem;
@property (readonly, nonatomic) UXBarButtonItem *payloadButtonItem;
@property (readonly, nonatomic) KHBarPopupButtonItem *actionButtonItem;
@property (readonly, nonatomic) UXBarButtonItem *inspectorButtonItem;
@property (readonly, nonatomic) NSArray *printsToolbarItems;
@property (readonly, nonatomic) KHEditorTitleView *titleView;
@property (readonly, nonatomic) UXLabel *titleItemLabel;
@property (readonly, nonatomic) UXLabel *detailItemLabel;
@property (readonly, nonatomic) KHUXProjectSubgroupsViewController *masterViewController;
@property (readonly, nonatomic) KHUXPrintsCollectionViewController *detailViewController;
@property (readonly, nonatomic) KHProductSubgroupMenuController *collectionAddSizeMenuController;
@property (readonly, nonatomic) KHProductSubgroupMenuController *collectionChangeSizeMenuController;
@property (readonly, nonatomic) NSMenu *layoutsActionMenu;
@property (readonly, nonatomic) KHProductSubgroupMenuController *layoutsAddSizeMenuController;
@property (readonly, nonatomic) KHProductSubgroupMenuController *layoutsChangeSizeMenuController;
@property (readonly, nonatomic) KHProjectSubgroupLayoutsDataSource *currentDetailDataSource;
@property (readonly, nonatomic) unsigned long long editingDisplayState;
@property (nonatomic) BOOL didShowAlertAboutCroppedPhotos;
@property BOOL prefetchAllowed;
@property (readonly, nonatomic) KHPrintsProjectBundleController *projectBundleController;
@property (readonly, nonatomic) NSSet *usedPhotos;
@property (copy, nonatomic) id /* block */ addPhotosRequestHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preparePrintsEditorModalForWindow:(id)a0 completion:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (void)toggleInspector:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)setViewControllers:(id)a0;
- (void)showInspector:(id)a0;
- (void)updateDisplayState;
- (void)updateTitleLabel;
- (id)preferredFirstResponder;
- (long long)preferredToolbarPosition;
- (void)addPhotoLayoutsToProductSubgroup:(id)a0;
- (void)addPhotos:(id)a0;
- (void)addPhotos:(id)a0 toProductSubgroup:(id)a1;
- (void)addPhotosRequest:(id)a0;
- (void)buy:(id)a0;
- (void)changeCollectionBorder:(id)a0;
- (void)changeCollectionFinish:(id)a0;
- (void)changePhotoLayoutsToProductSubgroup:(id)a0;
- (void)dismissCheckoutViewControllerForSuccess:(BOOL)a0;
- (void)dismissForSuccess:(BOOL)a0;
- (id)initWithProjectBundleController:(id)a0;
- (void)payload:(id)a0;
- (void)removePhotoLayouts:(id)a0 confirm:(BOOL)a1;
- (void)removePhotoLayoutsWithConfirmation:(id)a0;
- (void)removePhotoLayoutsWithoutConfirmation:(id)a0;
- (void)selectFrameWithContentIssueOfType:(unsigned long long)a0 inSubgroup:(id)a1;
- (void)showAlertWithError:(id)a0 buttonTitles:(id)a1 completionBlock:(id /* block */)a2;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 buttonTitles:(id)a2 completionBlock:(id /* block */)a3;
- (void)showCheckoutViewController:(id)a0;
- (void)showCheckoutViewControllerIfAuthorized;
- (void)updateDetailLabels;
- (void)updateDetailViewController;
- (void)updateMenuControllers;

@end
