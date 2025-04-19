@interface CompletionListVendorForHistoryService : WBSCompletionListVendorForHistoryService <WBSHistoryCompletionListVendorProtocol> {
    void *_completionController;
    id /* block */ _completionListItemsCallback;
}

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)_setExportedInterfaceAndObjectForConnection:(id)a0;
- (void)getCompletionListItemsForQuery:(id)a0 completionHandler:(id /* block */)a1;
- (id)_browserWindowController;
- (void)_unifiedFieldCompletionListIsFullyComputed;

@end
