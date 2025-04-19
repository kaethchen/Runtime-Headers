@interface MTLDebugResidencySet : MTLToolsResidencySet {
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _accessStatus;
}

- (unsigned long long)allocationCount;
- (void)addAllocation:(id)a0;
- (void)addAllocations:(const id *)a0 count:(unsigned long long)a1;
- (id)allAllocations;
- (id)allCommittedAllocations;
- (unsigned long long)allocatedSize;
- (void)clearWriteBit;
- (void)commit;
- (BOOL)containsAllocation:(id)a0;
- (unsigned long long)currentGeneration;
- (void)endResidency;
- (unsigned long long)expiredGeneration;
- (unsigned long long)generationForAllocation:(id)a0;
- (id)initWithResidencySet:(id)a0 device:(id)a1;
- (void)removeAllAllocations;
- (void)removeAllocation:(id)a0;
- (void)removeAllocations:(const id *)a0 count:(unsigned long long)a1;
- (void)requestResidency;
- (void)setCurrentGeneration:(unsigned long long)a0;
- (void)setExpiredGeneration:(unsigned long long)a0;
- (void)setWriteBit;
- (void)validateAllocation:(id)a0;
- (void)validateHeap:(id)a0;
- (void)validateResource:(id)a0;

@end
