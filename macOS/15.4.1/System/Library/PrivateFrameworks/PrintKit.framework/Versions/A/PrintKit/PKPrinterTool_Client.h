@class NSFileHandle, NSXPCConnection;

@interface PKPrinterTool_Client : NSObject {
    NSXPCConnection *_conn_needsLock;
    NSFileHandle *_streamHandle;
}

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)cancelJob:(int)a0;
- (void)printerTool_removeKeychainItem:(id)a0;
- (void)getRecentJobsCompletionHandler:(id /* block */)a0;
- (void)addPrinterToiCloud:(id)a0;
- (void)browseInfoForPrinter:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)endpointResolve:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)finishRequestWithCancel:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getJobUpdateStatus:(int)a0 includeThumbnail:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getLastUsedPrintersForCurrentNetworkCompletionHandler:(id /* block */)a0;
- (void)getiCloudPrintersWithCompletionHandler:(id /* block */)a0;
- (void)logiCloudPrintersCompletionHandler:(id /* block */)a0;
- (void)printerTool_checkAccessState:(id)a0 completionHandler:(id /* block */)a1;
- (void)printerTool_getPrinterDescription:(id)a0 assertReachability:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)printerTool_identifyPrinter:(id)a0 message:(id)a1 actions:(id)a2;
- (void)printerTool_queryPrinter:(id)a0 attributes:(id)a1 completionHandler:(id /* block */)a2;
- (void)printerTool_realPathForTmp:(id /* block */)a0;
- (id)ptConn;
- (id)ptConn_locked;
- (void)removePrinterFromiCloud:(id)a0;
- (void)resetPKCloudData;
- (void)setLastUsedPrintersForCurrentNetwork:(id)a0;
- (void)setiCloudPrinters:(id)a0;
- (void)startStreamingRequest:(id)a0 printSettings:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateiCloudPrinterDisplayName:(id)a0 newDisplayName:(id)a1;
- (void)updateiCloudPrinterLocation:(id)a0 location:(id)a1;

@end
