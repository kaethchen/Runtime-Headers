@class CNContactPicker, NSString, NSTableView, NSSet, PXSharedLibraryParticipantSearchField, PXCNAutocompleteResultDataSourceManager, NSButton, PXCNAutocompleteResultDataSource;
@protocol PXSharedLibraryParticipantSearchControllerDelegate;

@interface PXSharedLibraryParticipantSearchController : NSViewController <CNContactPickerDelegate, NSSearchFieldDelegate, NSTableViewDataSource, NSTableViewDelegate, NSTextFieldDelegate, NSTokenFieldDelegate, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXSharedLibraryParticipantSearchCellDisclosureDelegate> {
    PXCNAutocompleteResultDataSourceManager *_dataSourceManager;
    PXCNAutocompleteResultDataSource *_currentDataSource;
    NSTableView *_tableView;
    NSButton *_addButton;
    NSButton *_contactsPickerButton;
    CNContactPicker *_contactPicker;
    PXSharedLibraryParticipantSearchField *_inputField;
    NSSet *_usedParticipantAddresses;
}

@property (weak, nonatomic) id<PXSharedLibraryParticipantSearchControllerDelegate> searchDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)participants;
- (void)cancel:(id)a0;
- (void)add:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)loadView;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewClicked:(id)a0;
- (void)viewDidLoad;
- (void)_clearResults;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPickerDidClose:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)_nontokenizedText;
- (void)_showContactsPicker:(id)a0;
- (void)_updateAddButton;
- (void)cellDidToggleDisclosure:(id)a0;
- (id)initWithUsedParticipantAddresses:(id)a0;

@end
