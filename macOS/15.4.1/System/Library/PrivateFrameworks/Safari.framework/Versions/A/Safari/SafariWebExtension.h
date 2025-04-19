@class NSString, SafariWebExtensionsController, NSImage, PerSitePreferenceUserInterfaceInformation;

@interface SafariWebExtension : WBSWebExtensionData <WKNavigationDelegate, WKUIDelegate>

@property (weak, nonatomic) SafariWebExtensionsController *extensionsController;
@property (readonly, nonatomic) NSImage *iconBadgedWithSafariIcon;
@property (readonly, nonatomic) PerSitePreferenceUserInterfaceInformation *perSitePreferenceUserInterfaceInformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userGesturePerformedInTab:(id)a0;
- (BOOL)_applicationIsActive;
- (void)_loadToolbarItem;
- (void)_loadToolbarItemInPrivateBrowsing;
- (void)_unloadToolbarItem;
- (void)_unloadToolbarItemInPrivateBrowsing;
- (void)_validateToolbarItemInAllWindows;
- (void)promptForAccessToURLs:(id)a0 inTab:(id)a1 completionHandler:(id /* block */)a2;

@end
