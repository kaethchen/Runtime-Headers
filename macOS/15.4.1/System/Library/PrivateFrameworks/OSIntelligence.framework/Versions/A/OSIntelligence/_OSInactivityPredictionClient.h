@class NSString, NSXPCConnection;

@interface _OSInactivityPredictionClient : NSObject <_OSInactivityPredictionProtocol_Private, _OSInactivityPredictionProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)modelDescription;
- (void)handleInterruption;
- (id)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withError:(id *)a3;
- (void)initConnection;
- (void)recommendedWaitTimeWithHandler:(id /* block */)a0;
- (id)fixModelOutput:(id)a0;
- (id)validConnection;
- (id)backedUpData;
- (void)backedUpDataWithHandler:(id /* block */)a0;
- (id)deviceUsageDiagnosis;
- (void)deviceUsageDiagnosisWithHandler:(id /* block */)a0;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)hasEnoughInactivityHistory;
- (void)hasEnoughInactivityHistoryWithHandler:(id /* block */)a0;
- (id)inactivityHistoryDiagnosis;
- (void)inactivityHistoryDiagnosisWithHandler:(id /* block */)a0;
- (void)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withHandler:(id /* block */)a3;
- (id)longInactivityPredictionResultWithError:(id *)a0;
- (void)longInactivityPredictionResultWithHandler:(id /* block */)a0;
- (id)longInactivityPredictionResultWithOptions:(long long)a0 withError:(id *)a1;
- (void)longInactivityPredictionResultWithOptions:(long long)a0 withHandler:(id /* block */)a1;
- (void)modelDescriptionWithHandler:(id /* block */)a0;
- (id)modelMetadata;
- (void)modelMetadataWithHandler:(id /* block */)a0;
- (BOOL)overrideRecommendedWaitTimeTo:(double)a0;
- (void)overrideRecommendedWaitTimeTo:(double)a0 withHandler:(id /* block */)a1;
- (double)recommendedWaitTime;
- (BOOL)restoreInactivityModel;
- (void)restoreInactivityModelWithHandler:(id /* block */)a0;
- (BOOL)restoreRecommendedWaitTime;
- (void)restoreRecommendedWaitTimeWithHandler:(id /* block */)a0;
- (id)unfixModelOutput;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;

@end
