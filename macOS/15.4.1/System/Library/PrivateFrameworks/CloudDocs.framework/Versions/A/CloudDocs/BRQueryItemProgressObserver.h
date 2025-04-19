@class BRQueryItem, NSProgress, NSObject;
@protocol OS_dispatch_queue;

@interface BRQueryItemProgressObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id _subscriber;
    NSProgress *_progress;
    BOOL _started;
    BOOL _isUpload;
}

@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly, nonatomic) BRQueryItem *item;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)setQueue:(id)a0;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (void)_stopObserving;
- (id)initWithItem:(id)a0;
- (void)_subscribe;

@end
