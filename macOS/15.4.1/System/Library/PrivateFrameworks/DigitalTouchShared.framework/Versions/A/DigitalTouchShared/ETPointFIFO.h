@interface ETPointFIFO : NSObject

@property (retain, nonatomic) ETPointFIFO *nextFIFO;

- (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (id)initWithFIFO:(id)a0;
- (void)addPoints:(void *)a0 count:(unsigned long long)a1;
- (void)emitPoints:(void *)a0 count:(unsigned long long)a1;

@end
