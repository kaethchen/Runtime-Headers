@class AMSNetworkDeviceOutlineView, AMSNetworkInfoView, NSPopUpButton, NSScrollView, NSMutableArray, NSWindowController, NSString, NSSearchField, NSTimer, NSMutableSet, NSArray, NSView, NSTextField;

@interface CANetworkBrowserImpl : NSObject <NSOutlineViewDataSource, NSWindowDelegate> {
    NSWindowController *controller;
    NSScrollView *outlineScrollView;
    AMSNetworkDeviceOutlineView *outlineView;
    AMSNetworkInfoView *infoView;
    NSTextField *noDevicesLabel;
    NSView *noAVBView;
    NSSearchField *searchField;
    NSPopUpButton *sortPopup;
    NSMutableSet *_boxAudioIDSet;
    NSMutableSet *_boxObjects;
    NSArray *_dataSource;
    NSArray *_filteredDataSource;
    NSString *sortKey;
    NSMutableArray *expandedItems;
    BOOL _avbEnabled;
    NSTimer *avbEnabledTimer;
    BOOL cleanedUp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cleanup;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isGroupItem:(id)a1;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)outlineViewSelectionDidChange:(id)a0;
- (void)windowDidLoad;
- (void)changeSortItem:(id)a0;
- (void)editDeviceName:(id)a0;
- (void)identifyDevice:(id)a0;
- (void)sizeTableToFit:(id)a0;
- (void)acquireDevice:(id)a0;
- (void)addObserverForBox:(id)a0;
- (void)createFilteredItemList;
- (void)errorTimerComplete:(id)a0;
- (id)getBoxList;
- (void)getHelpAction:(id)a0;
- (id)getSortedItemList;
- (void)identifyTimerComplete:(id)a0;
- (BOOL)isAVBEnabled;
- (void)itemCollapseStateChanged:(id)a0;
- (void)openAVBAudioConfiguration:(id)a0;
- (void)openNetworkControlPanel:(id)a0;
- (void)ownedWindowClosing:(id)a0;
- (void)refreshAVBEnabledState:(id)a0;
- (void)removeObserverForBox:(id)a0;
- (BOOL)shouldShowBox:(id)a0;
- (void)showAcquireErrorAlert:(id)a0 deviceName:(id)a1;
- (void)simulateRemoteIdentify:(id)a0;
- (int)systemObjectPropertyChanged:(unsigned int)a0 property:(unsigned int)a1;
- (void)updateExpansionState;
- (void)updateFilter:(id)a0;
- (void)updateViewEnabledState;

@end
