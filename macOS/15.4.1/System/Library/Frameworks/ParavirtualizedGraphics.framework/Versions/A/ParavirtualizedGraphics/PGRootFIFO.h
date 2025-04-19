@interface PGRootFIFO : PGFIFO {
    unsigned int _readOffset;
    unsigned int _lastReadOffset;
    unsigned int _written;
    unsigned int _read;
    void *_basePointer;
    void *_cmdStart;
    unsigned int _pendingAdvance;
    unsigned int _faultOffset;
}

@property unsigned int written;
@property unsigned int read;
@property unsigned int startOffset;

- (void)reset;
- (void)advance;
- (void)resetPending;
- (void)teardownMapping;
- (void)setFaultOffset:(unsigned int)a0;
- (unsigned int)faultOffset;
- (BOOL)getFifoBytes:(unsigned long long)a0 into:(void *)a1;
- (id)initWithDevice:(id)a0 length:(unsigned int)a1 basePointer:(void *)a2 startOffset:(unsigned int)a3 lastPending:(void *)a4;
- (BOOL)isRootFifo;
- (void)latchCommandOffset;
- (BOOL)setupMapping;
- (unsigned int)stampIndex;

@end
