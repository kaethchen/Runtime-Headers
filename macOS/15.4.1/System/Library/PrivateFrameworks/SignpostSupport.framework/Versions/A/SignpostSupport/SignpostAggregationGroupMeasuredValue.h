@class SignpostAggregationValueStats, NSString, NSNumber;

@interface SignpostAggregationGroupMeasuredValue : NSObject <_SignpostAggregationValue, _SignpostAggregationCAPayloadGenerator>

@property (readonly, nonatomic) SignpostAggregationValueStats *stats;
@property (nonatomic) BOOL telemetryEnabled;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *unit;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSNumber *average;
@property (readonly, nonatomic) NSNumber *total;
@property (readonly, nonatomic) NSNumber *min;
@property (readonly, nonatomic) NSNumber *max;
@property (readonly, nonatomic) NSNumber *stddev;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sumOfValue0:(id)a0 value1:(id)a1 errorOut:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_coreAnalyticsMaxFieldName;
- (id)_coreAnalyticsMinFieldName;
- (id)_coreAnalyticsStdDevFieldName;
- (id)_coreAnalyticsTotalFieldName;
- (id)_initWithParser:(id)a0;
- (id)initWithGroupName:(id)a0 type:(id)a1 unit:(id)a2;
- (BOOL)shouldAdd;

@end
