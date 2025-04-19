@class NSString, TCProgressContext;

@interface TCProgressStage : NSObject {
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    NSString *m_name;
    TCProgressStage *m_parentStage;
    TCProgressContext *m_context;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)end;
- (void)setProgress:(double)a0;
- (double)currentPosition;
- (void)advanceProgress:(double)a0;
- (id)initBranchWithSteps:(double)a0 takingSteps:(double)a1 name:(id)a2 inContext:(id)a3;
- (id)initRootStageInContext:(id)a0;
- (id)initWithSteps:(double)a0 takingSteps:(double)a1 name:(id)a2 inContext:(id)a3;
- (id)parentStage;

@end
