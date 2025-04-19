@interface AVBTimeErrorAnalysis : NSObject

@property (readonly, nonatomic) long long numberOfErrors;
@property (readonly, nonatomic) double *timestamps;
@property (readonly, nonatomic) double *timeErrors;
@property (readonly, nonatomic) unsigned long long firstTimestamp;
@property (readonly, nonatomic) BOOL calculated;
@property (readonly, nonatomic) long long lowestWindowSize;
@property (readonly, nonatomic) long long highestWindowSize;
@property (readonly, nonatomic) long long calculatedStepSize;
@property (readonly, nonatomic) long long threadingLimit;
@property (readonly, nonatomic) long long threadingSegment;
@property (readonly, nonatomic) double averagePeriod;
@property (readonly, nonatomic) long long analysisLimit;

+ (id)keyPathsForValuesAffectingAnalysisLimit;

- (void)dealloc;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0;
- (void)performAnalysis;
- (void)_performAnalysisFromWindowSize:(long long)a0 toWindowSize:(long long)a1 stepSize:(long long)a2;
- (id)additionalScriptInitialization;
- (id)additionalScriptPlots:(id)a0;
- (id)additionalScriptRecords;
- (long long)analysisLimit;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1 fromStartWindowSize:(long long)a2 toEndWindowSize:(long long)a3 stepSize:(long long)a4;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0 withFilename:(id)a1;
- (id)generatePythonScriptWithOutputPath:(id)a0 fileName:(id)a1 titleName:(id)a2 plotPath:(id)a3 showPlot:(BOOL)a4;
- (void)performAnalysisFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2;
- (void)performAnalysisFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2 withThreadingOption:(long long)a3;
- (void)performAnalysisWithThreadingOption:(long long)a0;
- (id)plotSize;
- (id)plotTitle;
- (id)plotYLabel;
- (id)plotYLimits:(id)a0;
- (long long)threadingLimit;
- (long long)threadingSegment;
- (id)variableName;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0 withFilename:(id)a1 relativeToFirstTimestamp:(BOOL)a2;
- (id)initWithTimeErrorSequence:(id)a0;
- (BOOL)writeAnalysisToDirectoryURL:(id)a0 withTitle:(id)a1 csvFilename:(id)a2 plotFilename:(id)a3 scriptFilename:(id)a4;
- (BOOL)writeAnalysisToDirectoryURL:(id)a0 withTitle:(id)a1 csvFilename:(id)a2 plotFilename:(id)a3 scriptFilename:(id)a4 fromStartWindowSize:(long long)a5 toEndWindowSize:(long long)a6 stepSize:(long long)a7;

@end
