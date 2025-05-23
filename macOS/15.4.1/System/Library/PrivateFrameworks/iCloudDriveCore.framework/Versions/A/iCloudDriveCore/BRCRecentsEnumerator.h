@class br_pacer, NSString, BRCAccountSession, brc_task_tracker, NSObject, BRCPQLConnection;
@protocol OS_dispatch_queue;

@interface BRCRecentsEnumerator : NSObject <BRCModule> {
    BRCAccountSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    BRCPQLConnection *_indexingDB;
    br_pacer *_pacer;
    unsigned long long _flushedNotifRank;
    brc_task_tracker *_tracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)resume;
- (void)cancel;
- (void)_deleteAllRanks;
- (void)_readyForIndexingWithAckedRank:(unsigned long long)a0;
- (void)_activeSetDidChange;
- (id)_deletedDocIdResultSetFromNotifRank:(unsigned long long)a0 batchSize:(unsigned long long)a1;
- (void)_enumerateChangesFromChangeToken:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_handleResetForRowID:(long long)a0 notifRank:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_signalActiveSetDidChange;
- (id)changeTokenForNotifRank:(unsigned long long)a0;
- (char)computeTombstoneEntryType:(id)a0;
- (void)enumerateChangesFromChangeToken:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)garbageCollectRanksPreceding:(unsigned long long)a0;
- (BOOL)hasDeletedFileObjectID:(id)a0;
- (id)initWithAccountSession:(id)a0;
- (void)itemWasDeletedWithFileObjectID:(id)a0 notifRank:(unsigned long long)a1;
- (void)maxNotifRankWasFlushed;

@end
