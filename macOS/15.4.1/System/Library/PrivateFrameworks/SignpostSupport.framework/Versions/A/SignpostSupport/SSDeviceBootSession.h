@class NSMutableDictionary, NSDictionary, NSString, SSCAMetalLayerClientSessionAccumulator, NSMutableArray, NSDate;

@interface SSDeviceBootSession : NSObject <SignpostJSONRepresentable>

@property (readonly, nonatomic) NSMutableArray *mutableChronologicalClientSessions;
@property (retain, nonatomic) NSDate *earliestDate;
@property (retain, nonatomic) NSDate *latestDate;
@property (readonly, weak, nonatomic) SSCAMetalLayerClientSessionAccumulator *parentAccumulator;
@property (readonly, nonatomic) NSMutableDictionary *mutableProcessIDToClientSession;
@property (readonly, nonatomic) NSDictionary *processIDToClientSession;
@property (readonly, nonatomic) NSDictionary *processNameToClientSessions;
@property (readonly, nonatomic) BOOL includeTimelines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)jsonDescription:(unsigned long long)a0;
- (id)_clientSessionForPID:(int)a0 timebaseRatio:(double)a1;
- (void)_updateDates:(id)a0;
- (id)coreAnalyticsEvents;
- (id)initWithIncludeTimelines:(BOOL)a0;

@end
