@class NSMutableDictionary;

@interface RTMapItemProviderBluePOIPerformanceMetrics : NSObject

@property (readonly, nonatomic) NSMutableDictionary *metrics;

+ (id)_bestMapItemForQuery:(id)a0 wifiFingerprintLabelType:(long long)a1;
+ (void)_getDominantStreakForResults:(id)a0 dominantKey:(id *)a1 largestSameResultCount:(unsigned long long *)a2 hasDominantResult:(BOOL *)a3;
+ (id)_mapItemDictionaryforResults:(id)a0 wifiFingerprintLabelType:(long long)a1;
+ (void)submitMetricsWithNonZeroAccessPointsFingerprintsCount:(unsigned long long)a0 zeroAccessPointsFingerprintsCount:(unsigned long long)a1 fingerprintsCount:(unsigned long long)a2 queryCount:(unsigned long long)a3 firstResultQueryCount:(unsigned long long)a4 results:(id)a5 earlyStopQueryCount:(unsigned long long)a6 earlyStopQueryResult:(id)a7 bestQueryResult:(id)a8 error:(id)a9 visitInterval:(double)a10 visitSource:(long long)a11;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNonZeroAccessPointsFingerprintsCount:(unsigned long long)a0 zeroAccessPointsFingerprintsCount:(unsigned long long)a1 fingerprintsCount:(unsigned long long)a2 queryCount:(unsigned long long)a3 firstResultQueryCount:(unsigned long long)a4 results:(id)a5 earlyStopQueryCount:(unsigned long long)a6 earlyStopQueryResult:(id)a7 bestQueryResult:(id)a8 error:(id)a9 visitInterval:(double)a10 visitSource:(long long)a11;
- (void)submitMetrics;

@end
