@class NSString;

@interface ILWatchedNode : ILObserverNode {
    NSString *path;
    long long fd;
}

- (void)dealloc;
- (id)path;
- (long long)fd;
- (void)setFd:(long long)a0;
- (void)closeFD;
- (id)initWithObserver:(id)a0 path:(id)a1 fd:(long long)a2;
- (void)refreshFDForkQueueFD:(long long)a0;

@end
