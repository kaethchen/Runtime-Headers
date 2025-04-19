@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface QLPathWatcher : NSObject {
    NSMutableDictionary *_clientsByURL;
}

@property (nonatomic) struct __FSEventStream { } *eventStream;
@property (retain) NSObject<OS_dispatch_queue> *watchQueue;
@property double throttle;
@property (retain) NSMutableArray *watchedURLs;

+ (id)sharedWatcher;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_reconfigureFSEventStream;
- (void)_watcherDidWatchURL:(id)a0 flags:(unsigned int)a1;
- (void)addWatchedURL:(id)a0 client:(id)a1;
- (void)removeWatchedURL:(id)a0 client:(id)a1;

@end
