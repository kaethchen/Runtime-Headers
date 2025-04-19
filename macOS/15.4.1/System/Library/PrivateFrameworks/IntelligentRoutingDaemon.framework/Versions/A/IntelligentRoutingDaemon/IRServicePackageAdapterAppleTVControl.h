@class NSDictionary, NSMutableDictionary, NSString;

@interface IRServicePackageAdapterAppleTVControl : NSObject <IRServicePackageAdapter>

@property (retain, nonatomic) NSMutableDictionary *internalContexts;
@property (retain, nonatomic) NSMutableDictionary *internalPolicyInspections;
@property (readonly, nonatomic) NSDictionary *contexts;
@property (readonly, nonatomic) NSDictionary *policyInspections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_rules;
- (id)_filteredClassificationForCandidate:(id)a0 forClassificationEvaluated:(long long)a1;
- (id)_autoRouteClassificationForCandidate:(id)a0 forClassificationEvaluated:(long long)a1;
- (id)_autoRoutePositiveRulesClassificationForCandidate:(id)a0 forClassificationEvaluated:(long long)a1;
- (void)_classifyContext:(id)a0;
- (void)_evaluateOutputRules:(id)a0 contextWrapper:(id)a1;
- (id)_oneTapClassificationForCandidate:(id)a0 forClassificationEvaluated:(long long)a1;
- (BOOL)_outputRulesToContext:(id)a0 candidatesContainer:(id)a1 fillInspection:(BOOL)a2;
- (id)_reasonsForRejectingAutoRouteOrOneTapClassificationForCandidate:(id)a0;
- (id)_topOfListClassificationForCandidate:(id)a0 forClassificationEvaluated:(long long)a1;
- (id)_topOfListClassificationPositiveRulesForCandidate:(id)a0 forClassificationEvaluated:(long long)a1;
- (id)filterHistory:(id)a0 withCandidatesContainer:(id)a1;
- (BOOL)generateClassificationsWithCandiatesContainer:(id)a0 systemState:(id)a1 historyEventsContainer:(id)a2 miloPrediction:(id)a3 nearbyDeviceContainer:(id)a4 fillInspection:(BOOL)a5 date:(id)a6;
- (id)getSignificantBundlesWithCandidates:(id)a0 fromHistory:(id)a1;
- (BOOL)shouldAskForLowLatencyMiLo:(id)a0 historyEventsAsc:(id)a1;
- (BOOL)shouldConsiderEventForSignificantBundles:(id)a0;
- (BOOL)shouldRejectEvent:(id)a0 withHistoryEventsContainer:(id)a1 withSystemState:(id)a2 forCandidate:(id)a3 date:(id)a4;
- (id)uiAnalyticsWithEvent:(id)a0 forCandidateIdentifier:(id)a1 systemStateManager:(id)a2 candidatesContainer:(id)a3 inspections:(id)a4 statisticsManager:(id)a5 service:(id)a6 historyEventsContainer:(id)a7;

@end
