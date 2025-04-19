@class NSDate, NSString, NSLock, NSMutableDictionary, NSDictionary, NSMutableString, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface CalculateCurrencyCache : NSObject <NSXMLParserDelegate> {
    NSDate *_lastRefreshDate;
    NSString *_currentCurrency;
    NSNumber *_currentRate;
    NSMutableString *_currentString;
    NSMutableDictionary *_mutableCurrencyCache;
}

@property (class, readonly, nonatomic) CalculateCurrencyCache *shared;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializer;
@property (nonatomic) double lastRefreshTimeInternal;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) double refreshInterval;
@property (readonly) unsigned long long uuid;
@property (readonly, nonatomic) NSDate *lastRefreshDate;
@property (readonly, nonatomic) BOOL needsRefresh;
@property (nonatomic) double timeout;
@property (readonly, nonatomic) NSDictionary *currencyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)refresh;
- (BOOL)refreshIfNeeded;
- (id)_consumerSecret;
- (BOOL)_queue_refresh:(double)a0;
- (id)_consumerKey;
- (void)_loadPersistedCurrencyCache;
- (BOOL)_needsRefresh;
- (void)_queue_persistCurrencyCache;
- (BOOL)_queue_refresh;
- (void)_reloadPersistedCurrencyCacheForTesting;
- (id)createCredential;
- (BOOL)refreshWithTimeOut:(float)a0;
- (BOOL)updateCurrencyCacheWithData:(id)a0;

@end
