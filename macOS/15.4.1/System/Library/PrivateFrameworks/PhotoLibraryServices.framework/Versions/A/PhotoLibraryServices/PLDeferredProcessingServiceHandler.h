@interface PLDeferredProcessingServiceHandler : NSObject

- (void)cancelAllPrewarmingWithCompletion:(id /* block */)a0;
- (void)prewarmWithCapturePhotoSettings:(id)a0 completionHandler:(id /* block */)a1;

@end
