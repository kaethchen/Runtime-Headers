@class FlowClassification;

@interface TrackerPolicy : NSObject {
    struct { unsigned int trafficClass; FlowClassification *flowClassification; } _classMap[12];
    struct { unsigned int mgmtFlags; FlowClassification *flowClassification; } _mgmtFlagsMap[4];
}

@property unsigned int numClassMaps;
@property unsigned int numMgmtFlagsMaps;
@property (retain) FlowClassification *defaultClassification;
@property unsigned long long maximumConnectionsPerHour;

+ (void)initialize;
+ (id)preferredInstance:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addClassification:(id)a0 forTrafficClass:(unsigned int)a1;
- (void)addClassification:(id)a0 forTrafficMgmtFlags:(unsigned int)a1;
- (int)configureInstance:(id)a0;
- (id)flowClassificationFor:(id)a0;
- (id)nonDefaultFlowClassificationFor:(id)a0;

@end
