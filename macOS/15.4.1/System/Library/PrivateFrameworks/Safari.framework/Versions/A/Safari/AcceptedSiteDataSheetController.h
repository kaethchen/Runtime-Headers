@class NSPopUpButton, NSButton, WBProfile, NSSearchField, NSString, AcceptedSiteDataDescriptionProvider, NSTimer, NSMutableSet, NSArray, NSView, WBSFaviconRequestsController, NSTextField, WBTabGroupManager;

@interface AcceptedSiteDataSheetController : SheetWithTableController <NSTableViewDataSource, NSTableViewDelegate, TrackingDataControllerClient, WBTabGroupManagerObserver> {
    NSSearchField *searchField;
    NSButton *doneButton;
    NSArray *_websiteTrackingData;
    NSArray *_unfilteredWebsiteTrackingData;
    WBSFaviconRequestsController *_requestController;
    NSMutableSet *_selectedDisplayNames;
    struct unique_ptr<Safari::TrackingDataControllerClientObjCAdapter, std::default_delete<Safari::TrackingDataControllerClientObjCAdapter>> { struct __compressed_pair<Safari::TrackingDataControllerClientObjCAdapter *, std::default_delete<Safari::TrackingDataControllerClientObjCAdapter>> { struct TrackingDataControllerClientObjCAdapter *__value_; } __ptr_; } _clientObjCAdapter;
    NSTimer *_updateWebsiteTrackingDataCoalescingTimer;
    NSArray *_latestWebsiteTrackingData;
    AcceptedSiteDataDescriptionProvider *_acceptedSiteDataDescriptionProvider;
    WBTabGroupManager *_tabGroupManager;
    NSPopUpButton *_profileFilterButton;
}

@property (weak, nonatomic) NSTextField *emptyTablePlaceholderText;
@property (weak) NSView *view;
@property (retain, nonatomic) WBProfile *filterByProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileFilterButtonWithAction:(SEL)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)awakeFromNib;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)hideSheet:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)windowDidChangeOcclusionState:(id)a0;
- (void)search:(id)a0;
- (void)reloadTableData;
- (void)removeAllItems:(id)a0;
- (void)_beginWatchingTrackingData;
- (void)_cancelUpdateTrackingDataCoalescingTimer;
- (BOOL)_confirmRemoveAllItems;
- (id)_generateGoupedWebsiteTrackingDataFromTrackingData:(id)a0;
- (void)_profileFilterButtonStateChanged:(id)a0;
- (void)_reloadDataAndRestoreSelection;
- (void)_setupProfileFilterButton;
- (void)_stopWatchingTrackingData;
- (void)_updatePlaceholderTextValueAndVisibility;
- (void)_updateTrackingDataCoalescingTimerFired;
- (void)didUpdateTrackingData:(id)a0;
- (id)filterStringFromSearchField;
- (void)filterTrackingData:(id)a0;
- (void)focusContentSearchField:(id)a0;
- (void)reloadDataAndRestoreSelectedSites;
- (void)removeSelectedItems:(id)a0;
- (void)showSheetInWindow:(id)a0;
- (void)tabGroupManager:(id)a0 didUpdateProfileWithIdentifier:(id)a1 difference:(id)a2;
- (void)tabGroupManagerDidUpdateProfiles:(id)a0;
- (BOOL)validate_focusContentSearchField:(id)a0;

@end
