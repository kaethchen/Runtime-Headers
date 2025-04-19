@class SafariWebExtension, NSString, NSURL, NSExtension, NSArray, NSSet, NSDictionary, NSImage;

@interface ExtensionWrapper : NSObject <WBSExtensionWrapper> {
    NSExtension *_appExtension;
    NSExtension *_contentBlockerAppExtension;
    SafariWebExtension *_webExtension;
    NSString *_iconDataURLString;
    NSString *_composedIdentifier;
    BOOL _initializedWithComposedIdentifier;
    NSString *_profileServerID;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayVersion;
@property (readonly, nonatomic) NSURL *containingAppURL;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSImage *preferencesIcon;
@property (readonly, copy, nonatomic) NSString *composedIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *websiteAccess;
@property (readonly, nonatomic) NSExtension *appExtension;
@property (readonly, copy, nonatomic) NSArray *errorStrings;
@property (readonly, nonatomic) SafariWebExtension *webExtension;
@property (readonly, nonatomic) BOOL isUnpackedExtension;
@property (readonly, copy, nonatomic) NSSet *urlsPendingApproval;
@property (readonly, copy, nonatomic) NSSet *apiNamesPendingApproval;
@property (readonly, nonatomic) BOOL requestsAccessToAllHosts;
@property (readonly, nonatomic) BOOL hasInjectedContent;
@property (readonly, nonatomic) BOOL requestsTracking;
@property (readonly, nonatomic) NSArray *enabledProfileDisplayTitles;
@property (readonly, copy, nonatomic) NSString *containingAppDisplayName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL canEnable;
@property (nonatomic) BOOL allowedInPrivateBrowsing;
@property (readonly, nonatomic) BOOL isContentBlocker;
@property (readonly, nonatomic) NSArray *enabledProfiles;
@property (readonly, nonatomic) NSArray *enabledNamedProfiles;
@property (readonly, nonatomic, getter=isEnabledInAnyProfile) BOOL enabledInAnyProfile;
@property (readonly, nonatomic, getter=isEnabledInAnyNamedProfile) BOOL enabledInAnyNamedProfile;
@property (readonly, nonatomic, getter=isEnabledInAllNamedProfiles) BOOL enabledInAllNamedProfiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionWrapperWithExtension:(id)a0 profileServerID:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)disable;
- (long long)localizedCompare:(id)a0;
- (id)_appExtension;
- (id)_appExtensionsController;
- (id)_contentBlockerAppExtension;
- (id)_contentBlockerManager;
- (void)_enableExtensionWithAuthorization:(BOOL)a0 enableExtensionBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_enableWebExtensionAndPromptForNewTabOverrideIfNecessary;
- (id)_initWithIdentifier:(id)a0 profileServerID:(id)a1;
- (id)_webExtensionsController;
- (BOOL)canLoadWithErrorString:(id *)a0;
- (void)disableInAllProfiles;
- (void)enableFromExtensionsBanner;
- (void)enableFromImportConflictView;
- (void)enableFromSettingsWithAuthorization:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)enableInAllProfilesWithAuthorization:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasMoreThanOneRequestedOriginNotAlreadyConfigured;
- (id)initWithComposedIdentifier:(id)a0 profileServerID:(id)a1;
- (BOOL)isEnabledInProfile:(id)a0;
- (void)removeAllGrantedPermissions;

@end
