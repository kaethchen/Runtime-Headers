@class NSTextField, NSString, NSArray, NSProgressIndicator, CWDisplayedScanResult, NSScrollView, NSImageView, NSButton, NSTableView;

@interface CWBrowseDialog_SL : NSWindowController <NSCollectionViewDelegate, NSTextFieldDelegate, NSTableViewDataSource, NSTableViewDelegate> {
    BOOL _showingNetworkBrowser;
    long long _prevSelectedRow;
    long long _selectedRow;
    NSImageView *imageView;
    NSTextField *windowTitleLabel;
    NSTextField *windowDescriptionLabel;
    NSButton *okButton;
    NSButton *cancelButton;
    NSTextField *statusMessageLabel;
    NSButton *warningButton;
    NSProgressIndicator *progressIndicator;
    NSTableView *tableView;
    NSScrollView *tableScrollView;
    NSButton *helpButton;
}

@property id delegate;
@property (copy) CWDisplayedScanResult *scanResult;
@property (copy) NSArray *scanResults;
@property (copy) NSArray *updateScanResults;
@property (copy) NSString *customTitle;
@property (copy) NSString *customDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)browseDialogWithScanResults:(id)a0 title:(id)a1 description:(id)a2;

- (void)dealloc;
- (void)close;
- (void)awakeFromNib;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)selectionShouldChangeInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)windowDidLoad;
- (id)localizedStringForKey:(id)a0;
- (void)onCancelButton:(id)a0;
- (id)initWithScanResults:(id)a0 title:(id)a1 description:(id)a2;
- (void)onHelpButton:(id)a0;
- (void)onOKButton:(id)a0;
- (id)prepareScanResults:(id)a0;
- (void)updateScanUI:(BOOL)a0;
- (void)updateWithScanResults:(id)a0;

@end
