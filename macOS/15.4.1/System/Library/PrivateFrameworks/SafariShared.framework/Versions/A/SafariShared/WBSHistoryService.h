@class NSDate, NSString, WBSHistoryDatabaseAccessBroker, NSURL, NSXPCConnection, NSObject, NSXPCListener, NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_group, WBSHistoryCompletionListVendorProtocol;

@interface WBSHistoryService : NSObject <WBSHistoryServiceDatabaseStore, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_historyServiceQueue;
    NSObject<OS_dispatch_group> *_fileOperationGroup;
    NSMapTable *_databases;
    NSDate *_initDate;
    NSXPCConnection *_completionListProviderConnection;
}

@property (readonly, nonatomic) WBSHistoryDatabaseAccessBroker *databaseAccessBroker;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) id<WBSHistoryCompletionListVendorProtocol> completionListProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (void)shutdown;
- (id)initWithListener:(id)a0;
- (id)_createListener;
- (id)_acquireLockForURL:(id)a0 error:(id *)a1;
- (BOOL)_connectionIsEntitledToUseUserDatabase:(id)a0;
- (id)_copyAndRedactHistoryDatabaseWithURL:(id)a0 databaseDestinationFileURL:(id)a1;
- (id)_openOrReuseExistingDatabaseWithOptions:(id)a0 createIfNeeded:(BOOL)a1 error:(id *)a2;
- (void)connectWithOptions:(id)a0 connection:(id)a1 completionHandler:(id /* block */)a2;
- (void)copyAndRedactHistoryDatabasesForAllProfiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)listDatabaseURLsWithCompletionHandler:(id /* block */)a0;
- (void)openDatabaseWithID:(id)a0 createIfNeeded:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)setCompletionListVendorEndpoint:(id)a0 completionHandler:(id /* block */)a1;

@end
