@interface STMDirectoryObserver : NSObject

@property (copy) id /* block */ callbackBlock;
@property struct __FSEventStream { } *fsEventStream;
@property BOOL ignoreMetadataUpdates;

+ (id)scheduledObserverForPaths:(id)a0 queue:(id)a1 callBack:(id /* block */)a2;
+ (id)scheduledObserverForPaths:(id)a0 queue:(id)a1 eventFlags:(unsigned int)a2 latency:(double)a3 callBack:(id /* block */)a4;
+ (id)scheduledObserverForPaths:(id)a0 queue:(id)a1 eventFlags:(unsigned int)a2 latency:(double)a3 ignoreMetadataUpdates:(BOOL)a4 callBack:(id /* block */)a5;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithPaths:(id)a0 onQueue:(id)a1 eventFlags:(unsigned int)a2 latency:(double)a3 ignoreMetadataUpdates:(BOOL)a4 callback:(id /* block */)a5;

@end
