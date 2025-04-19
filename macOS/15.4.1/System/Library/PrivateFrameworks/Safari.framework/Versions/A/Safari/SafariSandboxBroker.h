@class NSString, NSMutableDictionary, NSURL, WBSSecureDefaults, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface SafariSandboxBroker : WBSUISafariSandboxBroker <SafariSandboxBrokerProtocol> {
    WBSSecureDefaults *_secureDefaults;
    NSObject<OS_dispatch_group> *_archiveGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedDownloadLocationURLLock;
    NSObject<OS_dispatch_queue> *_downloadWorkQueue;
    NSURL *_downloadMetadataFileURL;
    NSMutableDictionary *_identifiersToDownloadEntries;
}

@property (readonly, nonatomic) BOOL downloadLocationIsForced;
@property (readonly, nonatomic) BOOL alwaysPromptForDownloadFolder;
@property (retain, nonatomic) NSURL *downloadLocationURL;
@property (retain, nonatomic) NSURL *homepageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedSandboxBrokerIdentifierWithPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (id)_sharedSandboxBrokers;
+ (id)makeSharedSandboxBrokerWithPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (id)sharedSandboxBrokerForServiceViewController:(id)a0;
+ (id)sharedSandboxBrokerWithPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_URLsRelatedToURL:(id)a0 containingOriginalURL:(BOOL *)a1;
- (id)initWithPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (void)_addFileExtensionToMigratedResources:(id)a0 forURL:(id)a1 migrationType:(unsigned long long)a2 permissions:(long long)a3;
- (BOOL)_canHostWriteFileAtURL:(id)a0;
- (void)_clearDownloadIdentifiersNotIncludedIn:(id)a0 completionHandler:(id /* block */)a1;
- (void)_createDownloadBundleWithSuggestedFilename:(id)a0 inFolderAtURL:(id)a1 tagNames:(id)a2 allowsOverwrite:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)_defaultDownloadLocationURL;
- (void)_deleteUnusedDownloadBundleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)_dictionaryRepresentationsForEntries:(id)a0;
- (id)_downloadEntryForIdentifier:(id)a0;
- (id)_entriesOfClass:(Class)a0 forDictionaryRepresentations:(id)a1;
- (void)_extractDownloadedArchiveWithPath:(id)a0 ofType:(unsigned long long)a1 forDownloadWithIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)_getDownloadBundleURLForDownloadWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_isDeveloperModeEnabled;
- (BOOL)_isValidDownloadLocation:(id)a0;
- (BOOL)_isWebArchiveData:(id)a0;
- (id)_issueSandboxExtension:(const char *)a0 forFileAtURL:(id)a1 flags:(unsigned int)a2;
- (void)_loadDownloadEntriesIfNeeded;
- (id)_migrateDownloadFolderURLInMigrationResources:(id)a0;
- (void)_moveDownloadBundleWithIdentifierToTrash:(id)a0 completionHandler:(id /* block */)a1;
- (void)_moveDownloadedFilesWithPaths:(id)a0 inDownloadWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)_readDownloadDataFromOldLocationIfNeeded;
- (void)_resetDownloadLocationURL;
- (id)_sandboxBrokerSettingsDirectoryURL;
- (void)_saveSandboxMetadata;
- (id)_unarchiverForType:(unsigned long long)a0;
- (void)_updateFractionCompleted:(float)a0 forDownloadWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_waitForDownloadWorkQueue;
- (void)cancelUnarchivingOperationForDownloadWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearDownloadIdentifiersNotIncludedIn:(id)a0 completionHandler:(id /* block */)a1;
- (void)createDownloadBundleWithSuggestedFilename:(id)a0 inFolderAtURL:(id)a1 tagNames:(id)a2 allowsOverwrite:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)deleteUnusedDownloadBundleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)extractDownloadedArchiveWithPath:(id)a0 ofType:(unsigned long long)a1 forDownloadWithIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)getDownloadBundleURLForDownloadWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getDownloadLocationURLWithCompletionHandler:(id /* block */)a0;
- (void)issueDevelopModeExtensionWithCompletionHandler:(id /* block */)a0;
- (void)issueRootExtensionWithCompletionHandler:(id /* block */)a0;
- (void)migrateResourcesToSandbox:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveDownloadBundleWithIdentifierToTrash:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveDownloadedFilesWithPaths:(id)a0 inDownloadWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setHomepageURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)setShouldAlwaysPromptForDownloadPath:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)synchronouslyRemoveQuarantineHardAttributeFromFileAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateFractionCompleted:(float)a0 forDownloadWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeFileWrapperToUniqueFileInDownloadsFolder:(id)a0 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
