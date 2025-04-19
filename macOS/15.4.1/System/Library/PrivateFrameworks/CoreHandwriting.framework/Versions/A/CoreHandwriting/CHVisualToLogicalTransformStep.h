@class CRBiDiTransform;

@interface CHVisualToLogicalTransformStep : CHPostprocessingStepModifyingOriginalTokens {
    int _mode;
    int _baseDirection;
    CRBiDiTransform *_bidiTransform;
}

- (void).cxx_destruct;
- (id)initWithBaseDirection:(int)a0 mode:(int)a1;
- (id)process:(id)a0 options:(id)a1;

@end
