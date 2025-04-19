@class NSDictionary;

@interface Calculate.StocksKitCurrencyCacheImpl : Calculate.StocksKitCurrencyCache {
    void /* unknown type, empty encoding */ currencyDataLock;
    void /* unknown type, empty encoding */ lastRefreshDateLock;
}

@property (nonatomic, readonly) BOOL needsRefresh;
@property (nonatomic, readonly) NSDictionary *currencyData;

- (id)init;
- (void).cxx_destruct;
- (BOOL)refreshSynchronously;
- (BOOL)refreshSynchronouslyWithTimeout:(double)a0;
- (void)refreshWithCompletionHandler:(void (^)(BOOL))a0;
- (void)refreshWithTimeout:(double)a0 completionHandler:(void (^)(BOOL))a1;

@end
