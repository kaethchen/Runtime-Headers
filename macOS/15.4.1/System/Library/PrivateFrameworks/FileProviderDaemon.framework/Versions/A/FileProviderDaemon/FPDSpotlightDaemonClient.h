@class FPDExtensionManager, NSObject;
@protocol OS_dispatch_queue;

@interface FPDSpotlightDaemonClient : NSObject <SpotlightDaemonClient> {
    NSObject<OS_dispatch_queue> *_reindexQueue;
}

@property (readonly, nonatomic) FPDExtensionManager *extensionManager;

- (void).cxx_destruct;
- (void)provideDataForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)provideFileURLForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)reindexAllItemsForBundleID:(id)a0 protectionClass:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)reindexItemsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 acknowledgementHandler:(id /* block */)a3;
- (id)initWithExtensionManager:(id)a0;

@end
