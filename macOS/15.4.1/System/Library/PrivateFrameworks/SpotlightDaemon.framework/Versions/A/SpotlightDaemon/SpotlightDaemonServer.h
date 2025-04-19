@interface SpotlightDaemonServer : NSObject

+ (id)sharedDaemonServer;

- (void)provideDataForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)provideFileURLForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)provideFileURLsForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifiers:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (long long)clientTypeForBundleID:(id)a0 jobType:(long long)a1;
- (id)connectionForBundleID:(id)a0 jobType:(long long)a1;
- (id)connectionForClientType:(long long)a0 jobType:(long long)a1;
- (void)enumerateConnections:(id /* block */)a0 jobType:(long long)a1;
- (BOOL)handleJob:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleJob:(id)a0 protectionClass:(id)a1 perClientCompletionHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (BOOL)haveDaemonForBundleID:(id)a0 jobType:(long long)a1;
- (void)issueReindexAllItemsForBundleID:(id)a0 protectionClass:(id)a1 reason:(id)a2 acknowledgementHandler:(id /* block */)a3;
- (void)issueReindexItemsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 acknowledgementHandler:(id /* block */)a3;
- (void)notifyUpdatesForItems:(id)a0 bundleID:(id)a1 interestedAttributeMask:(long long)a2 acknowledgementHandler:(id /* block */)a3;
- (void)updateFileProviderBundleIDs:(id)a0;

@end
