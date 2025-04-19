@class NSSet;

@interface IntelligenceFlowPlannerRuntime.PlanResolutionModelInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ tuples;
    void /* unknown type, empty encoding */ deviceContext;
    void /* unknown type, empty encoding */ candidateInteractions;
    void /* unknown type, empty encoding */ tupleInteractions_candidates;
    void /* unknown type, empty encoding */ tupleInteractions_alignment;
    void /* unknown type, empty encoding */ similarityScores;
    void /* unknown type, empty encoding */ riskLevel;
    void /* unknown type, empty encoding */ candidate_risk;
    void /* unknown type, empty encoding */ interval_until_start_time;
    void /* unknown type, empty encoding */ forcedPromptRate;
    void /* unknown type, empty encoding */ parameterType;
    void /* unknown type, empty encoding */ alreadyPrompted;
    void /* unknown type, empty encoding */ isResolved;
    void /* unknown type, empty encoding */ component;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
