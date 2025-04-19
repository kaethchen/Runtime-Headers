@interface VMUDuplicatesAnalyzer : VMUAnalyzerBase

@property (nonatomic) BOOL invertCallTrees;
@property (nonatomic) BOOL showRawClassNames;
@property (nonatomic) BOOL stringsOnly;
@property (nonatomic) unsigned long long minimumLabelCount;
@property (nonatomic) BOOL showStacks;
@property (nonatomic) BOOL fullStacks;
@property (nonatomic) BOOL showCallTrees;
@property (nonatomic) BOOL quiet;
@property (nonatomic) unsigned int objectContentLevel;

- (const char *)analyzerName;
- (id)_analysisSummaryWithGraphOrScanner:(id)a0;
- (id)analysisSummaryWithError:(id *)a0;
- (BOOL)findStringDupsByStack:(id)a0 stackLogReader:(id)a1 block:(id /* block */)a2;
- (BOOL)findStringDupsByStack:(id)a0 stackLogReader:(id)a1 fieldBlock:(id /* block */)a2;
- (BOOL)findStringDupsInGraph:(id)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1 stackLogReader:(id)a2 block:(id /* block */)a3;
- (BOOL)findStringDupsInGraph:(id)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1 stackLogReader:(id)a2 fieldBlock:(id /* block */)a3;
- (void)fullAnalysisWithBlock:(id /* block */)a0;
- (void)summaryWithGraph:(id)a0 block:(id /* block */)a1;

@end
