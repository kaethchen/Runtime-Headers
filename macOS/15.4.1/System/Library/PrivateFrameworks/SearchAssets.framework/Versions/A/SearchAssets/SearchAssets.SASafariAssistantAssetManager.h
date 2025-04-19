@class NSString;

@interface SearchAssets.SASafariAssistantAssetManager : NSObject <SASafariAssistantAssetManagerProtocol> {
    void /* unknown type, empty encoding */ activityMonitor;
    void /* unknown type, empty encoding */ deviceContext;
    void /* unknown type, empty encoding */ assetProvider;
    void /* unknown type, empty encoding */ filter;
    void /* unknown type, empty encoding */ assetSpeciferHandler;
    void /* unknown type, empty encoding */ shouldReportAnalytics;
}

- (id)init;
- (void).cxx_destruct;
- (void)ensureSafariSummarizationAssetsDownloadedForLocale:(NSString *)a0 completionHandler:(void (^)(void))a1;
- (id)prefilterSafariSummarizationPrefetchRequestModelWithUrlString:(id)a0 prefetchHashPrefixLength:(unsigned long long)a1;
- (void)resetSafariSummarizationAssets;
- (void)subscribeToAndPreloadSafariSummarizationAssetsForLocale:(NSString *)a0 completionHandler:(void (^)(void))a1;
- (void)unsubscribeFromSafariSummarizationAssetsWithCompletionHandler:(void (^)(void))a0;
- (id)assetVersionForLocale:(id)a0;
- (id)prefilterSafariSummarizationPrefetchRequestModelWithUrlString:(id)a0;
- (id)prefilterSafariSummarizationPrefetchRequestWithUrlString:(id)a0 prefetchHashPrefixLength:(unsigned long long)a1;

@end
