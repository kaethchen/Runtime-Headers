@class NSPopUpButton, NSButton, SFPasswordErrorSource, SFEntropyBarView, NSBox, NSProgressIndicator, NSTableView, NSComboBox, NSMatrix, NSSlider, SFPasswordAsstModel, NSView, NSTextField;

@interface SFPasswordAsstController : NSObject {
    NSMatrix *_errorTable;
    SFPasswordAsstModel *_model;
    SFEntropyBarView *_entropyBar;
    NSTextField *_newPassword;
    NSTextField *_verifyPassword;
    NSTextField *_originalPassword;
    NSTextField *_hint;
    SFPasswordErrorSource *_errorSource;
    NSView *_view;
    NSButton *suggestButton;
    NSProgressIndicator *progressIndicator;
    NSSlider *lengthSlider;
    NSPopUpButton *algorithmPopup;
    NSTextField *lengthDisplayField;
    NSComboBox *choicesCombo;
    NSButton *suggestDiscloseButton;
    NSTableView *_tableView;
    int desiredLength;
    int previousDesiredLength;
    int previousAlgorithmIndex;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalWindowFrame;
    BOOL _closingAssistant;
    NSBox *_box;
}

- (void)dealloc;
- (id)init;
- (id)view;
- (void)clear;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (id)model;
- (id)passphrase;
- (void)closing;
- (double)entropy;
- (void)suggestClicked:(id)a0;
- (void)addObserverTextField:(id)a0;
- (void)algorithmPopupChanged:(id)a0;
- (void)choicesComboChanged:(id)a0;
- (void)clearProgressBarToolTip;
- (void)clearVerifyField;
- (int)desiredAlgorithm;
- (id)entryBar;
- (id)initWithNib:(id)a0;
- (id)newPasswordField;
- (void)ourViewWasDisclosed:(id)a0;
- (double)refresh:(id)a0;
- (void)refreshSuggestions;
- (void)removeObserverTextField:(id)a0;
- (void)setNewPasswordField:(id)a0;
- (void)setOriginalPasswordField:(id)a0;
- (void)setPassphraseInfoStrings:(int)a0 :(int)a1 :(double)a2;
- (void)setPasswordFields:(id)a0 verify:(id)a1 original:(id)a2;
- (void)setVerifyPasswordField:(id)a0;
- (void)sliderChanged:(id)a0;
- (void)suggestDiscloseTextClicked:(id)a0;
- (void)updatePasswordField:(id)a0;
- (void)updateProgressBar:(double)a0;

@end
