@interface VCPEffectsAnalyzer : NSObject {
    BOOL _hasFaceOrPet;
}

+ (BOOL)usePHAssetScene;

- (int)analyzeAsset:(id)a0 onDemand:(BOOL)a1 cancel:(id /* block */)a2 statsFlags:(unsigned long long *)a3 results:(id *)a4;
- (id)initWithAnalysisResults:(id)a0;
- (id)initWithFlagHasFaceOrPet:(BOOL)a0;

@end
