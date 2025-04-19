@class WBSCloudHistory, NSTimer, WBSHistoryService, NSXPCConnection, NSObject, WBSCloudHistoryConfiguration;
@protocol OS_dispatch_queue;

@interface WBSHistoryConnection : NSObject <WBSHistoryConnectionProtocol> {
    WBSHistoryService *_historyService;
    NSXPCConnection *_completionListProvider;
    NSTimer *_delayTimer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSCloudHistory *_cloudHistory;
    WBSCloudHistoryConfiguration *_cloudHistoryConfiguration;
}

- (void).cxx_destruct;
- (void)getServiceInfo:(id /* block */)a0;
- (void)beginHistoryAccessSession:(id /* block */)a0;
- (void)beginURLCompletionSession:(id /* block */)a0;
- (void)connectWithOptions:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)copyAndRedactHistoryDatabasesForAllProfiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)ensureConnected:(id /* block */)a0;
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)getCompletionListItemsForQuery:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithHistoryService:(id)a0;
- (void)initializeCloudHistoryWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)listDatabaseURLsWithCompletionHandler:(id /* block */)a0;
- (void)queryMemoryFootprint:(id /* block */)a0;
- (void)releaseCloudHistory:(id /* block */)a0;
- (void)setCompletionListVendorEndpoint:(id)a0 completionHandler:(id /* block */)a1;

@end
