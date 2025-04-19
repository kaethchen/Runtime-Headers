@class MTRDownloads;

@interface MTRDiagnosticLogsDownloader : NSObject

@property (readonly) struct DiagnosticLogsDownloaderBridge { void /* function */ **x0; id x1; } *bridge;
@property (retain, nonatomic) MTRDownloads *downloads;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)abortDownloadsForController:(id)a0;
- (void)downloadLogFromNodeWithID:(id)a0 controller:(id)a1 type:(long long)a2 timeout:(double)a3 queue:(id)a4 completion:(id /* block */)a5;
- (struct BDXTransferServerDelegate { void /* function */ **x0; } *)getBridge;
- (void)handleBDXTransferSessionBeginForFileDesignator:(id)a0 fabricIndex:(id)a1 nodeID:(id)a2 completion:(id /* block */)a3 abortHandler:(id /* block */)a4;
- (void)handleBDXTransferSessionDataForFileDesignator:(id)a0 fabricIndex:(id)a1 nodeID:(id)a2 data:(id)a3 completion:(id /* block */)a4;
- (void)handleBDXTransferSessionEndForFileDesignator:(id)a0 fabricIndex:(id)a1 nodeID:(id)a2 error:(id)a3;

@end
