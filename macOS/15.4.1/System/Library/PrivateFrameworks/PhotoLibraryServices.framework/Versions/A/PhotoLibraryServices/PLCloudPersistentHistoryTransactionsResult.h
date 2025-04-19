@class NSString, NSArray, NSPersistentHistoryToken, PLPersistentHistoryTransactionIterator;

@interface PLCloudPersistentHistoryTransactionsResult : NSObject <PLCloudChangeEventsResult> {
    NSArray *_transactions;
    PLPersistentHistoryTransactionIterator *_transactionIterator;
    id /* block */ _isTransactionSyncableFilter;
}

@property (readonly) long long resultType;
@property (readonly, copy) NSString *currentTokenDescription;
@property (readonly, copy) NSPersistentHistoryToken *lastProcessedCoreDataToken;
@property (readonly) BOOL hasMoreEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_changeCoalescingLimit;
+ (id /* block */)_coalescingLimitTest;
+ (id /* block */)_isTransactionSyncableFilter;
+ (long long)_transactionCoalescingLimit;
+ (id)fetchTransactionsSinceToken:(id)a0 inContext:(id)a1;

- (void).cxx_destruct;
- (id)initWithUnsuccessfulResultType:(long long)a0;
- (id)_nextLocalEventUpToNonCoalescableTransaction;
- (BOOL)_sendLocalEvent:(id)a0 toEnumerationBlock:(id /* block */)a1;
- (void)_updateLastProcessedCoreDataToken;
- (void)enumerateLocalEventsWithBlock:(id /* block */)a0;
- (id)initWithResultType:(long long)a0 transactionIterator:(id)a1;
- (id)initWithSuccesfulTransactionIterator:(id)a0;

@end
