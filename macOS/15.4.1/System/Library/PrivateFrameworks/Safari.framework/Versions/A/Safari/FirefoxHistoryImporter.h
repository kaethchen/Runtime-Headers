@class NSString;

@interface FirefoxHistoryImporter : FirefoxImporter <BrowserHistoryImporter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_importHistoryAfterFirefoxTime:(long long)a0 delegate:(id)a1;
- (int)_queryDatabase:(void *)a0 forRedirectsAfterFirefoxTime:(long long)a1 delegate:(id)a2;
- (int)_queryDatabase:(void *)a0 forVisitsAfterFirefoxTime:(long long)a1 delegate:(id)a2;
- (void)getHasImportableHistoryWithCompletionHandler:(id /* block */)a0;
- (void)importEntireHistoryWithDelegate:(id)a0;
- (void)importHistorySinceDate:(id)a0 delegate:(id)a1;

@end
