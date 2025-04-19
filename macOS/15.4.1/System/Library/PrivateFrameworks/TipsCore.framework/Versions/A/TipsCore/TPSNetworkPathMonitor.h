@interface TPSNetworkPathMonitor : NSObject {
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ serialTasks;
}

@property (class, nonatomic, readonly) TPSNetworkPathMonitor *sharedMonitor;

+ (BOOL)isNetworkError:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)removeObserverForKey:(id)a0;
- (void)addObserverForKey:(id)a0 using:(id /* block */)a1;

@end
