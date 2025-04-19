@class NSTextField, NSScrollView, NSWindowController, NSButton, NSTableView, NSMutableArray, NSSegmentedControl;

@interface AirPortOptionsTabView : NSView {
    id _owner;
    NSTextField *_networksTableLabel;
    NSTableView *_networksTable;
    NSScrollView *_networksScrollView;
    NSSegmentedControl *_addRemoveEditButton;
    NSTextField *_networkTableControlLabel;
    NSButton *_alwaysRemember;
    NSButton *_allowLegacyNetworksCheckbox;
    NSButton *_requireAdminPowerToggleCheckbox;
    NSButton *_requireAdminNetworkChangeCheckbox;
    NSTextField *_airportID;
    NSTextField *_airportIDLabel;
}

@property (retain) NSMutableArray *removeNetworks;
@property (retain) NSMutableArray *removeNetworksLocalOnly;
@property (retain) NSMutableArray *preferredNetworks;
@property (retain) NSWindowController *currentDialog;
@property BOOL supportsWPA3Personal;

- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void)awakeFromNib;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 acceptDrop:(id)a1 row:(long long)a2 dropOperation:(unsigned long long)a3;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (unsigned long long)tableView:(id)a0 validateDrop:(id)a1 proposedRow:(long long)a2 proposedDropOperation:(unsigned long long)a3;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (BOOL)tableView:(id)a0 writeRowsWithIndexes:(id)a1 toPasteboard:(id)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (id)localizedStringForKey:(id)a0;
- (void)checkboxAction:(id)a0;
- (void)browseDialogSelectedScanResult:(id)a0;
- (void)__selectedNetwork:(id)a0 interface:(id)a1;
- (void)_customSizeToFitTable;
- (id)_longestLocalizedSecurityTypeString;
- (void)addButtonPressed:(id)a0;
- (void)addProfileDialog:(id)a0 didConfigureEnterpriseProfile:(id)a1 username:(id)a2 password:(id)a3 identity:(id)a4 interface:(id)a5;
- (void)addProfileDialog:(id)a0 didConfigureOpenProfile:(id)a1 interface:(id)a2;
- (void)addProfileDialog:(id)a0 didConfigurePasswordProfile:(id)a1 password:(id)a2 interface:(id)a3;
- (void)addProfileDialogCancelled:(id)a0;
- (void)addProfileDialogSelectedChooseNetwork:(id)a0;
- (void)addRemoveEditButtonPressed:(id)a0;
- (BOOL)allowLegacyNetworks;
- (BOOL)alwaysRemember;
- (void)browseDialogStartScanning:(id)a0;
- (void)browseDialogStopScanning:(id)a0;
- (void)didRefreshService;
- (id)getBundle;
- (void)removeButtonPressed:(id)a0;
- (void)removePreferredNetworksWithIndexSet:(id)a0 selectionIndexSet:(id)a1 requireUserConfirmation:(BOOL)a2 modifierFlags:(unsigned long long)a3;
- (BOOL)requiresAdminNetworkChange;
- (BOOL)requiresAdminPowerToggle;
- (void)setAirPortID:(id)a0;
- (void)setAllowLegacyNetworks:(BOOL)a0;
- (void)setAlwaysRemember:(BOOL)a0;
- (void)setHasUnsavedChanges:(BOOL)a0;
- (void)setRequiresAdminNetworkChange:(BOOL)a0;
- (void)setRequiresAdminPowerToggle:(BOOL)a0;
- (void)showAddDialogWithNetwork:(id)a0;
- (void)showAddDialogWithNetworkProfile:(id)a0;
- (void)showBrowseDialog;
- (void)showDupicateAlertWithEntry:(id)a0;

@end
