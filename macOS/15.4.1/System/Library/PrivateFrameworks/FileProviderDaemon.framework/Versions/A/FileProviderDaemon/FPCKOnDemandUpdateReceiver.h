@protocol FPDDomainBackend;

@interface FPCKOnDemandUpdateReceiver : NSObject <FPCKUpdateReceiving> {
    id<FPDDomainBackend> _backend;
}

- (void).cxx_destruct;
- (id)initWithDomainBackend:(id)a0;
- (void)saveCheckpointWithReport:(id)a0;
- (void)sendDiagnosticsForItemIDs:(id)a0;
- (void)shouldPauseWithCompletion:(id /* block */)a0;

@end
