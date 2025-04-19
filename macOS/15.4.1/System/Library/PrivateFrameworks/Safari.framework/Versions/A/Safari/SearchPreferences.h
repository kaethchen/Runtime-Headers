@class NSTextField, NSGridView, WebsiteSpecificSearchEditor, NSPopUpButton, NSButton;

@interface SearchPreferences : PreferencesModule

@property (retain, nonatomic) WebsiteSpecificSearchEditor *websiteSpecificSearchEditor;
@property (weak, nonatomic) NSGridView *contentGridView;
@property (weak, nonatomic) NSPopUpButton *defaultSearchEnginePopUpButton;
@property (weak, nonatomic) NSButton *searchSuggestionsCheckbox;
@property (weak, nonatomic) NSButton *enableParsecCheckbox;
@property (weak, nonatomic) NSButton *showStartPageCheckbox;
@property (weak, nonatomic) NSTextField *searchEngineLabel;
@property (weak, nonatomic) NSTextField *smartSearchFieldLabel;
@property (weak, nonatomic) NSButton *privateSearchEngineUsesNormalSearchEngineToggle;
@property (weak, nonatomic) NSPopUpButton *privateSearchEnginePopUpButton;
@property (retain, nonatomic) NSTextField *searchSuggestionText;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)initializeFromDefaults;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (void)_updateDefaultPrivateSearchEngineUseNormalSearchEngineToggleValue;
- (void)_updateDefaultSearchEngineForPopupButton:(id)a0;
- (void)_updateDefaultSearchEngineMenu;
- (void)_updateParsecCheckboxState;
- (void)_updateSearchSuggestionTextIfNecessary;
- (void)_updateSuppressSearchSuggestionsPreference;
- (void)changeDefaultSearchEngine:(id)a0;
- (void)didToggleUsingNormalBrowsingSearchEngineInPriavteBrowsing:(id)a0;
- (id)safariHelpAnchor;
- (void)setPrivateSearchEngineTo:(id)a0;
- (void)suppressSearchSuggestionsPreferenceDidChange:(id)a0;
- (void)toggleParsecEnabled:(id)a0;

@end
