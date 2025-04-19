@class NSAlert, NSScrollView, NSView, NSArrayController, NSTableView, NSButton, NSLayoutConstraint;

@interface ExtensionsAlertController : NSObject {
    NSAlert *_alert;
}

@property (retain, nonatomic) NSArrayController *alertHighLevelDomainsArrayController;
@property (retain, nonatomic) NSView *alertAccessoryView;
@property (weak) NSScrollView *alertScrollView;
@property (weak) NSTableView *alertTableView;
@property (weak) NSButton *alertDisclosureTriangle;
@property (weak) NSLayoutConstraint *alertTableViewHeightConstraint;

+ (void)_open:(id)a0;
+ (void)_handleExtensionTurnedOffAlertResponse:(long long)a0 responseBlock:(id /* block */)a1;
+ (id)_openButton;
+ (id)_openOptionsPageStackViewForProfiles:(id)a0;
+ (id)_settingsWindowForAlert;
+ (void)addLearnMoreLinkToAttributedInformativeText:(id)a0;
+ (void)reportBlocklistedExtension:(id)a0 withIcon:(id)a1;
+ (void)reportRefusalToInstallLegacyExtension;
+ (void)showAccessRequestPromptForExtension:(id)a0 forDomains:(id)a1 callingAPIName:(id)a2 showsSuppressionButton:(BOOL)a3 responseBlock:(id /* block */)a4;
+ (void)showAccessRequestPromptForExtension:(id)a0 forPatterns:(id)a1 callingAPIName:(id)a2 showsSuppressionButton:(BOOL)a3 responseBlock:(id /* block */)a4;
+ (void)showAccessRequestPromptForExtension:(id)a0 forURLs:(id)a1 callingAPIName:(id)a2 showsSuppressionButton:(BOOL)a3 responseBlock:(id /* block */)a4;
+ (void)showGrantAllWebsitesConfirmationForExtension:(id)a0 fromWindow:(id)a1 responseBlock:(id /* block */)a2;
+ (void)showPromptForExtensionDisabledBecauseBecauseItDoesNotSupportThisVersionOfSafariWithMessage:(id)a0 responseBlock:(id /* block */)a1;
+ (void)showPromptForExtensionDisabledBecauseItHasRequestedAdditionalPermissions:(id)a0 responseBlock:(id /* block */)a1;
+ (void)showPromptForManagingExtensionStorage:(id)a0 numberOfDataBytes:(long long)a1 responseBlock:(id /* block */)a2;
+ (void)showPromptForOpeningOptionsPage:(id)a0 forProfiles:(id)a1 responseBlock:(id /* block */)a2;
+ (void)showPromptForOverridingNewTabWindowPagesWithExtensionOverridePage:(id)a0 forProfile:(id)a1 enableInAllProfiles:(BOOL)a2 responseBlock:(id /* block */)a3;
+ (void)showPromptWhenUnableToBypassExtensionPaneOcclusion;
+ (void)showPromptWhenUnableToBypassExtensionPaneOcclusionWhenAddingTemporaryExtension;

- (void).cxx_destruct;
- (void)toggleScrollViewContents:(id)a0;

@end
