@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface SUInstalledUpdateJournal : NSObject

@property (retain) NSObject<OS_dispatch_queue> *updateQueue;
@property (retain) NSString *customDirectoryPath;
@property (retain) NSArray *cache;

+ (id)sharedJournal;

- (void)dealloc;
- (id)init;
- (void)__updateJournalCacheIfNecessary;
- (void)_addEntriesToJournal:(id)a0;
- (id)_journalURL;
- (id)_readJournal;
- (id)_readJournalPrunedAndSorted;
- (void)_setCustomDirectoryPath:(id)a0;
- (void)addProductsToInstalledUpdateJournal:(id)a0;
- (id)installedUpdateJournal;
- (id)installedUpdateJournalPrunedAndSorted;

@end
