@interface AppStoreKit.ArtworkLoader : _TtCs12_SwiftObject <ASKImageRequestDelegate> {
    void /* unknown type, empty encoding */ resourceLoader;
    void /* unknown type, empty encoding */ urlSession;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ completionHandlers;
    void /* unknown type, empty encoding */ requestCompletionMap;
    void /* unknown type, empty encoding */ renderIntent;
    void /* unknown type, empty encoding */ onScreenReason;
    void /* unknown type, empty encoding */ resourceLoadOperationSchemeMapping;
    void /* unknown type, empty encoding */ isOccluded;
    void /* unknown type, empty encoding */ assetObserver;
    void /* unknown type, empty encoding */ pageRenderMetrics;
    void /* unknown type, empty encoding */ pageRenderMetricsRequestKeys;
}

- (void)imageRequest:(id)a0 didFailWithError:(id)a1;
- (void)imageRequest:(id)a0 didLoadImage:(id)a1;
- (void)resourceLoaderDidBeginLoading;
- (void)resourceLoaderDidBeginLoadingForReason:(id)a0;
- (void)resourceLoaderDidFinishLoadingForReason:(id)a0;
- (void)resourceLoaderDidIdle;
- (void)resourceLoaderDidLoadAllForReason:(id)a0;

@end
