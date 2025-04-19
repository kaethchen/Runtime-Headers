@class NSTextField, TextFieldWithEnforcedPrefixFormatter, NSImage, NSButton, NSObject;
@protocol OS_dispatch_queue;

@interface WebAppGeneralPreferences : PreferencesModule {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSImage *_updatedImage;
    TextFieldWithEnforcedPrefixFormatter *_prefixFormatter;
}

@property (weak) NSTextField *appNameTextField;
@property (weak) NSTextField *appURLTextField;
@property (weak) NSButton *setToCurrentPageButton;
@property (weak) NSButton *appIconButton;
@property (weak) NSButton *showNavigationControlsCheckbox;
@property (weak) NSButton *showColorInTitleBarCheckbox;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)initializeFromDefaults;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (void)_updateDefaults;
- (void)appNameChanged:(id)a0;
- (void)_extensionEnabledStateDidChange:(id)a0;
- (id)_frontmostBrowserDocumentPageURLString;
- (void)_setAccessibilityLabels;
- (void)_updateAppNameAndURLIfNeeded;
- (void)appIconButtonClicked:(id)a0;
- (void)appURLChanged:(id)a0;
- (id)safariHelpAnchor;
- (void)setToCurrentPageClicked:(id)a0;
- (void)showColorInTitleBarChanged:(id)a0;
- (void)showNavigationControlsChanged:(id)a0;
- (void)updateSetToCurrentPageButtonAvailability;

@end
