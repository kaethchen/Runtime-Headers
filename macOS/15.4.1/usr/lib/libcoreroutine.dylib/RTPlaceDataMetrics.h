@class NSArray, RTLocation, NSString, NSDate;

@interface RTPlaceDataMetrics : RTMetric <RTMetricProtocol>

@property (nonatomic) double distanceThreshold;
@property (retain, nonatomic) NSArray *visitArray;
@property (retain, nonatomic) RTLocation *locationHome;
@property (retain, nonatomic) RTLocation *locationWork;
@property (retain, nonatomic) NSArray *locationsOfOthers;
@property (retain, nonatomic) NSDate *startDateTime;
@property (retain, nonatomic) NSDate *endDateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { char *x0; })event;
+ (id)DataSourceToString:(unsigned long long)a0;
+ (id)meanOf:(id)a0;
+ (id)binArrayDuetEventDuration;
+ (id)binArrayPercentage;
+ (id)booleanKeys;
+ (id)bucketedKeys;
+ (id)calculateMLFeaturesUsingBiomeManager:(id)a0 intervalDictionary:(id)a1 startDate:(id)a2 endDate:(id)a3 createBucketedFeatures:(BOOL)a4;
+ (id)doubleKeys;
+ (id)generateDictionaryOfOldMetricsWithLearnedLocationStore:(id)a0 locationsOfInterest:(id)a1 homeMapItem:(id)a2 workMapItem:(id)a3 locationsOfOthers:(id *)a4;
+ (id)integerKeys;
+ (id)labelAnEventInterval:(id)a0 basedOnIntervalDict:(id)a1;
+ (id)medianOf:(id)a0;
+ (id)standardDeviationOf:(id)a0;
+ (id)supportedMetricKeys;

- (void).cxx_destruct;
- (void)calculateAndSetVisitMetrics;
- (long long)convertDateTime2SecondsBasedOnCalendar:(id)a0 dateTime:(id)a1;
- (long long)daysBetweenDate:(id)a0 andDate:(id)a1;
- (id)findHomeWorkOthersIntervals;
- (id)initWithLoggingEnabled:(BOOL)a0;
- (id)initWithVisitArray:(id)a0 distanceThreshold:(double)a1 locationHome:(id)a2 locationWork:(id)a3 locationsOfOthers:(id)a4 startDateTime:(id)a5 endDateTime:(id)a6;
- (long long)numberOfWeeksBetweenDatesBasedOnCalendar:(id)a0 startDateTime:(id)a1 endDateTime:(id)a2;
- (id)removeTimeFromDateTime:(id)a0 withCalendar:(id)a1;
- (void)setCurrentInferenceReplayableMetricsFromDict:(id)a0;
- (void)setDerivedMetrics;
- (void)setMLMetricsFromFeaturesDict:(id)a0 sourceName:(unsigned long long)a1;
- (BOOL)submitMetricsWithError:(id *)a0;

@end
