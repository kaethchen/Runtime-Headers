@interface FileProviderDaemon.FPFSOperationServicer : _TtCs12_SwiftObject <FPXOperationService> {
    void /* unknown type, empty encoding */ backend;
    void /* unknown type, empty encoding */ extender;
    void /* unknown type, empty encoding */ request;
}

- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)bulkItemChanges:(id)a0 changedFields:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)deleteItemsWithIDs:(id)a0 baseVersions:(id)a1 options:(unsigned long long)a2 reply:(id /* block */)a3;
- (id)disconnectDomainID:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)fetchDefaultContainerForBundleIdentifier:(id)a0 defaultName:(id)a1 inDomainIdentifier:(id)a2 lookupOnly:(BOOL)a3 reply:(id /* block */)a4;
- (void)fetchHierarchyForItemID:(id)a0 recursively:(BOOL)a1 ignoreAlternateContentURL:(BOOL)a2 reply:(id /* block */)a3;
- (void)fetchItemID:(id)a0 reply:(id /* block */)a1;
- (id)fetchPublishingURLForItemID:(id)a0 completionHandler:(id /* block */)a1;
- (id)performActionWithIdentifier:(id)a0 onItemsWithIdentifiers:(id)a1 domainIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)preflightReparentItemIDs:(id)a0 underParentID:(id)a1 reply:(id /* block */)a2;
- (void)preflightTrashItemIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)singleItemChange:(id)a0 changedFields:(unsigned long long)a1 bounce:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)startOperation:(id)a0 toFetchThumbnailsForItemIdentifiers:(id)a1 size:(struct CGSize { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (void)startOperation:(id)a0 toFetchThumbnailsWithDictionary:(id)a1 size:(struct CGSize { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (void)updateIgnoreStateOfItemWithIdentifiers:(id)a0 ignoreState:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)userCheckedSuppressionCheckboxForUserInteractionIdentifier:(id)a0 domainIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)userInteractionErrorsForPerformingAction:(id)a0 sourceItems:(id)a1 destinationItem:(id)a2 fpProviderDomainId:(id)a3 sourceItemKeysAllowList:(id)a4 destinationItemKeysAllowList:(id)a5 completionHandler:(id /* block */)a6;
- (void)wakeForSessionIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
