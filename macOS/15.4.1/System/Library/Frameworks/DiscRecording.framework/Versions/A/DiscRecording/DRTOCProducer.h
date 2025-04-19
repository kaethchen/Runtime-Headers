@class NSEnumerator, NSMutableArray;

@interface DRTOCProducer : NSObject {
    id currentGenerator;
    NSMutableArray *contentGenerators;
    NSEnumerator *generatorEnumerator;
}

+ (id)producer;

- (void)dealloc;
- (void)cleanupTrackAfterBurn:(id)a0;
- (BOOL)prepareTrack:(id)a0 forBurn:(id)a1 toMedia:(id)a2;
- (unsigned int)produceDataForTrack:(id)a0 intoBuffer:(char *)a1 length:(unsigned int)a2 atAddress:(unsigned long long)a3 blockSize:(unsigned int)a4 ioFlags:(unsigned int *)a5;
- (unsigned int)producePreGapForTrack:(id)a0 intoBuffer:(char *)a1 length:(unsigned int)a2 atAddress:(unsigned long long)a3 blockSize:(unsigned int)a4 ioFlags:(unsigned int *)a5;

@end
