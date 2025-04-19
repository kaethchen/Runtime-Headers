@class NSMutableDictionary, IKCacheFragHandler;

@interface IKSegmentedRawDataBuffer : NSObject {
    unsigned int _totalSpace;
    unsigned int _usedSpace;
    int _estimatedItemCount;
    NSMutableDictionary *_fragments;
    void *_segmentedBuffer;
    IKCacheFragHandler *_fragHandler;
    unsigned int _realBufferLength;
    unsigned int _totalSpacePlusOverhead;
}

- (void)dealloc;
- (void)finalize;
- (void *)startAddress;
- (int)freeSpace;
- (unsigned int)usedSpace;
- (void)checkBufferSize;
- (id)cacheFragHandler;
- (void)decrSize:(unsigned int)a0;
- (int)estimatedFragmentCount;
- (int)estimatedItemCount;
- (id)fragHandler;
- (void)freeCache;
- (void)incrSize:(unsigned int)a0;
- (id)initWithMemorySize:(unsigned int)a0;
- (void *)newSegmentOfSize:(unsigned int)a0;
- (void)releaseSegment:(void *)a0 ofSize:(unsigned int)a1;
- (unsigned int)segmentedBufferLength;
- (void)setTotalSpace:(unsigned int)a0;
- (unsigned int)totalSpace;

@end
