@class NSExtension, NSString, NSUUID, NSSet, AppExtensionContextMenu, NSDictionary, ExtensionWebsiteAccess, NSMutableDictionary, AppExtensionToolbarItem, NSMutableArray, NSNumber;

@interface SafariAppExtensionData : WBSSafariExtension {
    NSString *_localizedDisplayName;
    NSUUID *_baseURIHost;
    NSMutableDictionary *_grantedPermissionOrigins;
    NSMutableDictionary *_revokedPermissionOrigins;
    NSMutableArray *_contentScripts;
    NSMutableArray *_styleSheets;
    NSMutableDictionary *_injectedStyleSheetsPerDomainPattern;
    NSMutableDictionary *_injectedScriptsPerDomainPattern;
    BOOL _allowedInPrivateBrowsing;
    BOOL _isAllowedInPrivateBrowsingValuePopulated;
}

@property (retain, nonatomic) ExtensionWebsiteAccess *websiteAccess;
@property (retain, nonatomic) AppExtensionToolbarItem *toolbarItem;
@property (retain, nonatomic) AppExtensionContextMenu *contextMenu;
@property (readonly, nonatomic) NSExtension *extension;
@property (nonatomic) BOOL allowedInPrivateBrowsing;
@property (readonly, nonatomic) NSDictionary *userVisiblePermissions;
@property (copy, nonatomic) NSNumber *defaultPermission;
@property (readonly, nonatomic) BOOL hasPermissionToAccessAllHosts;
@property (readonly, nonatomic) BOOL hasMoreThanOneRequestedOriginNotAlreadyConfigured;
@property (readonly, copy, nonatomic) NSDictionary *configuredPermissions;
@property (readonly, copy, nonatomic) NSDictionary *grantedPermissionOrigins;
@property (readonly, copy, nonatomic) NSDictionary *revokedPermissionOrigins;
@property (readonly, copy, nonatomic) NSSet *requestedPermissionOriginsNotAlreadyConfigured;

+ (BOOL)_extensionWithWebsiteAccess:(id)a0 requestsAccessToOrigin:(id)a1;
+ (BOOL)test_extensionWithWebsiteAccess:(id)a0 requestsAccessToOrigin:(id)a1;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)displayName;
- (void)unload;
- (void)addStyleSheet:(id)a0;
- (void)_addInjectedContentForGrantedDomainPattern:(id)a0;
- (void)_addInjectedContentForGrantedOrigins:(id)a0;
- (void)_addInjectedContentInPrivateBrowsing;
- (id)_configuredDictionaryWithRequested:(id)a0 granted:(id)a1 revoked:(id)a2;
- (struct ExtensionContentAccessInfo { id x0; id x1; BOOL x2; })_extensionAccessForInjectedContent:(id)a0 inGrantedDomainPattern:(id)a1;
- (void)_fireNavigationEventsForTabsMatchingOriginPatterns:(id)a0;
- (void)_grantPermissionsForOrigins:(id)a0 expirationDate:(id)a1 updateSafariState:(BOOL)a2;
- (void)_loadInPrivateBrowsing;
- (BOOL)_patternMatches:(id)a0 configuredPattern:(id)a1;
- (void)_readExtensionPermissionsDuringInitialization;
- (void)_removeExpiredGrantedPermissions;
- (void)_removeExpiredRevokedPermissions;
- (void)_removeInjectedContentForDomainPattern:(id)a0;
- (void)_removeInjectedContentForRemovedGrantedOriginPatterns:(id)a0;
- (void)_removeInjectedContentInPrivateBrowsing;
- (id)_removePermissionOriginsThatAreNoLongerRequested:(id)a0;
- (BOOL)_removePermissionsForOrigins:(id)a0 exactPatternMatchesOnly:(BOOL)a1 fromOrigins:(id)a2 notificationName:(id)a3;
- (void)_revokePermissionsForOrigins:(id)a0 expirationDate:(id)a1 updateSafariState:(BOOL)a2;
- (void)_saveExtensionPermissions;
- (BOOL)_shouldAutomaticallyEnableInPrivateBrowsing;
- (void)_unloadInPrivateBrowsing;
- (void)_updateInjectedContentForChangedRevokedDomainPattern:(id)a0;
- (void)_updateInjectedContentForChangedRevokedOriginPatterns:(id)a0;
- (void)addContentScript:(id)a0;
- (void)addInjectedContentForAllGrantedOrigins;
- (void)applyManagedExtensionPermissionsUpdatingSafariState:(BOOL)a0;
- (id)baseURIHost;
- (void)grantPermissionsForOrigins:(id)a0 expirationDate:(id)a1;
- (BOOL)hasPermissionToAccessURL:(id)a0;
- (id)initWithExtension:(id)a0 extensionsController:(id)a1;
- (BOOL)migrateRequestedPermissionsToGrantedPermissions;
- (void)removeAllGrantedAndRevokedPermissions;
- (void)removeAllGrantedPermissions;
- (void)removeGrantedAndRevokedPermissionsForOrigins:(id)a0 exactPatternMatchesOnly:(BOOL)a1;
- (void)removeGrantedPermissionsForOrigins:(id)a0 exactPatternMatchesOnly:(BOOL)a1;
- (void)removeRevokedPermissionsForOrigins:(id)a0 exactPatternMatchesOnly:(BOOL)a1;
- (void)revokePermissionsForOrigins:(id)a0 expirationDate:(id)a1;
- (BOOL)shouldRequestAccessToURL:(id)a0;

@end
