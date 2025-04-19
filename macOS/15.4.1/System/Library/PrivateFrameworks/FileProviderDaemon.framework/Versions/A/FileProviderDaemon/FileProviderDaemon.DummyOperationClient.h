@interface FileProviderDaemon.DummyOperationClient : FPOperation <FPOperationClient> {
    void /* unknown type, empty encoding */ perThumbnailCompletionHandler;
    void /* unknown type, empty encoding */ cancellationHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)setCancellationHandler:(id)a0;
- (void)operationDidProgressWithInfo:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (id)proxifiedDescription;

@end
