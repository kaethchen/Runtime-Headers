@class AeroMLTracerSpanEvent, AeroMLTracerSession;

@interface AeroMLTracerSpan : NSObject

@property (retain, nonatomic) AeroMLTracerSession *traceSession;
@property (nonatomic) BOOL isEnded;
@property (nonatomic) BOOL isStarted;
@property (nonatomic) unsigned long long intervalId;
@property (retain, nonatomic) AeroMLTracerSpanEvent *spanEvent;

- (void).cxx_destruct;
- (void)start;
- (void)end;
- (void)addAttributes:(id)a0;
- (id)getProcessName;
- (void)addDeviceIdentifier:(id)a0;
- (void)addTrialDeploymentId:(id)a0 trialExperimentId:(id)a1 trialTreatmentId:(id)a2;
- (id)createSubEventWithName:(id)a0 details:(id)a1 attributes:(id)a2;
- (id)createSubSpanWithName:(id)a0;
- (void)emitPETEvent;
- (unsigned int)getMonotonicTimeInMilliseconds;
- (id)getSpanId;
- (id)getSpanIdFromIntervalId:(unsigned long long)a0;
- (id)initSpanWithSpanName:(id)a0 traceSession:(id)a1 parentSpanId:(id)a2;
- (void)logDebugEventWithName:(id)a0 details:(id)a1 attributes:(id)a2;
- (void)logErrorEventWithName:(id)a0 details:(id)a1 attributes:(id)a2;
- (void)logErrorMessageWithCA:(id)a0;
- (void)logInfoEventWithName:(id)a0 details:(id)a1 attributes:(id)a2;
- (void)logInfoMessageWithCA:(id)a0;
- (void)logSchedulingInformation;
- (id)serializeAttributes:(id)a0;
- (id)stringForQoSClass:(unsigned int)a0;

@end
