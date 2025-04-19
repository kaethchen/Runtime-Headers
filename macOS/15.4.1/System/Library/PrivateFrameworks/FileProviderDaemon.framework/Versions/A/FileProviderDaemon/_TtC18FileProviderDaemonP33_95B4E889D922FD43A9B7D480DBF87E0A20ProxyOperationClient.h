@interface _TtC18FileProviderDaemonP33_95B4E889D922FD43A9B7D480DBF87E0A20ProxyOperationClient : NSObject <FPOperationClient> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ idMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)setCancellationHandler:(id)a0;
- (void)cancel;
- (void)operationDidProgressWithInfo:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (id)proxifiedDescription;

@end
