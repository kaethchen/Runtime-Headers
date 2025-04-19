@class UNCKeyedDictionaryRepository, NSURL, UNCBundleLibrarian;

@interface UNCAttachmentsRepository : NSObject {
    UNCKeyedDictionaryRepository *_referencesRepository;
    NSURL *_directoryURL;
    UNCBundleLibrarian *_librarian;
}

+ (id)_sha1HashOfFileAtURL:(id)a0;

- (void).cxx_destruct;
- (void)performMigration;
- (id)allBundleIdentifiers;
- (unsigned long long)_addReferencesToRepositoryURL:(id)a0 forNotificationIdentifier:(id)a1 bundleIdentifier:(id)a2;
- (id)_attachmentDirectoryForBundleIdentifier:(id)a0;
- (id)_claimedRepositoryURLsForBundleIdentifier:(id)a0;
- (id)_fileURLForDigestString:(id)a0 extension:(id)a1 bundleIdentifier:(id)a2;
- (void)_performAttachmentFilesMigration;
- (void)_performAttachmentRepositoryKeyMigration;
- (void)_removeAllReferencesForBundleIdentifier:(id)a0;
- (unsigned long long)_removeReferencesToRepositoryURL:(id)a0 forNotificationIdentifier:(id)a1 bundleIdentifier:(id)a2;
- (void)_removeRepositoryURL:(id)a0;
- (void)_transformAttachmentsForBundleIdentifier:(id)a0 usingTransformBlock:(id /* block */)a1;
- (unsigned long long)_transformNotificationIdentifiersForRepositoryURL:(id)a0 bundleIdentifier:(id)a1 usingTransformBlock:(id /* block */)a2;
- (id)bundleIdentifiersClaimingAttachments;
- (void)deleteAllFilesForBundleIdentifier:(id)a0;
- (void)ensureIntegrityUsingNotificationIdentifiersForBundleIdentifiers:(id)a0;
- (id)initWithDirectory:(id)a0 librarian:(id)a1;
- (BOOL)isRepositoryURL:(id)a0;
- (BOOL)isValidRepositoryURL:(id)a0 forBundleIdentifier:(id)a1;
- (id)moveFileIntoRepositoryFromFileURL:(id)a0 forNotificationIdentifier:(id)a1 bundleIdentifier:(id)a2;
- (id)referencesForBundleIdentifier:(id)a0;
- (void)removeReferenceToRepositoryURL:(id)a0 forNotificationIdentifier:(id)a1 bundleIdentifier:(id)a2;

@end
