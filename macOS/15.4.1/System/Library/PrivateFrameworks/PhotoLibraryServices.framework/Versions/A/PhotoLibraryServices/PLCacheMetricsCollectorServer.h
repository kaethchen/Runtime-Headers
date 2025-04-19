@interface PLCacheMetricsCollectorServer : NSObject {
    unsigned long long _bufferSize;
    void *_sharedRegion;
}

- (void)dealloc;
- (id)initWithXPCObject:(id)a0;
- (struct { _Atomic unsigned int x0; _Atomic unsigned int x1; _Atomic unsigned int x2; _Atomic unsigned int x3; })getSharedImageRequestCacheMetrics;

@end
