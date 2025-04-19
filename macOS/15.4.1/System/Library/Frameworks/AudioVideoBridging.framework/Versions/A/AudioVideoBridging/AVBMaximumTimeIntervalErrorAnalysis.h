@class NSArray;

@interface AVBMaximumTimeIntervalErrorAnalysis : AVBTimeErrorAnalysis {
    double *_negativeTimeErrors;
    double *_mtie;
}

@property (readonly, copy, nonatomic) NSArray *mtie;
@property (copy, nonatomic) NSArray *masks;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0;
- (void)_performAnalysisFromWindowSize:(long long)a0 toWindowSize:(long long)a1 stepSize:(long long)a2;
- (id)additionalScriptInitialization;
- (id)additionalScriptPlots:(id)a0;
- (id)additionalScriptRecords;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1 fromStartWindowSize:(long long)a2 toEndWindowSize:(long long)a3 stepSize:(long long)a4;
- (id)mtie;
- (id)mtieFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2;
- (id)plotSize;
- (id)plotTitle;
- (id)plotYLabel;
- (id)plotYLimits:(id)a0;
- (id)variableName;
- (id)initWithTimeErrorSequence:(id)a0;

@end
