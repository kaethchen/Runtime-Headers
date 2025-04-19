@class NSMenu, NSString, UXView, KHPrintsProjectBundleController, KHProductSubgroupMenuController, KHLayoutThumbnailManager, KHUXPrintsCollectionViewController, NSTableView;

@interface KHUXProjectSubgroupsViewController : UXViewController <KHLayoutThumbnailManagerDelegate, KHPrintsProjectBundleControllerDelegate, NSTableViewDataSource, NSTableViewDelegate, NSMenuDelegate> {
    NSTableView *_tableView;
    UXView *_separatorView;
    KHProductSubgroupMenuController *_addSizeMenuController;
    KHProductSubgroupMenuController *_changeSizeMenuController;
    id _observer;
}

@property (readonly, nonatomic) KHLayoutThumbnailManager *thumbnailManager;
@property (readonly, nonatomic) NSTableView *tableView;
@property (readonly, nonatomic) NSMenu *actionMenu;
@property (nonatomic) BOOL tableViewUpdating;
@property (readonly, nonatomic) KHPrintsProjectBundleController *projectBundleController;
@property (retain, nonatomic) KHUXPrintsCollectionViewController *detailViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)remove:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (void)updateSelection;
- (void)addToProductSubgroup:(id)a0;
- (void)changeToProductSubgroup:(id)a0;
- (id)initWithProjectBundleController:(id)a0;
- (void)layoutThumbnailManager:(id)a0 didRenderThumbnailForLayout:(id)a1;
- (void)projectBundleController:(id)a0 didChangeProjectSubgroupAtIndex:(id)a1 forChangeType:(unsigned long long)a2;
- (void)projectBundleControllerDidChangeContent:(id)a0;
- (void)projectBundleControllerWillChangeContent:(id)a0;
- (void)updateActionMenuIfNecessary;
- (void)updateCellView:(id)a0 forRow:(long long)a1;
- (void)updateMenuControllers;

@end
