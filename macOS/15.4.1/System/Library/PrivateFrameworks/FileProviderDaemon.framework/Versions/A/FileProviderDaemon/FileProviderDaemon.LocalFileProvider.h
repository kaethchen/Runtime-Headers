@interface FileProviderDaemon.LocalFileProvider : NSFileProviderExtension <_NSFileProviderVersionThumbnailing, NSFileProviderExtension_PrivateInit, NSFileProviderExtension_Private> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ localDomain;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (id)URLForItemWithPersistentIdentifier:(id)a0;
- (id)_defaultApplicationContainerForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_dumpInternalStateToTermDumper:(id)a0 completionHandler:(id /* block */)a1;
- (void)_trashItemAtURLWithoutCoordination:(id)a0 completionHandler:(id /* block */)a1;
- (void)changeItem:(id)a0 baseVersion:(id)a1 changedFields:(unsigned long long)a2 contents:(id)a3 options:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)createDirectoryWithName:(id)a0 inParentItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)enumeratorForContainerItemIdentifier:(id)a0 error:(id *)a1;
- (id)fetchContentsForItemWithIdentifier:(id)a0 version:(id)a1 completionHandler:(id /* block */)a2;
- (id)fetchThumbnailsForDictionary:(id)a0 requestedSize:(struct CGSize { double x0; double x1; })a1 perThumbnailCompletionHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)fetchThumbnailsForDictionary:(id)a0 requestedSize:(struct CGSize { double x0; double x1; })a1 perThumbnailCompletionHandlerDataURLWithMetadata:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)fetchThumbnailsForDictionary:(id)a0 requestedSize:(struct CGSize { double x0; double x1; })a1 perThumbnailCompletionHandlerWithMetadata:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)importDocumentAtURL:(id)a0 toParentItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)itemChangedAtURL:(id)a0;
- (id)itemForIdentifier:(id)a0 error:(id *)a1;
- (id)persistentIdentifierForItemAtURL:(id)a0;
- (void)providePlaceholderAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)renameItemWithIdentifier:(id)a0 toName:(id)a1 completionHandler:(id /* block */)a2;
- (void)reparentItemWithIdentifier:(id)a0 toParentItemWithIdentifier:(id)a1 newName:(id)a2 completionHandler:(id /* block */)a3;
- (void)setFavoriteRank:(id)a0 forItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setLastUsedDate:(id)a0 forItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setTagData:(id)a0 forItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)startProvidingItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopProvidingItemAtURL:(id)a0;
- (id)supportedServiceSourcesForItemIdentifier:(id)a0 error:(id *)a1;
- (void)trashItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)untrashItemWithIdentifier:(id)a0 toParentItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)waitForStabilizationWithCompletionHandler:(id /* block */)a0;

@end
