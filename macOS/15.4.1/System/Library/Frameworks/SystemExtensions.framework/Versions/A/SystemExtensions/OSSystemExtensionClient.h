@interface OSSystemExtensionClient : NSObject

- (BOOL)willReplaceAppAtURL:(id)a0 with:(id)a1 error:(id *)a2;
- (unsigned long long)shouldDeleteAppAtURL:(id)a0;
- (unsigned long long)shouldMoveAppAtURL:(id)a0 toURL:(id)a1;
- (unsigned long long)shouldMoveAppToTrash:(id)a0;
- (unsigned long long)shouldReplaceAppAtURL:(id)a0 with:(id)a1;
- (BOOL)willDeleteAppAtURL:(id)a0 error:(id *)a1;
- (BOOL)continueCleanupForUninstall:(id)a0 bundleLocation:(id)a1 error:(id *)a2;
- (BOOL)continueCleanupForUpgrade:(id)a0 bundleLocation:(id)a1 error:(id *)a2;
- (BOOL)continueCleanupForUpgradeOrUninstall:(id)a0 bundleLocation:(id)a1 isUpgrade:(BOOL)a2 error:(id *)a3;
- (BOOL)developerMode:(BOOL *)a0 error:(id *)a1;
- (id)listActiveExtensions:(id *)a0;
- (id)listActiveExtensionsWithCategory:(id)a0 error:(id *)a1;
- (id)listAllExtensions:(id *)a0;
- (id)listAllExtensionsWithCategory:(id)a0 error:(id *)a1;
- (id)listEnabledExtensions:(id *)a0;
- (id)listEnabledExtensionsWithCategory:(id)a0 error:(id *)a1;
- (id)listPendingApprovalExtensions:(id *)a0;
- (id)listPendingApprovalExtensionsWithCategory:(id)a0 error:(id *)a1;
- (BOOL)resetExtensionDatabase:(struct AuthorizationOpaqueRef { } *)a0 error:(id *)a1;
- (BOOL)setDeveloperMode:(BOOL)a0 withAuthorization:(struct AuthorizationOpaqueRef { } *)a1 error:(id *)a2;
- (BOOL)testing__routine:(id)a0 error:(id *)a1;
- (BOOL)testing__routine:(id)a0 withAuthorization:(struct AuthorizationOpaqueRef { } *)a1 error:(id *)a2;
- (BOOL)uninstallExtension:(id)a0 withAuthorization:(struct AuthorizationOpaqueRef { } *)a1 error:(id *)a2;
- (BOOL)uninstallExtensionWithBundleIdentifier:(id)a0 teamIdentifier:(id)a1 withAuthorization:(struct AuthorizationOpaqueRef { } *)a2 error:(id *)a3;
- (BOOL)updateExtensionWithInfo:(id)a0 error:(id *)a1;
- (id)updateExtensions:(id)a0;
- (BOOL)willMoveAppAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)willMoveAppToTrash:(id)a0 error:(id *)a1;

@end
