@interface PLSpotlightReindexing : NSObject

+ (id)_recordReindexIdentifiersWithIdentifiers:(id)a0 bundleID:(id)a1 directoryURL:(id)a2;
+ (id)_deleteFileInDirectoryURL:(id)a0;
+ (id)_mutableReindexingDictionaryInDirectoryURL:(id)a0;
+ (id)_recordReindexAllItemsForBundleID:(id)a0 directoryURL:(id)a1 reindexReason:(id)a2;
+ (id)_searchDirectoryURL;
+ (id)_writeReindexingDictionary:(id)a0 toDirectoryURL:(id)a1;
+ (id)deleteFile;
+ (void)drainSpotlightReindexIdentifiersIfNeededForLibrary:(id)a0;
+ (id)eraseReindexIdentifiers;
+ (id)recordReindexAllItemsForBundleID:(id)a0 reindexReason:(id)a1;
+ (id)recordReindexIdentifiersWithIdentifiers:(id)a0 bundleID:(id)a1;
+ (id)reindexIdentifiers;
+ (BOOL)shouldReindexAllItemsForLibraryIdentifier:(long long)a0;
+ (id)spotlightReasonForReindexingAllItemsForLibraryIdentifier:(long long)a0;

@end
