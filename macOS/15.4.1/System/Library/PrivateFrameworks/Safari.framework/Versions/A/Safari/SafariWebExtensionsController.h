@class NSArray, NSString, NSTimer;

@interface SafariWebExtensionsController : WBSWebExtensionsController <ExtensionToolbarItemProviding, SFWebExtensionContentBlockerManagerDelegate, WKWebExtensionControllerDelegatePrivate> {
    NSTimer *_checkIfNoBrowserWindowIsFocusedTimer;
}

@property (readonly, nonatomic) NSArray *webExtensionsForPerSitePreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_composedIdentifierForStateOfExtensionWithBundleIdentifier:(id)a0 developerIdentifier:(id)a1;
+ (id)_extensionsCrashReporterMessage;
+ (Class)_extensionDataClass;
+ (id)_skipLoadingEnabledExtensionsAtLaunchPreferenceKey;
+ (id)extensionIdentifierToBaseURIMapBundleParameterKey;
+ (id)extensionURLScheme;
+ (id)extensionsCrashReporterMessageBundleParameterKey;
+ (id)webExtensionLoadedBundleParameterKey;

- (void).cxx_destruct;
- (id)profile;
- (void)didCloseWindow:(id)a0;
- (void)_webExtensionController:(id)a0 receivedTestMessage:(id)a1 withArgument:(id)a2 andSourceURL:(id)a3 lineNumber:(unsigned int)a4;
- (void)_webExtensionController:(id)a0 recordTestAssertionResult:(BOOL)a1 withMessage:(id)a2 andSourceURL:(id)a3 lineNumber:(unsigned int)a4;
- (void)_webExtensionController:(id)a0 recordTestEqualityResult:(BOOL)a1 expectedValue:(id)a2 actualValue:(id)a3 withMessage:(id)a4 andSourceURL:(id)a5 lineNumber:(unsigned int)a6;
- (void)_webExtensionController:(id)a0 recordTestFinishedWithResult:(BOOL)a1 message:(id)a2 andSourceURL:(id)a3 lineNumber:(unsigned int)a4;
- (void)webExtensionController:(id)a0 openNewWindowUsingConfiguration:(id)a1 forExtensionContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)webExtensionController:(id)a0 presentPopupForAction:(id)a1 forExtensionContext:(id)a2 completionHandler:(id /* block */)a3;
- (id)_domainForDefaultSearchProvider;
- (id)allProfileExtensionsControllers;
- (id)tabGroupManager;
- (BOOL)test_isRunningExtensionTestMode;
- (id)_allWindowsForWebExtension:(id)a0;
- (void)_cancelCheckIfNoBrowserWindowIsFocusedTimer;
- (void)_clearNewTabPreferenceIfNecessaryForRemovedExtensionWithComposedIdentifier:(id)a0;
- (id)_computeCodeSigningDictionaryOnDiskForExtension:(id)a0 attemptRetryOnFailure:(BOOL)a1;
- (void)_createNewTabInWindow:(id)a0 tabIndex:(id)a1 url:(id)a2 makeActive:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)_developerIdentifierForExtension:(id)a0 untrustedCodeSigningDictionary:(id)a1;
- (id)_deviceUUIDString;
- (id)_findBrowserTabViewItemOrCreateNewWindowForNewTabWithBrowsingMode:(unsigned long long)a0 URL:(id)a1 shouldMakeNewTabActive:(BOOL)a2 shouldMakeKeyNewWindow:(BOOL)a3;
- (id)_findWindowWithID:(double)a0;
- (BOOL)_isExtensionBlockedByBlocklist:(id)a0 developerIdentifier:(id)a1;
- (BOOL)_isTrustedDeveloperForExtensionStateSyncForExtension:(id)a0;
- (id)_loadAndCreateNewTabsIfNecessaryForURLs:(id)a0 forWebExtension:(id)a1 inBrowserWindowController:(id)a2 shouldReuseFirstTab:(BOOL)a3;
- (void)_notifyExtensionsIfNoBrowserWindowIsFocused;
- (void)_notifyExtensionsSoonIfNoBrowserWindowIsFocused;
- (void)_pinTab:(id)a0;
- (void)_relateParentTab:(id)a0 toTab:(id)a1;
- (void)_replaceAppExtensionsWithWebExtension:(id)a0 developerIdentifier:(id)a1;
- (void)_replaceExtensionsObsoletedByExtension:(id)a0 developerIdentifier:(id)a1;
- (id)_safariShortVersion;
- (void)_showAccessRequestAlertForExtension:(id)a0 domains:(id)a1 callingAPIName:(id)a2 responseBlock:(id /* block */)a3;
- (void)_showNewExtensionBannerIfNecessaryForExtensions:(id)a0;
- (void)_showPromptForExtensionDisabledBecauseItDoesNotSupportThisVersionOfSafariWithMessage:(id)a0 extensionIdentifier:(id)a1;
- (void)_showPromptForExtensionDisabledBecauseItHasRequestedAdditionalPermissions:(id)a0 extensionIdentifier:(id)a1;
- (void)_updateExtensionsCrashReporterMessage;
- (void)_validateContainingAppOfExtensionIfNecessary:(id)a0 attemptRetryOnFailure:(BOOL)a1;
- (id)_webViewConfiguration;
- (void)browserTabViewItem:(id)a0 currentURLMayHaveChanged:(id)a1 previousURL:(id)a2;
- (void)didDeactivateWindow;
- (void)disableUnpackedExtensionsIfNecessary;
- (void)disableUnsignedExtensionsIfNecessary;
- (BOOL)extensionsEnabled;
- (BOOL)handleKeyboardEvent:(id)a0 forWindowController:(id)a1;
- (BOOL)hasNamedProfiles;
- (id)lastFocusedWindow;
- (void)loadAndFindExtensions;
- (id)loadUnpackedExtension:(id)a0;
- (void)reloadEnabledExtensions;
- (BOOL)showOptionsForExtension:(id)a0 requestingWebView:(id)a1;
- (id)toolbarItemForIdentifier:(id)a0 browserWindowController:(id)a1 forToolbar:(BOOL)a2;
- (unsigned long long)toolbarItemIdealPointSize;
- (id)toolbarItemIdentifiersForBrowsingMode:(unsigned long long)a0;
- (id)unpackedExtensionWithIdentifier:(id)a0;
- (id)webExtensionForBaseURIHost:(id)a0;
- (id)webExtensionForComposedIdentifier:(id)a0;
- (id)webExtensionForExtension:(id)a0;
- (id)webExtensionForExtensionIdentifier:(id)a0;

@end
