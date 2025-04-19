@class NSTextField, NSString, NSArray, NSSearchField, NSTimer, NSMutableSet, NSButton, NSTableView;

@interface SOCustomizeSRLanguagesWindowController : NSWindowController <NSTabViewDelegate, NSSoundDelegate, NSSpeechSynthesizerDelegate> {
    NSTableView *_selectionTableView;
    NSButton *_okButton;
    NSSearchField *_searchField;
    NSTextField *_selectedDownloadSizeTextField;
    NSTextField *_noResultsFoundTextField;
    NSArray *_allObjects;
    NSArray *_currentlyDisplayedRows;
    NSArray *_networkBasedLocaleIdentifiers;
    NSString *_requiredLocaleIdentifier;
    NSTimer *_downloadStatusUpdateTimer;
    NSMutableSet *_markedForDeletionSet;
    BOOL _supportDownloads;
    BOOL _showOnlyNetworkSupportedItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 isGroupRow:(int)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)searchFieldChanged:(id)a0;
- (void)_propagateCheckboxSelection:(id)a0;
- (void)_propagateDownloadVariantSelection:(id)a0;
- (void)_rebuildList;
- (void)_setRowStatusFieldView:(id)a0 variantPopUpButton:(id)a1 speechItem:(id)a2 isSelected:(BOOL)a3;
- (void)_updateButtonStatesOnlyIfDownloadRequired:(BOOL)a0;
- (void)_updateDisplayUsingFilterString:(id)a0;
- (void)_updateRowDownloadStatus;
- (void)acceptSelection:(id)a0;
- (void)cancelSelection:(id)a0;
- (void)showSheetForWindow:(id)a0 networkSupportedLocaleIdentifiers:(id)a1 requiredLocaleIdentifier:(id)a2 supportDownloads:(BOOL)a3 showOnlyNetworkSupportedItems:(BOOL)a4;

@end
