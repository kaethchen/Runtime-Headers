@class NSMutableArray;

@interface KHMapLayoutConfigurator : NSObject {
    NSMutableArray *_variableLayoutElements;
    NSMutableArray *_staticLayoutElements;
    unsigned long long _numLayoutPermutations;
}

- (void)dealloc;
- (id)init;
- (id)layoutConfiguration;
- (unsigned long long)_chooseRandomLayoutChoiceIdxForVariableElement:(id)a0 currentChoiceIndex:(unsigned long long)a1 trialedLayoutChoiceIndicesMap:(id)a2;
- (double)_collisionIntensityForVariableElementIdx:(unsigned long long)a0 choiceIdx:(unsigned long long)a1 withChoiceIndices:(unsigned long long *)a2;
- (unsigned long long)_incrementChoiceIndices:(unsigned long long *)a0;
- (id)_layoutConfigurationForChoiceIndices:(unsigned long long *)a0;
- (double)_layoutScoreDeltaWithChoiceIndices:(unsigned long long *)a0 changingIdx:(unsigned long long)a1 fromChoice:(unsigned long long)a2 toChoice:(unsigned long long)a3;
- (double)_scoreLayoutWithChoiceIndices:(unsigned long long *)a0 bestScore:(double)a1;
- (void)addStaticLayoutElement:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; })a0;
- (void)addVariableLayoutElement:(id)a0;
- (id)layoutTaskDescription;

@end
