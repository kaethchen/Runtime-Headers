@class NSString, NSFileManager, NSMutableDictionary;
@protocol MFActivityProgressUpdater;

@interface MFPersistenceMigratorV2 : NSObject <NSFileManagerDelegate> {
    NSMutableDictionary *_lostItems;
}

@property (retain, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) id<MFActivityProgressUpdater> activityProgressUpdater;
@property (nonatomic) unsigned long long progressChunkSize;
@property (nonatomic) unsigned long long messagesProgressCount;
@property (nonatomic) unsigned long long v1CleanupCount;
@property (nonatomic) BOOL isTrackingCleanupProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)fileManager:(id)a0 shouldProceedAfterError:(id)a1 removingItemAtPath:(id)a2;
- (BOOL)fileManager:(id)a0 shouldRemoveItemAtPath:(id)a1;
- (void)migrate;
- (id)_accountPrefixes;
- (BOOL)_directoryExistsAtPath:(id)a0;
- (void)_handleAttachmentsMigrationResult:(BOOL)a0 error:(id)a1 message:(id)a2 libraryID:(long long)a3;
- (id)_lostItemsForBaseDirectory:(id)a0;
- (id)_mailSystemAccountsWithAccountStore:(id)a0;
- (id)_mailboxSuffixes;
- (void)_migrateMailboxesFromDirectory:(id)a0 toDirectory:(id)a1 baseDirectory:(id)a2 usingUUID:(id)a3 mailboxCacheDictionary:(id)a4 accountPrefix:(id)a5;
- (BOOL)_path:(id)a0 hasPrefixInArray:(id)a1;
- (id)_prefixOfString:(id)a0 fromSet:(id)a1;
- (BOOL)_shouldIgnoreFilename:(id)a0;
- (BOOL)_string:(id)a0 hasPrefixInSet:(id)a1;
- (BOOL)_string:(id)a0 hasSuffixInSet:(id)a1;
- (id)_stringByAppendingV2MailboxSuffix:(id)a0;
- (id)initWithActivityProgressUpdater:(id)a0;

@end
