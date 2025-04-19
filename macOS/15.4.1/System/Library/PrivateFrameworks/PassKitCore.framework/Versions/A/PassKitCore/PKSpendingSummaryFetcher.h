@class NSMutableDictionary, NSCache, PKAccountUser, NSDate, NSObject, NSMutableArray, PKSpendingInsightsFetcher, NSCalendar, NSString, NSMutableOrderedSet, NSHashTable, PKAccount, NSArray, PKTransactionSourceCollection, PKPaymentDefaultDataProvider;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKSpendingSummaryFetcher : NSObject <PKPaymentDataProviderDelegate, PKAccountServiceObserver> {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKAccount *_account;
    NSCache *_weeklySummaryItemsPerStartDate;
    NSCache *_monthlySummaryItemsPerStartDate;
    NSCache *_yearlySummaryItemsPerStartDate;
    NSDate *_oldestTransactionDate;
    NSDate *_newestTransactionDate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    NSCalendar *_currentCalendar;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestsLock;
    NSMutableOrderedSet *_pendingRequests;
    NSMutableDictionary *_blockPendingRequests;
    BOOL _processingRequest;
    NSArray *_statements;
    PKSpendingInsightsFetcher *_insightsFetcher;
    NSDate *_earliestSpendingByAnotherUser;
    NSObject<OS_dispatch_source> *_pendingTransactionTimer;
    NSMutableArray *_pendingTransactionDates;
}

@property (readonly, nonatomic) PKAccountUser *accountUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sortedTransactions:(id)a0 ascending:(BOOL)a1;
+ (id)_spendingCategoriesFromTransactions:(id)a0 currencyCode:(id)a1;
+ (id)_spendingMerchantsFromTransaction:(id)a0 currencyCode:(id)a1;
+ (id)_summaryWithTransactions:(id)a0 currency:(id)a1 type:(unsigned long long)a2 startDate:(id)a3 endDate:(id)a4 lastSummary:(id)a5 altDSID:(id)a6;
+ (id)nextStartOfWeekFromDate:(id)a0;
+ (id)previousStartOfWeekFromDate:(id)a0;
+ (id)summaryWithTransactions:(id)a0 transactionSourceCollection:(id)a1 accountUser:(id)a2 currency:(id)a3 type:(unsigned long long)a4 startDate:(id)a5 endDate:(id)a6 lastSummary:(id)a7;

- (void)dealloc;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)_accessObserversWithHandler:(id /* block */)a0;
- (void)_addInsightsToSummary:(id)a0 completion:(id /* block */)a1;
- (void)_addInterestToSummaryIfNecessary:(id)a0 withLastPeriodChange:(BOOL)a1 completion:(id /* block */)a2;
- (id)_cacheForType:(unsigned long long)a0;
- (id)_cachedSpendingSummaryStartingWithDate:(id)a0 type:(unsigned long long)a1 withLastPeriodChange:(BOOL)a2;
- (void)_fetchStatementsIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_invalidateSummariesForPendingTransactionUpdates;
- (void)_processNextRequest;
- (void)_resetCurrentCalendar;
- (void)_spendingSummaryStartingWithDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2 withLastPeriodChange:(BOOL)a3 completion:(id /* block */)a4;
- (void)_startTimerIfNecessary;
- (void)_timeZoneChanged:(id)a0;
- (void)availableSummaries:(id /* block */)a0;
- (id)cachedSpendingSummaryStartingWithDate:(id)a0 type:(unsigned long long)a1;
- (id)initWithTransactionSourceCollection:(id)a0 account:(id)a1 accountUser:(id)a2;
- (void)spendingSummaryStartingWithDate:(id)a0 type:(unsigned long long)a1 includingLastPeriodChange:(BOOL)a2 completion:(id /* block */)a3;
- (void)statementsChangedForAccountIdentifier:(id)a0;
- (void)transactionSourceIdentifier:(id)a0 didReceiveTransaction:(id)a1;

@end
