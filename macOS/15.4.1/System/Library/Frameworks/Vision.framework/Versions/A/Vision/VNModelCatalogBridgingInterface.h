@interface VNModelCatalogBridgingInterface : NSObject

- (void)downloadForegroundBackgroundSegmentationModelBundleWithCompletionHandler:(id /* block */)a0;
- (id)foregroundBackgroundSegmentationModelBundleURLWithError:(id *)a0;

@end
