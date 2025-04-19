@class NSMutableArray;

@interface IKMultipleSegmentedRawDataBuffer : NSObject {
    NSMutableArray *_buffers;
    unsigned int _blockSize;
}

- (void)dealloc;
- (int)freeSpace;
- (unsigned int)usedSpace;
- (BOOL)containsAddress:(void *)a0;
- (int)estimatedFragmentCount;
- (int)estimatedItemCount;
- (void)freeCache;
- (id)initWithMemorySize:(unsigned int)a0;
- (void *)newSegmentOfSize:(unsigned int)a0;
- (void)releaseSegment:(void *)a0 ofSize:(unsigned int)a1;
- (id)segmentedBufferAtIndex:(int)a0;
- (id)segmentedBuffers;
- (void)setTotalSpace:(unsigned int)a0;
- (unsigned int)totalSpace;

@end
