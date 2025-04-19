@interface MTLDebugCommandQueue : MTLToolsCommandQueue {
    int _deadlineAwareState;
}

- (void)addInternalResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)addInternalResidencySet:(id)a0;
- (void)addResidencySet:(id)a0;
- (void)addResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (id)commandBuffer;
- (id)commandBufferWithDescriptor:(id)a0;
- (id)commandBufferWithUnretainedReferences;
- (void)insertDebugCaptureBoundary;
- (void)removeInternalResidencySet:(id)a0;
- (void)removeInternalResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)removeResidencySet:(id)a0;
- (void)removeResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)validateDeadlineAwareness:(id)a0;

@end
