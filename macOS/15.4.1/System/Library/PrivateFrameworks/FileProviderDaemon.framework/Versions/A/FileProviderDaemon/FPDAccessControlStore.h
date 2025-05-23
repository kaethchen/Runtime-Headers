@class PQLConnection, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface FPDAccessControlStore : NSObject {
    PQLConnection *_dbConnection;
    NSURL *_databaseBaseURL;
    BOOL _dbIsOpen;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;

+ (id)sharedStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addLRUSignature:(id)a0;
- (id)bookmarkForItemID:(id)a0 consumerIdentifier:(id)a1;
- (id)initWithDatabaseBaseURL:(id)a0;
- (id)keyForBundleIdentifier:(id)a0 generateIfNotFound:(BOOL)a1 keyGenBlock:(id /* block */)a2;
- (BOOL)lookupLRUSignature:(id)a0;
- (void)openDatabase;
- (id)parseUnverifiedBookmark:(id)a0;
- (void)performWithDBConnection:(id /* block */)a0;
- (void)reopenDatabaseAfterUnlock;
- (id)swift_bookmarkForItemID:(id)a0 consumerIdentifier:(id)a1 installSessionIdentifier:(id)a2;
- (id)swift_parseUnverifiedBookmark:(id)a0;
- (id)swift_verifyBookmark:(id)a0 consumerIdentifier:(id)a1 installSessionIdentifier:(id)a2;
- (void)validateDatabase:(id)a0;
- (id)verifyBookmark:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 consumerIdentifier:(id)a2;

@end
