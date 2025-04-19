@class NSMutableArray;

@interface ATXRingBuffer : NSObject {
    unsigned long long _maxSize;
    NSMutableArray *_bufferArray;
    unsigned long long _readStartIndex;
}

- (id)init;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)toArray;
- (id)initWithMaxSize:(unsigned long long)a0;

@end
