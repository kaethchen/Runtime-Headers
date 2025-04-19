@interface CSExternalAnalysisFilesQuery : CSFilesSearchQuery {
    id /* block */ clientFoundItemsHandler;
    id /* block */ clientCompletionHandler;
}

@property long long maxCount;

- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)a0;
- (void)setFoundItemsHandler:(id /* block */)a0;
- (id)initWithUTTypes:(id)a0 analysisVersions:(id)a1 attributes:(id)a2 scopes:(id)a3 maxCount:(long long)a4 queryExtras:(id)a5;

@end
