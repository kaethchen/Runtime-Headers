@class NSMutableDictionary, IRCandidateSelector, NSDictionary, IRCandidateClassificationDetectorFiltered, IRCandidateClassificationDetectorSameSpace;

@interface IRClassificationGenerator : NSObject

@property (retain, nonatomic) NSMutableDictionary *internalContexts;
@property (retain, nonatomic) NSMutableDictionary *internalPolicyInspections;
@property (retain, nonatomic) IRCandidateClassificationDetectorFiltered *detectorFiltered;
@property (retain, nonatomic) IRCandidateClassificationDetectorSameSpace *detectorSameSpace;
@property (retain, nonatomic) IRCandidateSelector *selector;
@property (readonly, nonatomic) NSDictionary *contexts;
@property (readonly, nonatomic) NSDictionary *policyInspections;

- (id)init;
- (void).cxx_destruct;
- (void)_adjustAdditionalFieldsForCandidate:(id)a0 selectedCandidateIdentifier:(id)a1 historyEvents:(id)a2 systemState:(id)a3;
- (void)_adjustClassificationForCandidate:(id)a0 selectedCandidateIdentifier:(id)a1 systemState:(id)a2 andDate:(id)a3;
- (void)_fillInspectionIfNeeded:(BOOL)a0 withCandidates:(id)a1 selectedCandidate:(id)a2 negativeInputs:(id)a3 stateMachineClassification:(long long)a4;
- (void)_setCallToActionForCandidate:(id)a0 withHistoryEventsAsc:(id)a1 andSystemState:(id)a2;
- (void)_setConservativeFilteredForCandidate:(id)a0 andSystemState:(id)a1;
- (void)_setLockScreenControlForCandidate:(id)a0;
- (void)_setSortingHintForCandidate:(id)a0;
- (BOOL)generateClassificationsWithCandiatesContainer:(id)a0 systemState:(id)a1 historyEventsContainer:(id)a2 miloPrediction:(id)a3 nearbyDeviceContainer:(id)a4 fillInspection:(BOOL)a5 date:(id)a6;

@end
