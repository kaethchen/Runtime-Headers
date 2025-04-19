@interface PIInpaintAdjustmentController : PIAdjustmentController

- (unsigned long long)operationCount;
- (id)visualInputKeys;
- (BOOL)_maskArray:(id)a0 hasSourceWithIdentifier:(id)a1;
- (void)appendCloneStroke:(id)a0 sourceOffset:(struct CGPoint { double x0; double x1; })a1 repairEdges:(BOOL)a2;
- (void)appendOperation:(id)a0;
- (BOOL)appendRemovalOperationWithMasks:(id)a0 exclusionMasks:(id)a1 options:(unsigned long long)a2 error:(out id *)a3;
- (void)appendStroke:(id)a0 exclusionMasks:(id)a1 options:(unsigned long long)a2;
- (void)applyDelta:(id)a0;
- (id)deltaFromComposition:(id)a0;
- (void)initializeAdjustment;

@end
