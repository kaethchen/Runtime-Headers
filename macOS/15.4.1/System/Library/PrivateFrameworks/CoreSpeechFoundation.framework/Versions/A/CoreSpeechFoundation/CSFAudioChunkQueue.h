@class NSMutableArray;

@interface CSFAudioChunkQueue : NSObject

@property (nonatomic) unsigned long long bufferCapacity;
@property (retain, nonatomic) NSMutableArray *circularQueue;
@property (nonatomic) unsigned long long totalSampleCount;
@property (nonatomic) unsigned long long lastSampleCount;

- (void).cxx_destruct;
- (void)reset;
- (void)addChunk:(id)a0;
- (id)copyChunkFromStartSampleCount:(unsigned long long)a0 toEndSampleCount:(unsigned long long)a1;
- (id)initWithBufferCapacity:(unsigned long long)a0;

@end
