@interface AASessionManager : NSObject <AAFlushable> {
    void /* unknown type, empty encoding */ sessionManager;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ tracker;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ processorManager;

- (id)init;
- (void).cxx_destruct;
- (void)endSession;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (void)transaction:(id /* block */)a0;
- (void)endSync;
- (void)endSessionWithEndDate:(id)a0 completion:(id /* block */)a1;
- (void)flushWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithAccessQueue:(id)a0;
- (id)initWithAccessQueue:(id)a0 privacyValidationProvider:(id)a1;
- (id)initWithAccessQueue:(id)a0 privacyValidationProvider:(id)a1 diagnosticsConsentProvider:(id)a2;
- (id)initWithPrivacyValidationProvider:(id)a0;
- (id)initWithPrivacyValidationProvider:(id)a0 diagnosticsConsentProvider:(id)a1;
- (void)pushSessionData:(id)a0;
- (void)pushSessionData:(id)a0 submitEventQueues:(BOOL)a1;
- (void)pushSessionData:(id)a0 traits:(id)a1;
- (void)pushSessionData:(id)a0 traits:(id)a1 submitEventQueues:(BOOL)a2;
- (void)startSessionForKind:(long long)a0 withName:(id)a1;
- (void)startSessionForKind:(long long)a0 withName:(id)a1 identifier:(id)a2;
- (void)startSessionForKind:(long long)a0 withName:(id)a1 identifier:(id)a2 startDate:(id)a3;
- (void)startSessionForKind:(long long)a0 withName:(id)a1 identifier:(id)a2 startDate:(id)a3 timestampJitter:(id)a4;
- (void)startSessionForKind:(long long)a0 withName:(id)a1 identifier:(id)a2 startDate:(id)a3 timestampJitter:(id)a4 timeDurationGranularity:(long long)a5;
- (void)startSessionForKind:(long long)a0 withName:(id)a1 startDate:(id)a2;

@end
