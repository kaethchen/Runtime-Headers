@class NSString, SiriAnalyticsClockInactivityScheduler, SiriAnalyticsSensitiveConditionsObservers, SiriAnalyticsInternalTelemetry, SiriAnalyticsDataCollectionPolicyClockObserver, SiriAnalyticsPreprocessor, SiriAnalyticsMessageResolutionPipeline, SiriAnalyticsMetastore;

@interface AssistantSiriAnalyticsClockWatcher : NSObject <SiriAnalyticsWhiteRoseDelegate> {
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
    SiriAnalyticsSensitiveConditionsObservers *_sensitiveConditionsObservers;
    SiriAnalyticsMessageResolutionPipeline *_messageResolution;
    SiriAnalyticsPreprocessor *_preprocessor;
    SiriAnalyticsMetastore *_metastore;
    SiriAnalyticsClockInactivityScheduler *_inactivityScheduler;
    SiriAnalyticsDataCollectionPolicyClockObserver *_dataPolicyObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_triggerDeviceFixedContextOnStreamUUID:(id)a0;
- (void)_triggerSiriAccountInformation;
- (id)initWithInternalTelemetry:(id)a0 sensitiveConditionsObservers:(id)a1 messageResolution:(id)a2 preprocessor:(id)a3 metastore:(id)a4 scheduler:(id)a5 dataPolicyObserver:(id)a6;
- (void)whiteRose:(id)a0 derivativeClockCreated:(id)a1 rootClock:(id)a2;
- (void)whiteRose:(id)a0 rootClockCreated:(id)a1;
- (void)whiteRose:(id)a0 rootClockDestroyed:(id)a1 reason:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)whiteRose:(id)a0 willCreateRootClock:(id)a1 completion:(id /* block */)a2;

@end
