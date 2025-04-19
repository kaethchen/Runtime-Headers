@class NSUserDefaults;

@interface FBKSharedConstants : FBKSSharedConstants

@property (class, readonly, nonatomic) NSUserDefaults *sharedUserDefaults;
@property (class, readonly, nonatomic) BOOL isFormItemsDisabled;

+ (void)initialize;
+ (id)modelName;
+ (BOOL)isProductionEnvironment;
+ (id)darkModeCSS;
+ (void)saveLocalizedAttachmentLegalText:(id)a0 draftID:(id)a1;
+ (BOOL)usesTemporaryDraftsDirectory;
+ (void)recordCurrentLanguagePreference;
+ (id)_localizedAttachmentLegalTextKeyForDraftID:(id)a0;
+ (BOOL)currentIDMSEnvironmentMatchesCurrentFBKSEnvironment;
+ (long long)currentLegalVersion;
+ (void)deleteAttachmentLegalTextForDraftID:(id)a0;
+ (void)deleteStaleAttachmentLegalTextEntries;
+ (id)developerURL;
+ (BOOL)hasDifferentLanguageSinceLastLaunch;
+ (BOOL)isEnhancedLoggingEnabled;
+ (BOOL)isRunningInFBA;
+ (BOOL)listsFormsFetchedByTat;
+ (id)localizedAttachmentLegalTextForDraftID:(id)a0;
+ (id)portalURL;
+ (BOOL)tracksFileUploadsLocally;
+ (BOOL)usesPersistentStore;

@end
