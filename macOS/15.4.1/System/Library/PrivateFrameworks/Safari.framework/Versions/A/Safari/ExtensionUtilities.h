@interface ExtensionUtilities : NSObject

+ (id)accessLevelStringForAccessLevel:(int)a0;
+ (void)promptForBiometricOrWatchAuthorizationToEnableExtensionWithCompletionHandler:(id /* block */)a0;
+ (void)reportBlocklistedExtension:(id)a0;
+ (void)showExtensionPreferencesForExtensionWithIdentifier:(id)a0;
+ (void)showPromptForExtensionDisabledBecauseItDoesNotSupportThisVersionOfSafariWithMessage:(id)a0 extensionIdentifier:(id)a1;
+ (void)showPromptForExtensionDisabledBecauseItHasRequestedAdditionalPermissions:(id)a0 extensionIdentifier:(id)a1;
+ (id)userVisibleWebsiteAccessWithWebsiteAccessLevel:(int)a0 allowedDomains:(struct Vector<Safari::ExtensionDomainPattern, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct ExtensionDomainPattern *x0; unsigned int x1; unsigned int x2; })a1 allowedDomainsForHeaderInjection:(struct Vector<Safari::ExtensionDomainPattern, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct ExtensionDomainPattern *x0; unsigned int x1; unsigned int x2; })a2 hasInjectedContent:(BOOL)a3 allowedInPrivateBrowsing:(BOOL)a4;
+ (id)userVisibleWebsiteAccessWithWebsiteAccessLevel:(int)a0 allowedDomains:(struct Vector<Safari::ExtensionDomainPattern, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct ExtensionDomainPattern *x0; unsigned int x1; unsigned int x2; })a1 hasInjectedContent:(BOOL)a2;

@end
