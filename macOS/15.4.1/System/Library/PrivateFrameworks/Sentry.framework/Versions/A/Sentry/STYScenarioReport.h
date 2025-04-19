@class NSString, NSMutableDictionary, SignpostInterval, STYUserScenario;

@interface STYScenarioReport : NSObject

@property (retain) NSString *metadata;
@property (retain) SignpostInterval *interval;
@property (retain) NSMutableDictionary *symptomsSignature;
@property (readonly) float observedLatencyInMs;
@property float targetLatencyInMs;
@property (readonly) float observedFps;
@property (readonly) float targetFps;
@property (readonly) unsigned long long scenarioStartTime;
@property (readonly) unsigned long long scenarioEndTime;
@property (readonly) NSString *issueCategory;
@property (readonly) STYUserScenario *scenario;

+ (id)reportForSystemWake:(id)a0 wakeSubtype:(id)a1 observedLatencyInMs:(float)a2 error:(id *)a3;
+ (id)reportFromSignpostEvent:(id)a0 error:(id *)a1;
+ (id)reportFromSignpostInterval:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)convertDictionaryToString:(id)a0;
- (id)initWithLifecycleScenarioAndLatency:(id)a0 wakeType:(id)a1 wakeSubtype:(id)a2 observedLatencyInMs:(float)a3;
- (id)initWithScenario:(id)a0;
- (id)initWithSignpostEvent:(id)a0 scenario:(id)a1 error:(id *)a2;
- (id)initWithSignpostInterval:(id)a0 scenario:(id)a1 error:(id *)a2;
- (id)symptomsSignatureForReport;

@end
