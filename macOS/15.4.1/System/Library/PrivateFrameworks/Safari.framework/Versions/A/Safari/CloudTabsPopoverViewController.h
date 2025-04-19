@class NSTextField, NSOutlineView, NSScrollView, NSString, NSArray, WBSFaviconRequestsController, NSLayoutConstraint, NSImageView, BrowserWindowController;
@protocol WBSCloudTabDeviceProvider;

@interface CloudTabsPopoverViewController : NSViewController <AccessibleRolloverActionButtonTableCellViewDelegate, CloudTabsPopoverOutlineViewDelegate, NSOutlineViewDataSource, NSPopoverDelegate, RolloverActionButtonTableCellViewDelegate, WBTabGroupManagerObserver> {
    NSLayoutConstraint *_rootViewHeightConstraint;
    NSArray *_cloudTabDevices;
    BOOL _shouldReloadLegacyCloudTabDevicesAndTableWhenViewAppears;
    WBSFaviconRequestsController *_requestsController;
    id<WBSCloudTabDeviceProvider> _cloudTabStore;
    NSString *_profileIdentifier;
}

@property (class, readonly) CloudTabsPopoverViewController *sharedCloudTabsPopoverViewController;

@property (weak) NSTextField *titleLabel;
@property (weak) NSImageView *iCloudImageView;
@property (weak) NSTextField *emptyTabsLabel;
@property (weak) NSScrollView *scrollView;
@property (weak) NSOutlineView *outlineView;
@property (weak) NSLayoutConstraint *scrollViewHeightConstraint;
@property (weak) NSLayoutConstraint *scrollViewMinimumHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewBottomSpaceConstraint;
@property (retain, nonatomic) NSLayoutConstraint *emptyTabLabelBottomSpaceConstraint;
@property (retain, nonatomic) BrowserWindowController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)outlineView:(id)a0 shouldCollapseItem:(id)a1;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (double)outlineView:(id)a0 heightOfRowByItem:(id)a1;
- (BOOL)outlineView:(id)a0 isGroupItem:(id)a1;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (id)outlineView:(id)a0 rowViewForItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldShowOutlineCellForItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)tableViewAction:(id)a0;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (BOOL)_isShowingTabsForNamedProfile;
- (void)_legacyCloudTabDevicesDidChange:(id)a0;
- (void)_loadCloudTabDevices;
- (double)_maxHeightForPopover;
- (double)_minimumScrollViewHeight;
- (void)_reloadCloudTabDevicesAndTable;
- (void)_updatePopoverViewsVisibility;
- (id)accessibilityGetDescriptionForAccessibleRolloverActionButtonTableCellView:(id)a0;
- (void)accessibilityPerformPressActionForAccessibleRolloverActionButtonTableCellView:(id)a0;
- (void)actionButtonClickedInTableCellView:(id)a0;
- (BOOL)cloudTabsPopoverOutlineView:(id)a0 handleKeyDown:(id)a1;
- (BOOL)goToCloudTabAtRow:(long long)a0;
- (void)tabGroupManager:(id)a0 didUpdateTabGroupWithUUID:(id)a1;

@end
