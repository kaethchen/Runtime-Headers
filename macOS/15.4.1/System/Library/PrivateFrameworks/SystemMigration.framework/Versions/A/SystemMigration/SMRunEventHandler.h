@class SMRunEventPayload;

@interface SMRunEventHandler : NSObject

@property (retain, nonatomic) SMRunEventPayload *payload;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)recordDataSize:(unsigned long long)a0;
- (void)setGeneralKeys:(id)a0;
- (id)stringForPhase:(unsigned long long)a0;
- (void)addDuration:(double)a0 forStep:(id)a1;
- (id)generateStateTrackerKeyForStep:(id)a0 phase:(unsigned long long)a1;
- (id)getPayloadDictionary;
- (id)getRunType:(id)a0;
- (id)payloadKeyForStepDuration:(id)a0;
- (void)recordCompletion;
- (void)recordDisconnect;
- (void)recordError:(id)a0 errorCode:(long long)a1;
- (void)recordFatalFailure;
- (void)recordInitialConnectionType:(id)a0;
- (void)recordPathingDuration:(double)a0;
- (void)recordStop;
- (void)recordSuccess;
- (void)recordSuspend;
- (void)recordTotalDuration:(double)a0;
- (void)sendEvent;
- (void)setStateTracker:(id)a0 phase:(unsigned long long)a1;

@end
