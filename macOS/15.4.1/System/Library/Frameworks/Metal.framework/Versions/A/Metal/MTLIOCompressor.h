@interface MTLIOCompressor : NSObject {
    void *context;
}

- (void)dealloc;
- (long long)close;
- (void)appendData:(id)a0;
- (id)initWithType:(long long)a0 dst:(id)a1 chunkSize:(unsigned long long)a2;

@end
