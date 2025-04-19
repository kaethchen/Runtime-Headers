@class NSArray, NSDictionary, NSString, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SSCAMetalLayerClientSessionAccumulator : NSObject <SignpostJSONRepresentable>

@property (readonly, nonatomic) NSMutableArray *mutableBootSessions;
@property (readonly, nonatomic) NSMutableArray *mutableProcessingErrors;
@property (readonly, nonatomic) NSArray *bootSessions;
@property (readonly, nonatomic) NSDictionary *processNameToClientSessions;
@property (readonly, nonatomic) NSArray *processingErrors;
@property (readonly, nonatomic) NSDate *earliestDateProcessed;
@property (readonly, nonatomic) NSDate *latestDateProcessed;
@property (copy, nonatomic) id /* block */ layerStatsProcessingBlock;
@property (copy, nonatomic) id /* block */ resourceUsageStatsProcessingBlock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingBlockTargetQueue;
@property (readonly, nonatomic) BOOL includeTimelines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coreAnalyticsEventName;
+ (void)addNeededSCToAllowlist:(id)a0;
+ (id)coreAnalyticsProcessingMetadataName;
+ (BOOL)filterSupportsCAMetalLayerClientSessionAccumulation:(id)a0;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)processEvent:(id)a0;
- (id)jsonDescription:(unsigned long long)a0;
- (void)_processFPEvent:(id)a0;
- (void)_processFPInterval:(id)a0;
- (void)_processLayerMetadata:(id)a0;
- (void)_processOnGlassDrawableInterval:(id)a0;
- (id)configuredExtractor;
- (id)coreAnalyticsEvents;
- (id)initWithIncludeTimelines:(BOOL)a0;
- (void)processDeviceReboot;
- (void)processInterval:(id)a0;

@end
