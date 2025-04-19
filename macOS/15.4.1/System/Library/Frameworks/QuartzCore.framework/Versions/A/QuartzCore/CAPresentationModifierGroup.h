@interface CAPresentationModifierGroup : NSObject {
    void *_shmem;
    unsigned long long _capacity;
    unsigned long long _count;
    unsigned long long _totalSize;
    unsigned int _localId;
}

@property (readonly) unsigned long long capacity;
@property (readonly) unsigned long long count;
@property (nonatomic) BOOL updatesAsynchronously;

+ (id)groupWithCapacity:(unsigned long long)a0;

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)flush;
- (void *)_renderShmem;
- (void)_setLocalContextId:(unsigned int)a0;
- (void)flushLocally;
- (void)flushLocallyWithTargetTime:(double)a0;
- (void)flushWithTargetTime:(double)a0;
- (void)flushWithTransaction;
- (void)flushWithTransactionAndTargetTime:(double)a0;
- (void)markWritten:(unsigned long long)a0;
- (unsigned long long)nextSlotWithPayloadSize:(unsigned long long)a0;
- (void)resetBitMask;
- (void *)shmem;

@end
