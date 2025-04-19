@class NSTextField, TabsLayoutPreviewButton, NSView, NSArray, NSPopUpButton, NSStackView, NSButton;

@interface TabsPreferences : PreferencesModule {
    NSArray *_finePrintConstraints;
    BOOL _didAwakeFromNib;
    NSStackView *_tabClosingPolicyContainer;
    NSTextField *_tabClosingPolicyLabel;
    NSPopUpButton *_tabClosingPolicyPopUp;
}

@property (weak, nonatomic) NSView *mainContentView;
@property (weak, nonatomic) NSStackView *checkBoxStackView;
@property (weak, nonatomic) NSStackView *tabLayoutPolicyView;
@property (weak, nonatomic) TabsLayoutPreviewButton *compactTabLayoutButton;
@property (weak, nonatomic) TabsLayoutPreviewButton *separateTabLayoutButton;
@property (weak, nonatomic) NSButton *alwaysShowTitlesCheckbox;
@property (weak, nonatomic) NSStackView *tabPopUpButtonStackView;
@property (weak, nonatomic) NSTextField *tabCreationPolicyLabel;
@property (weak, nonatomic) NSPopUpButton *tabCreationPolicyPopUp;
@property (weak, nonatomic) NSButton *commandClickMakesTabsCheckbox;
@property (weak, nonatomic) NSButton *selectNewTabsCheckbox;
@property (weak, nonatomic) NSButton *command1Through9SwitchesTabsCheckbox;
@property (weak, nonatomic) NSView *finePrintContainerView;
@property (weak, nonatomic) NSTextField *commandClickLabel;
@property (weak, nonatomic) NSTextField *commandShiftClickLabel;
@property (weak, nonatomic) NSTextField *commandOptionClickLabel;
@property (weak, nonatomic) NSTextField *commandOptionShiftClickLabel;
@property (weak, nonatomic) NSTextField *openInNewActiveTabLabel;
@property (weak, nonatomic) NSTextField *openInNewTabLabel;
@property (weak, nonatomic) NSTextField *openInNewActiveWindowLabel;
@property (weak, nonatomic) NSTextField *openInNewWindowLabel;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)initializeFromDefaults;
- (id)preferencesNibName;
- (void)updateViews;
- (id)_checkboxWithTitle:(id)a0 action:(SEL)a1;
- (id)_popUpButtonWithMenu:(id)a0 action:(SEL)a1;
- (void)_setupTabLayoutPreference;
- (id)_tabClosingPolicyContainerConstraints;
- (id)_tabPopUpButtonSectionConstraints;
- (void)_updatePopUp:(id)a0 toMatchPreferenceWithKey:(id)a1;
- (void)_updateTabClosingPolicyPopUp;
- (void)_updateTabCreationPolicyPopUp;
- (id)safariHelpAnchor;
- (void)selectTabLayout:(id)a0;
- (void)takeTabClosingPolicyFrom:(id)a0;
- (void)takeTabCreationPolicyFrom:(id)a0;
- (void)toggleCommand1Through9SwitchesTabs:(id)a0;
- (void)toggleCommandClickMakesTabs:(id)a0;
- (void)toggleNarrowTabs:(id)a0;
- (void)toggleSelectNewTabs:(id)a0;

@end
