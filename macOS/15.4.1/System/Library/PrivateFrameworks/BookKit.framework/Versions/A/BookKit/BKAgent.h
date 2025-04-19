@class NSDictionary, NSXPCConnection, NSURL, NSMutableSet, NSObject, BKAgentServiceDelegate;
@protocol OS_dispatch_queue, BKAgentService;

@interface BKAgent : NSObject {
    BKAgentServiceDelegate *_serviceDelegate;
    NSMutableSet *_interruptionHandlers;
    NSDictionary *_libraryTokens;
    int _notifyToken;
}

@property (retain, nonatomic) id<BKAgentService> agentService;
@property (retain, nonatomic) NSXPCConnection *agentServiceConnection;
@property (readonly, nonatomic) NSURL *defaultLibraryDirectory;
@property (readonly, nonatomic) NSURL *currentLibraryDirectory;
@property (readonly, nonatomic) BOOL libraryOnline;
@property (readonly, nonatomic) unsigned long long libraryVersion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;
@property (readonly, nonatomic) NSURL *downloadsDirectory;
@property (readonly, nonatomic) NSURL *booksDirectory;

+ (id)_securityScopedURLWithTokenPair:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithError:(out id *)a0;
- (void)addInterruptionHandler:(id /* block */)a0;
- (void)shutdown:(id /* block */)a0;
- (void)rebuildLibrary:(id /* block */)a0;
- (id)_startupService;
- (void)setUseriCloudSetting:(BOOL)a0 withReply:(id /* block */)a1;
- (void)_agentServiceRestarted;
- (void)_bookLibraryUpdated:(id)a0;
- (void)_installServiceRestartListener;
- (id)_libraryDirectory:(id)a0;
- (void)_resetLibraryTokens;
- (void)addBookLibrarySaveListener:(id /* block */)a0;
- (void)addChangeListener:(id /* block */)a0;
- (void)applyPendingUpdates:(id /* block */)a0;
- (void)chooseLibrary:(id)a0 withReply:(id /* block */)a1;
- (void)evictBook:(id)a0 withReply:(id /* block */)a1;
- (void)examineBook:(id)a0 includeCover:(BOOL)a1 withReply:(id /* block */)a2;
- (void)fetchBookAssetIDs:(id /* block */)a0;
- (void)fetchBookAssetIDsExcluding:(unsigned long long)a0 replyBlock:(id /* block */)a1;
- (void)fetchBookAssetIDsIncluding:(unsigned long long)a0 replyBlock:(id /* block */)a1;
- (void)fetchBooks:(id /* block */)a0;
- (void)fetchBooksPartsWithAssetID:(id)a0 result:(id /* block */)a1;
- (void)fetchBooksWithAssetIDs:(id)a0 result:(id /* block */)a1;
- (void)fetchCompleteBooks:(id /* block */)a0;
- (void)fetchCompleteBooksWithAssetIDs:(id)a0 result:(id /* block */)a1;
- (void)fetchImportingBooks:(id /* block */)a0;
- (void)fetchRedactedBooks:(id /* block */)a0;
- (void)fetchRedactedBooksWithAssetIDs:(id)a0 results:(id /* block */)a1;
- (void)fetchSampleForAssetID:(id)a0 withReply:(id /* block */)a1;
- (void)fixOrphanedFiles:(id /* block */)a0;
- (void)getUseriCloudSettingWithReply:(id /* block */)a0;
- (void)importBook:(id)a0 withMetadata:(id)a1 withReply:(id /* block */)a2;
- (void)importBook:(id)a0 withReply:(id /* block */)a1;
- (void)makeBookUbiquitous:(id)a0 withReply:(id /* block */)a1;
- (void)migrateBook:(id)a0 withMetadata:(id)a1 withCopy:(BOOL)a2 withReply:(id /* block */)a3;
- (void)moveAsideLibraryStore:(id)a0 withReply:(id /* block */)a1;
- (void)moveLibrary:(id)a0 withReply:(id /* block */)a1;
- (void)performUbiquityMigration:(id /* block */)a0;
- (void)prepareToOpenAsset:(id)a0 withReply:(id /* block */)a1;
- (void)prioritizeImport:(id)a0 withReply:(id /* block */)a1;
- (void)reconnectToLibrary:(id /* block */)a0;
- (void)redactBook:(id)a0 withReply:(id /* block */)a1;
- (void)removeBook:(id)a0 withReply:(id /* block */)a1;
- (void)removeBookLibrarySaveListener:(id /* block */)a0;
- (void)removeChangeListener:(id /* block */)a0;
- (void)removeInterruptionHandler:(id /* block */)a0;
- (void)removeRedactedBook:(id)a0 withReply:(id /* block */)a1;
- (void)resetLibraryTokens;
- (void)setUbiquityDirectoriesSubpath:(id)a0 withReply:(id /* block */)a1;
- (void)setUserDefaultsEnabled:(BOOL)a0 reply:(id /* block */)a1;
- (void)simulateUbiquityDidLoadWithFilesPaths:(id)a0 reply:(id /* block */)a1;
- (void)simulateUbiquityFileDidBecomeAvailableAtPath:(id)a0 withReply:(id /* block */)a1;
- (void)simulateUbiquityFileDidBecomeUnavilableAtPath:(id)a0 withReply:(id /* block */)a1;
- (void)simulateUploadEnd:(id)a0 withReply:(id /* block */)a1;
- (void)simulateUploadFailure:(id)a0 withReply:(id /* block */)a1;
- (void)simulateUploadProgress:(id)a0 withReply:(id /* block */)a1;
- (void)trashBook:(id)a0 withReply:(id /* block */)a1;
- (void)uncompressBook:(id)a0 withReply:(id /* block */)a1;
- (void)updateBook:(id)a0 withMetadata:(id)a1 withReply:(id /* block */)a2;
- (void)updateUseriCloudSetting:(BOOL)a0 withReply:(id /* block */)a1;
- (void)validateAuthorization:(id /* block */)a0;

@end
