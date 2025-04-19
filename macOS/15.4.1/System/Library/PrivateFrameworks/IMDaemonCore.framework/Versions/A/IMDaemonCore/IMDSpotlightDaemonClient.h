@interface IMDSpotlightDaemonClient : NSObject <IMDBaseSpotlightIndexControllerDelegate, SpotlightDaemonClient, IMSpotlightDaemonClient_ForwardDeclare_127466970> {
    void /* unknown type, empty encoding */ importer;
    void /* unknown type, empty encoding */ indexes;
    void /* unknown type, empty encoding */ interestingProtectionClasses;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)searchableItemsDidUpdate:(id)a0 mask:(long long)a1;
- (void)updateChatsUsingMessageGUIDsAndSummaries:(id)a0;
- (void)retrieveLocalFileURLForFileTransferWithGUIDs:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (void)provideDataForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)provideFileURLForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)provideFileURLsForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifiers:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)reindexAllItemsForBundleID:(id)a0 protectionClass:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)reindexItemsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 acknowledgementHandler:(id /* block */)a3;

@end
