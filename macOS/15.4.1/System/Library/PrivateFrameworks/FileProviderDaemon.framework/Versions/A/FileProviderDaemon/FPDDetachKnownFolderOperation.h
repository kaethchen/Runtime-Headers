@class NSArray, FPDRequest, FPDServer;

@interface FPDDetachKnownFolderOperation : FPOperation {
    NSArray *_knownFolders;
    FPDServer *_server;
    FPDRequest *_request;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithKnownFolder:(id)a0 server:(id)a1 request:(id)a2;

@end
