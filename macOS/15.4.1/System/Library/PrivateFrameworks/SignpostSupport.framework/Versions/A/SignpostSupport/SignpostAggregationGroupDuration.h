@class SignpostAggregationValueStats, NSNumber, NSString;

@interface SignpostAggregationGroupDuration : NSObject <_SignpostAggregationValue, NSCopying, _SignpostAggregationCAPayloadGenerator>

@property (readonly, nonatomic) SignpostAggregationValueStats *stats;
@property (readonly, nonatomic) BOOL _isTotalDuration;
@property (readonly, nonatomic) NSNumber *_durationValue;
@property (nonatomic) BOOL telemetryEnabled;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) double totalDurationNs;
@property (readonly, nonatomic) double totalDurationMs;
@property (readonly, nonatomic) double totalDurationSeconds;
@property (readonly, nonatomic) double averageDurationNs;
@property (readonly, nonatomic) double averageDurationMs;
@property (readonly, nonatomic) double averageDurationSeconds;
@property (readonly, nonatomic) NSNumber *minDurationNs;
@property (readonly, nonatomic) NSNumber *minDurationMs;
@property (readonly, nonatomic) NSNumber *minDurationSeconds;
@property (readonly, nonatomic) NSNumber *maxDurationNs;
@property (readonly, nonatomic) NSNumber *maxDurationMs;
@property (readonly, nonatomic) NSNumber *maxDurationSeconds;
@property (readonly, nonatomic) NSNumber *stdDevNs;
@property (readonly, nonatomic) NSNumber *stdDevMs;
@property (readonly, nonatomic) NSNumber *stdDevSeconds;
@property (readonly, nonatomic) NSString *unit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sumOfDuration0:(id)a0 duration1:(id)a1 errorOut:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)max;
- (id)min;
- (id)_dictionaryRepresentation;
- (id)total;
- (id)_coreAnalyticsMaxFieldName;
- (id)_coreAnalyticsMinFieldName;
- (id)_coreAnalyticsStdDevFieldName;
- (id)_coreAnalyticsTotalFieldName;
- (id)_initWithGroup:(id)a0 type:(id)a1;
- (id)_initWithParser:(id)a0;
- (BOOL)shouldAdd;
- (id)stddev;

@end
