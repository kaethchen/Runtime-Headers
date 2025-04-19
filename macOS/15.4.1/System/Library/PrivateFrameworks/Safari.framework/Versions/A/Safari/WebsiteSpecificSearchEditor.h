@class NSTextField, NSString, WBSFaviconRequestsController, NSMutableArray;

@interface WebsiteSpecificSearchEditor : SheetWithTableController <TableViewPlusDataSource, TableViewPlusDelegate> {
    NSMutableArray *_websiteHosts;
    BOOL _didAwakeFromNib;
    WBSFaviconRequestsController *_requestController;
}

@property (weak, nonatomic) NSTextField *emptyTablePlaceholderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)reloadTableData;
- (void)removeAllItems:(id)a0;
- (void)_quickWebsiteSearchProvidersDidChange:(id)a0;
- (void)_updateVisibilityOfPlaceholderText;
- (id)_userVisibleHostForHost:(id)a0;
- (void)removeSelectedItems:(id)a0;
- (void)showManageWebsitesSheet:(id)a0;
- (void)showSheetInWindow:(id)a0;

@end
