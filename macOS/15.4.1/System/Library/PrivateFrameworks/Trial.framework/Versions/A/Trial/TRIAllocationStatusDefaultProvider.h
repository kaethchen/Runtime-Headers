@class _PASLock, _PASXPCClientHelper;

@interface TRIAllocationStatusDefaultProvider : NSObject <TRIAllocationStatusProvider> {
    _PASXPCClientHelper *_clientHelper;
    _PASXPCClientHelper *_internalHelper;
    _PASLock *_lock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_defaultQueue;
- (id)syncProxyWithErrorHandler:(id /* block */)a0;
- (id)activeBMLTInformationWithError:(id *)a0;
- (id)activeExperimentInformationWithError:(id *)a0;
- (id)addStatusUpdateHandlerForEnvironment:(int)a0 queue:(id)a1 block:(id /* block */)a2;
- (BOOL)enumerateActiveExperimentsForEnvironment:(int)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)enumerateActiveRolloutsWithError:(id *)a0 block:(id /* block */)a1;
- (id)enumerateExperimentStatusesForEnvironment:(int)a0 privacyFilterPolicy:(unsigned char)a1 startingFromCursor:(id)a2 error:(id *)a3 block:(id /* block */)a4;
- (id)enumerateExperimentStatusesForEnvironment:(int)a0 startingFromCursor:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (id)enumerateExperimentStatusesForTestingPrivacyFilterPolicyWithEnvironment:(int)a0 startingFromCursor:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateSampledActiveExperimentsForEnvironment:(int)a0 correlationID:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)enumerateSampledActiveRolloutsForCorrelationID:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)removeUpdateHandlerForToken:(id)a0;

@end
