@class NSString, NSSet, NSDictionary;
@protocol IRServicePackageAdapter;

@interface IRPolicyEngine : NSObject

@property (nonatomic) long long servicePackage;
@property (retain, nonatomic) NSString *lastEventsString;
@property (copy, nonatomic) NSSet *bundlesWithSignificantInteraction;
@property (retain, nonatomic) id<IRServicePackageAdapter> servicePackageAdapter;
@property (readonly, copy, nonatomic) NSDictionary *contexts;
@property (readonly, copy, nonatomic) NSDictionary *policyInspections;

- (void).cxx_destruct;
- (id)initWithServicePackage:(long long)a0;
- (id)_lastEventsStringFromHistoryContainer:(id)a0 candidatesContainer:(id)a1 miloResults:(id)a2;
- (BOOL)shouldAskForLowLatencyMiLo:(id)a0 historyEventsContainer:(id)a1;
- (BOOL)shouldRejectEvent:(id)a0 withHistoryEventsContainer:(id)a1 withSystemState:(id)a2 forCandidate:(id)a3 date:(id)a4;
- (BOOL)updateBundlesWithSignificantInteractionForEvent:(id)a0 candidatesContainer:(id)a1 historyEventsContainer:(id)a2;
- (BOOL)updateContextWithDate:(id)a0 candidatesContainer:(id)a1 historyEventsContainer:(id)a2 systemState:(id)a3 miloProviderLslPredictionResults:(id)a4 nearbyDeviceContainer:(id)a5 fillInspection:(BOOL)a6;

@end
