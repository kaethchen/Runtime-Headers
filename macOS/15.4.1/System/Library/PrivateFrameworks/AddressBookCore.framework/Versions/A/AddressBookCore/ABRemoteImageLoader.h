@class NSOperationQueue;

@interface ABRemoteImageLoader : NSObject {
    NSOperationQueue *_workQueue;
}

+ (id)personForEmailAddresses:(id)a0;
+ (id)sharedRemoteImageLoader;

- (void)dealloc;
- (id)init;
- (long long)beginLoadingImageForEmails:(id)a0 completionHandler:(id /* block */)a1;
- (long long)beginLoadingImageForEmails:(id)a0 forClient:(id)a1;
- (long long)beginLoadingImageForPerson:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelLoadingImageDataForTag:(long long)a0;

@end
