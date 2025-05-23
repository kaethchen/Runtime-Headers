@interface PLAssetsdResourceInternalClient : PLAssetsdBaseClient

- (void)cancelAllPrewarming;
- (void)prewarmWithCapturePhotoSettings:(id)a0 completionHandler:(id /* block */)a1;
- (void)batchSaveAssetsWithJobDictionaries:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)cancelAllPrewarming:(id *)a0;
- (void)cancelAllPrewarmingWithCompletionHandler:(id /* block */)a0;
- (BOOL)handlePhotoKitIngestJobs:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)prewarmWithCapturePhotoSettings:(id)a0;
- (BOOL)prewarmWithCapturePhotoSettings:(id)a0 error:(id *)a1;
- (void)requestMasterThumbnailForAssetUUID:(id)a0 completionHandler:(id /* block */)a1;

@end
