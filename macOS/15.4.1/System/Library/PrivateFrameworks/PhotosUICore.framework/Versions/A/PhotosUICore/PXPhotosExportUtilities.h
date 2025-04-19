@interface PXPhotosExportUtilities : NSObject

+ (void)_downscaleAssetAtURLIfNeeded:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
+ (void)_downscaleImageAtURL:(id)a0 targetDimension:(id)a1 completion:(id /* block */)a2;
+ (id)_exportAssetUsingExportRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
+ (void)_exportAssets:(id)a0 toURL:(id)a1 configuration:(id)a2 progress:(id)a3;
+ (void)_exportCollectionList:(id)a0 configuration:(id)a1 progress:(id)a2 completion:(id /* block */)a3;
+ (id)_exportRequestForAsset:(id)a0 analyticsActivityType:(id)a1 error:(id *)a2;
+ (void)_markURLAsPurgable:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_optionsForExportRequest:(id)a0 configuration:(id)a1;
+ (void)_replaceAssetAtURL:(id)a0 withItemAtURL:(id)a1 completionHandler:(id /* block */)a2;
+ (void)exportAsset:(id)a0 configuration:(id)a1 progress:(id)a2 completion:(id /* block */)a3;
+ (void)exportAssets:(id)a0 configuration:(id)a1 progress:(id)a2 completion:(id /* block */)a3;
+ (void)exportAssetsInContainer:(id)a0 configuration:(id)a1 progress:(id)a2 completion:(id /* block */)a3;

@end
