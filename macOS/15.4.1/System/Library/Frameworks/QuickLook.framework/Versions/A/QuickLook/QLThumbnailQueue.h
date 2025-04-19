@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface QLThumbnailQueue : NSObject {
    id /* block */ _completionBlock;
}

@property (retain) NSOperationQueue *operationQueue;
@property void /* function */ *callback;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property const void *client;
@property (copy) id /* block */ completionHandler;
@property struct __QLThumbnailQueue { } *wrapperStruct;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (long long)operationCount;
- (void)addThumbnail:(struct __QLThumbnail { } *)a0;
- (void)addThumbnailsFromArray:(id)a0;
- (void)cancelAll;
- (void)cancelThumbnails:(id)a0;
- (BOOL)isProcessing;
- (void)setMaxConcurrentThumbnails:(long long)a0;
- (void)waitForCompletion;

@end
