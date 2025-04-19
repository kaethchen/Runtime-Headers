@interface CalculateConverter : NSObject

+ (BOOL)refreshCurrencyCache;
+ (id)currencyCacheLastRefreshDate;
+ (BOOL)needsRefresh;
+ (BOOL)refreshCurrencyCacheIfNeeded;

@end
