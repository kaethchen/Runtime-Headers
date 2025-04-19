@class NSURL;
@protocol FileChangeObserverClient;

@interface FileChangeObserver : NSObject {
    struct __FSEventStream { } *_eventStream;
    id /* block */ _callbackBlock;
}

@property (readonly, weak, nonatomic) id<FileChangeObserverClient> client;
@property (readonly, nonatomic) NSURL *fileURL;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopObserving;
- (id)initWithFileURL:(id)a0 client:(id)a1;
- (void)startObservingOnMainQueue;

@end
