@class TRIXPCServerContextPromise;

@interface TRIXPCStatusRequestHandler : NSObject <TRIXPCStatusServiceProtocol> {
    TRIXPCServerContextPromise *_promise;
    struct { unsigned int val[8]; } _auditToken;
}

- (void).cxx_destruct;
- (void)activeEvaluationsForBMLTWithCompletion:(id /* block */)a0;
- (void)activeEvaluationsForMLRuntimeWithCompletion:(id /* block */)a0;
- (void)bmltRecordsWithCompletion:(id /* block */)a0;
- (void)evaluationHistoryRecordsForMLRuntimeWithLimit:(unsigned long long)a0 newerThanDate:(id)a1 completion:(id /* block */)a2;
- (void)experimentHistoryRecordsWithLimit:(unsigned long long)a0 newerThanDate:(id)a1 privacyFilterPolicy:(unsigned char)a2 deploymentEnvironment:(int)a3 completion:(id /* block */)a4;
- (void)experimentRecordsWithDeploymentEnvironments:(id)a0 privacyFilterPolicy:(unsigned char)a1 completion:(id /* block */)a2;
- (void)rolloutAllocationStatusWithPrivacyFilterPolicy:(unsigned char)a0 completion:(id /* block */)a1;
- (void)rolloutRecordsWithCompletion:(id /* block */)a0;
- (id)initWithPromise:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;

@end
