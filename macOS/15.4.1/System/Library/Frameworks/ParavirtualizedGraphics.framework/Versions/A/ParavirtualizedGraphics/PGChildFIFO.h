@interface PGChildFIFO : PGFIFO {
    unsigned int _readOffset;
    unsigned int _lastReadOffset;
    unsigned int _lastReadCount;
    unsigned int _readCount;
    unsigned int _cacheWritten;
    void *_baseNode;
    void *_basePointer;
    void *_cmdStart;
    unsigned int _stampIndex;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _faultOffset;
}

- (void)dealloc;
- (id).cxx_construct;
- (BOOL)start;
- (void)stop;
- (void)advance;
- (void)resetPending;
- (void)teardownMapping;
- (void)setFaultOffset:(unsigned int)a0;
- (unsigned int)faultOffset;
- (BOOL)getFifoBytes:(unsigned long long)a0 into:(void *)a1;
- (id)initWithDevice:(id)a0 baseNode:(void *)a1 fifoIndex:(unsigned int)a2 restoring:(BOOL)a3 lastPending:(void *)a4;
- (BOOL)isRootFifo;
- (void)latchCommandOffset;
- (BOOL)setupMapping;
- (unsigned int)stampIndex;

@end
