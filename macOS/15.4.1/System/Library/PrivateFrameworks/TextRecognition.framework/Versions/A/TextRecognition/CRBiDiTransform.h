@interface CRBiDiTransform : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct UBiDi { } *_icuBiDiTransform;
}

+ (id)_rearrangeNumericRunsInLogicalToken:(id)a0 layoutDirection:(unsigned long long)a1;
+ (unsigned long long)layoutDirectionForVisualString:(id)a0 visualDirectionality:(unsigned long long)a1 logicalBaseDirection:(int)a2;
+ (id)rearrangeNumericRunsInLogicalString:(id)a0 layoutDirection:(unsigned long long)a1;

- (void)dealloc;
- (id)init;
- (id)transformVisualToLogical:(id)a0 visualDirectionality:(unsigned long long)a1 logicalBaseDirectionality:(unsigned long long)a2 baseDirectionalityPredictionMode:(unsigned long long)a3 outTokenizedLogicalOrderIndexes:(id *)a4 outReorderingPermutation:(id *)a5 outMirroredVisualString:(id *)a6 outLogicalBaseDirection:(char *)a7;

@end
