@class NSString;

@interface ChromeHistoryImporter : ChromeImportEngine <BrowserHistoryImporter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_importHistoryAfterChromeTime:(long long)a0 delegate:(id)a1;
- (int)_openCopyOfDatabaseAtURL:(id)a0 andPerformBlock:(id /* block */)a1;
- (BOOL)_openDatabaseAtURL:(id)a0 andPerformBlock:(id /* block */)a1;
- (int)_queryDatabase:(void *)a0 forHistoryAfterChromeTime:(long long)a1 delegate:(id)a2;
- (int)_queryDatabase:(void *)a0 forNonRedirectedVisitsAfterChromeTime:(long long)a1 delegate:(id)a2;
- (int)_queryDatabase:(void *)a0 forRedirectsAfterChromeTime:(long long)a1 delegate:(id)a2;
- (void)getHasImportableHistoryWithCompletionHandler:(id /* block */)a0;
- (void)importEntireHistoryWithDelegate:(id)a0;
- (void)importHistorySinceDate:(id)a0 delegate:(id)a1;

@end
