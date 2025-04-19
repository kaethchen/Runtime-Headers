@class NSOperationQueue;

@interface DDMAssetURLProtocolCoordinator : NSObject {
    NSOperationQueue *_urlLoadingQueue;
}

+ (id)sharedCoordinator;

- (id)init;
- (void).cxx_destruct;
- (id /* block */)addURLProtocolWithResumeBlock:(id /* block */)a0;

@end
