@class TPSBiomeDataProvider;

@interface TPSBiomeEventsProvider : TPSEventsProvider {
    TPSBiomeDataProvider *_biomeDataProvider;
}

+ (id)_eventSinceDateForContextualEvent:(id)a0;
+ (unsigned long long)_limitForContextualBiomeEvent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_processProviderResults:(id)a0 bookmark:(id)a1 forEvent:(id)a2;
- (void)_registerToGetNotifiedWithEvents:(id)a0 clientIdentifier:(id)a1;
- (id)_registrationIDForEvent:(id)a0;
- (id)_wakingRegistrationIDForEvent:(id)a0;
- (void)deregisterAllEventsForCallback;
- (void)deregisterEventsForCallback:(id)a0;
- (id)initWithBiomeDataProvider:(id)a0;
- (void)queryEvents:(id)a0;
- (void)registerEventsForCallback:(id)a0;
- (void)registerEventsForWakingCallback:(id)a0 clientIdentifier:(id)a1;

@end
