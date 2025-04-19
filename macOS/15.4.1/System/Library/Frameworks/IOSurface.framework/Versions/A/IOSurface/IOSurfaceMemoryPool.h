@interface IOSurfaceMemoryPool : NSObject {
    unsigned long long _poolId;
    unsigned int _poolPort;
}

@property (readonly) unsigned long long poolId;

- (void)dealloc;
- (id)initWithProperties:(id)a0;
- (id)copyDebugInfo;
- (int)ensureMemory:(id)a0;
- (int)flush:(id)a0;

@end
