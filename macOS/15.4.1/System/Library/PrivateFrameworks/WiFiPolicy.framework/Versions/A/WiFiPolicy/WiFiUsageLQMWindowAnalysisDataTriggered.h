@class NSString, NSArray;

@interface WiFiUsageLQMWindowAnalysisDataTriggered : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *dataTriggerReason;
@property (readonly, nonatomic) NSArray *triggerCriteriaList;

- (void).cxx_destruct;
- (void)performAnalysis;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 andSubReason:(id)a1 andContext:(struct context { BOOL x0; BOOL x1; BOOL x2; })a2 andTimestamp:(id)a3 onQueue:(id)a4;

@end
