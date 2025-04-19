@class NSMutableDictionary, NSSet, NSMutableSet, NSObject;
@protocol OS_os_log;

@interface CSScenarioManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *logger;
@property (retain, nonatomic) NSMutableDictionary *allScenariosByIdentifier;
@property (retain, nonatomic) NSMutableSet *activeScenarios;
@property (retain, nonatomic) NSMutableDictionary *activeScenariosWithRestrictions;
@property (retain, nonatomic) NSMutableDictionary *affectedScenarioByContextIdentifier;
@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) NSSet *activeScenariosLastEvaluation;
@property (retain, nonatomic) NSSet *activeScenariosLastPublished;

+ (id)sharedInstance;

- (id)description;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)_init;
- (void)addObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_addContextStoreObserverForIdentifier:(id)a0;
- (void)evaluateScenarios:(id)a0;
- (void)evaluateScenariosPostInit;
- (void)notifyObserversOfActiveScenarios:(id)a0 previousScenarios:(id)a1;
- (void)registerScenario:(id)a0;
- (id)restrictionsForScenario:(id)a0;
- (id)scenarioForIdentifier:(id)a0;

@end
