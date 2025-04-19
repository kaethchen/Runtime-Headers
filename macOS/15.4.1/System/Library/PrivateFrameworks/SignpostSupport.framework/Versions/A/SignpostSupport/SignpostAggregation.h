@class NSString, NSMutableDictionary, NSArray, NSDate, NSDictionary;

@interface SignpostAggregation : NSObject <NSCopying, SignpostJSONRepresentable>

@property (retain, nonatomic) NSMutableDictionary *_groupToTypeToDuration;
@property (retain, nonatomic) NSMutableDictionary *_groupToTypeToMeasuredValue;
@property (nonatomic) unsigned long long earliestMCT;
@property (nonatomic) unsigned long long latestMCT;
@property (readonly, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *aggregationDescription;
@property (readonly, nonatomic) NSString *signatureString;
@property (readonly, nonatomic) NSArray *rawIntervals;
@property (readonly, nonatomic) BOOL telemetryEnabled;
@property (readonly, nonatomic) unsigned long long durationNs;
@property (readonly, nonatomic) double durationMs;
@property (readonly, nonatomic) double durationSeconds;
@property (readonly, nonatomic) NSDate *earliestDate;
@property (readonly, nonatomic) NSDate *latestDate;
@property (readonly, nonatomic) NSDictionary *groupNameToGroupDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_aggregationDescriptionStringForInterval:(id)a0;
+ (id)_signatureForSubsystem:(id)a0 category:(id)a1 name:(id)a2 aggregationDescription:(id)a3;
+ (id)_timeRangeDictForInterval:(id)a0;
+ (id)sumOfAggregation0:(id)a0 aggregation1:(id)a1 errorOut:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)jsonDescription:(unsigned long long)a0;
- (id)addAggregation:(id)a0;
- (id)_processMetadataSegment:(id)a0 parser:(id)a1;
- (id)_telemetryEnabledGroupDurations;
- (id)_canAdd:(id)a0;
- (id)_coreAnalyticsEventName;
- (id)_coreAnalyticsEventPayloadDictionary;
- (void)_fixupGroupsAndDurationsWithErrors:(id)a0;
- (id)_handleCountSegment:(id)a0;
- (id)_handleValueSegment:(id)a0 placeholderType:(unsigned char)a1 parser:(id)a2;
- (id)_initWithSubsystem:(id)a0 category:(id)a1 name:(id)a2 rawIntervals:(id)a3 durationNs:(unsigned long long)a4;
- (id)_processDescription:(id)a0;
- (id)_processInterval:(id)a0;
- (void)_sortRawIntervals;
- (id)_telemetryEnabledGroups;
- (id)_updateValueDict:(id)a0 withParser:(id)a1 placeholderType:(unsigned char)a2 class:(Class)a3;
- (void)dropRawIntervals;
- (id)initWithInterval:(id)a0 errorsOut:(id *)a1;

@end
