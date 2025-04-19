@class NSTextField, NSBox, NSView, NSString, NSLayoutConstraint, NSStackView, WBSBrowsingDataImportData;

@interface BrowserDataImportConflictsPanelController : NSWindowController {
    NSString *_successfullyImportedText;
    WBSBrowsingDataImportData *_passwordsConflictData;
    WBSBrowsingDataImportData *_extensionsConflictData;
}

@property (weak, nonatomic) NSStackView *passwordsView;
@property (weak, nonatomic) NSView *extensionsView;
@property (weak, nonatomic) NSStackView *extensionAppLockupViewsStackView;
@property (weak, nonatomic) NSTextField *importTitle;
@property (weak, nonatomic) NSTextField *importDescriptionText;
@property (weak) NSLayoutConstraint *importDescriptionTextTopConstraint;
@property (weak) NSLayoutConstraint *notImportedTextTopConstraint;
@property (weak, nonatomic) NSTextField *passwordsNumberOfItemsFailedToImportLabel;
@property (weak, nonatomic) NSTextField *extensionsNumberOfItemsFailedToImportLabel;
@property (weak) NSBox *magicPocketDividingLine;
@property (weak) NSView *scrollViewContentView;
@property (weak) NSLayoutConstraint *scrollViewMaxHeightConstraint;

- (void)dealloc;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)windowNibName;
- (void)showPanelWindow;
- (void)_extensionWasAdded:(id)a0;
- (void)_setUpPanel;
- (void)doneClicked:(id)a0;
- (id)initWithSuccessText:(id)a0 passwordsConflictData:(id)a1 extensionsConflictData:(id)a2;
- (void)openHelpPage:(id)a0;
- (void)openPasswords:(id)a0;

@end
