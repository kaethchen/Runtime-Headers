@class NSURL, NSOperationQueue, NSError;

@interface Tabi.ContainerLock : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ containerURL;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ isRetained;
    void /* unknown type, empty encoding */ isPresenter;
}

@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;

- (id)init;
- (void).cxx_destruct;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(void (^)(NSError *))a0;

@end
