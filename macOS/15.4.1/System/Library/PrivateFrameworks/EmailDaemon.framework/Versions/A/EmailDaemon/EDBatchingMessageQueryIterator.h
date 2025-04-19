@class NSString, EDMessagePersistence, EMQuery, EFCancelationToken, EFQueue, NSMutableSet, EMMailboxScope, NSMutableArray;

@interface EDBatchingMessageQueryIterator : NSObject <EFCancelable> {
    EDMessagePersistence *_messagePersistence;
    EMMailboxScope *_mailboxScope;
    EMQuery *_query;
    EFCancelationToken *_cancelationToken;
    EFQueue *_messageQueue;
    long long _remaining;
    NSMutableSet *_seenGlobalMessages;
    id /* block */ _handler;
    NSMutableArray *_batchedMessages;
    unsigned long long _batchSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)flush;
- (BOOL)shouldCancel;
- (id)_deduplicateMessages:(id)a0;
- (void)_processMessages:(id)a0 forceFlush:(BOOL)a1;
- (void)addMessage:(id)a0 withDatabaseID:(long long)a1;
- (id)initWithMessagePersistence:(id)a0 query:(id)a1 batchSize:(long long)a2 firstBatchSize:(long long)a3 limit:(long long)a4 handler:(id /* block */)a5;

@end
