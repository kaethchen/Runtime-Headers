@class QLThumbnailQueue;

@interface QLThumbnailQueueOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
}

@property struct __QLThumbnail { } *thumbnail;
@property (weak) QLThumbnailQueue *delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (void)cancel;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)setFinished:(BOOL)a0;
- (void)setExecuting:(BOOL)a0;

@end
