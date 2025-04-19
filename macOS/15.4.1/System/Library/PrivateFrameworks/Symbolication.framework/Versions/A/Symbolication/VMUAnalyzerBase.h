@class VMUVMRegionIdentifier, VMUDebugTimer, VMUProcessObjectGraph;

@interface VMUAnalyzerBase : NSObject {
    VMUProcessObjectGraph *_graph;
    VMUVMRegionIdentifier *_regionIdentifier;
    VMUDebugTimer *_debugTimer;
}

@property (readonly, nonatomic) const char *analyzerName;

+ (id)analyzerClasses;

- (void).cxx_destruct;
- (id)analysisSummaryWithError:(id *)a0;
- (void)fullAnalysisWithBlock:(id /* block */)a0;
- (id)initWithGraph:(id)a0 regionIdentifier:(id)a1 debugTimer:(id)a2;

@end
