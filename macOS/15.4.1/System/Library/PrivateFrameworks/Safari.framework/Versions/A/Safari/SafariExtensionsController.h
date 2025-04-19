@interface SafariExtensionsController : WBSExtensionsController

+ (id)permissionPromptDescriptionStringForExtension:(id)a0 domains:(id)a1 callingAPI:(id)a2;
+ (id)permissionPromptTitleStringForExtension:(id)a0 domains:(id)a1 callingAPI:(id)a2;
+ (id)webAppPermissionPromptDescriptionStringForExtension:(id)a0 domains:(id)a1 callingAPI:(id)a2 webAppName:(id)a3;

- (id)init;
- (id)_computeCodeSigningDictionaryOnDiskForExtension:(id)a0 attemptRetryOnFailure:(BOOL)a1;
- (id)_developerIdentifierForExtension:(id)a0 untrustedCodeSigningDictionary:(id)a1;
- (BOOL)_isExtensionBlockedByBlocklist:(id)a0 developerIdentifier:(id)a1;
- (void)_replaceExtensionsObsoletedByExtension:(id)a0 developerIdentifier:(id)a1;
- (void)_showNewExtensionBannerIfNecessaryForExtensions:(id)a0;
- (void)_updateExtensionsCrashReporterMessage;
- (void)_validateContainingAppOfExtensionIfNecessary:(id)a0 attemptRetryOnFailure:(BOOL)a1;
- (void)disableUnsignedExtensionsIfNecessary;
- (BOOL)extensionsEnabled;

@end
