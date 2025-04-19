@class NSError;

@interface ModelCatalogWrapper.ModelCatalogWrapper : NSObject

- (id)init;
- (void)downloadForegroundBackgroundSegmentationModelBundleWithCompletionHandler:(void (^)(NSError *))a0;
- (id)foregroundBackgroundSegmentationModelBundleURLAndReturnError:(id *)a0;

@end
