@interface CHPointFIFO : NSObject {
    CHPointFIFO *_nextFIFO;
}

- (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (void)addPoint:(SEL)a0;
- (void)emitPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;

@end
