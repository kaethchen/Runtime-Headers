@interface MTLDebugIOScratchBufferAllocator : MTLToolsIOScratchBufferAllocator

- (void)dealloc;
- (id)allocateScratchBufferWithMinimumSize:(unsigned long long)a0;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)newScratchBufferWithMinimumSize:(unsigned long long)a0;

@end
