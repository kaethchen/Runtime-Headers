@class NSView, NSButton;

@interface DeveloperPreferences : SecurePreferencesModule

@property (weak, nonatomic) NSView *mainContentView;
@property (weak, nonatomic) NSButton *allowRemoteAutomationCheckbox;
@property (weak, nonatomic) NSButton *allowJavaScriptFromSmartSearchFieldCheckbox;
@property (weak, nonatomic) NSButton *allowJavaScriptFromAppleEventsCheckbox;
@property (weak, nonatomic) NSButton *disableSiteSpecificHacksCheckbox;
@property (weak, nonatomic) NSButton *disableLocalFileRestrictionsCheckbox;
@property (weak, nonatomic) NSButton *disableCrossOriginRestrictionsCheckbox;
@property (weak, nonatomic) NSButton *enableIntelligentTrackingPreventionDebugModeCheckbox;
@property (weak, nonatomic) NSButton *enablePrivateClickMeasurementDebugModeCheckbox;
@property (weak, nonatomic) NSButton *allowUnsignedExtensionsCheckbox;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)initializeFromDefaults;
- (void)toggleDisableSiteSpecificHacks:(id)a0;
- (void)_allowUnsignedExtensionsDidTimeout:(id)a0;
- (void)_setCheckbox:(id)a0 checked:(BOOL)a1;
- (void)_toggleAllowUnsignedExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)_togglePropertyWithSecurePromptMessageText:(id)a0 currentPropertyState:(BOOL)a1 toggleBlock:(id /* block */)a2 updateBlock:(id /* block */)a3;
- (void)_updateAllowJavaScriptFromAppleEventsCheckbox;
- (void)_updateAllowJavaScriptFromSmartSearchFieldCheckbox;
- (void)_updateAllowRemoteAutomation;
- (void)_updateAllowUnsignedExtensionsCheckbox;
- (void)_updateDisableCrossOriginRestrictionsCheckbox;
- (void)_updateDisableLocalFileRestrictionsCheckbox;
- (void)_updateDisableSiteSpecificHacksCheckbox;
- (void)_updateEnableIntelligentTrackingPreventionDebugModeCheckbox;
- (void)_updateEnablePrivateClickMeasurementDebugModeCheckbox;
- (void)addTemporaryWebExtension:(id)a0;
- (BOOL)addTemporaryWebExtensionWithURL:(id)a0;
- (void)openHelpPage:(id)a0;
- (id)safariHelpAnchor;
- (void)showErrorAlertForTemporaryExtensionForReload:(BOOL)a0;
- (void)toggleAllowJavaScriptFromAppleEvents:(id)a0;
- (void)toggleAllowJavaScriptFromSmartSearchField:(id)a0;
- (void)toggleAllowRemoteAutomation:(id)a0;
- (void)toggleAllowUnsignedExtensions:(id)a0;
- (void)toggleDisableCrossOriginRestrictions:(id)a0;
- (void)toggleDisableLocalFileRestrictions:(id)a0;
- (void)toggleEnableIntelligentTrackPreventionDebugMode:(id)a0;
- (void)toggleEnablePrivateClickMeasurementDebugMode:(id)a0;

@end
