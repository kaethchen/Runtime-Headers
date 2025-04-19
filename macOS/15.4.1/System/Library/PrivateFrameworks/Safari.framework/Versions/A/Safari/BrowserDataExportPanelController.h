@class NSTextField, AuthorizationRequest, NSPanel, BrowserDataExportController, NSStackView, NSDictionary, NSPopUpButton, NSLayoutConstraint, NSButton;

@interface BrowserDataExportPanelController : NSWindowController {
    BrowserDataExportController *_browsingDataExportController;
    AuthorizationRequest *_authorizationRequest;
    NSDictionary *_exportDataTypeToggleContainers;
    NSPopUpButton *_profilePopUpButton;
    unsigned long long _exportTypesComputingCountsFor;
}

@property (weak) NSPanel *exportPanel;
@property (weak, nonatomic) NSButton *exportButton;
@property (weak, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) NSStackView *togglesContainer;
@property (weak) NSTextField *exportTitleText;
@property (weak, nonatomic) NSTextField *exportDescriptionText;
@property (weak) NSLayoutConstraint *stackViewBottomSpacingConstraint;

+ (id)showPanelWindow;

- (id)init;
- (void).cxx_destruct;
- (void)close:(id)a0;
- (void)awakeFromNib;
- (id)windowNibName;
- (id)_authenticationMessageText;
- (void)_checkboxToggled:(id)a0;
- (void)_profileToExportFromChanged:(id)a0;
- (void)_setUpPanel;
- (void)_updateCountOfBrowsingDataExportType:(unsigned long long)a0 withCount:(unsigned long long)a1;
- (void)_updateExportButtonEnabled;
- (void)exportClicked:(id)a0;
- (void)openHelpPage:(id)a0;

@end
