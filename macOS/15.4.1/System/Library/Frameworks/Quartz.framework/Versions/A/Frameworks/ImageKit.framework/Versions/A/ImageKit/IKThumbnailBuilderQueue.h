@class NSArray, NSOperationQueue, NSLock;

@interface IKThumbnailBuilderQueue : NSObject {
    NSArray *_thumbnails;
    id _delegate;
    SEL _didEndSelector;
    NSOperationQueue *_queue;
    struct __QLThumbnailQueue { } *_qlQueue;
    int _queueLength;
    int _qlQueueLength;
    BOOL _qlLoopRunning;
    BOOL _started;
    NSLock *_lock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)lock;
- (void)setDelegate:(id)a0;
- (void)unlock;
- (BOOL)isExecuting;
- (float)progress;
- (void)setDidEndSelector:(SEL)a0;
- (void)setThumbnails:(id)a0;
- (id)thumbnails;
- (void)_decrQLQueue;
- (void)_decrQueue;
- (void)cancelTasks;
- (SEL)didEndSelector;
- (void)qlOperationDidFinished:(id)a0;
- (void)runQLQueue;
- (void)startTasks;
- (void)thumbnailOperationDidFinished:(id)a0;

@end
