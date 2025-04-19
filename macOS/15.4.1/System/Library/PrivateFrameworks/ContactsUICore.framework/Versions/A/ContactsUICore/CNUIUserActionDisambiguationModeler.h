@protocol CNUIDefaultUserActionFetcher, CNUIUserActionDiscoveringEnvironment, CNUIUserActionTargetDiscovering, CNUIUserActionRanking;

@interface CNUIUserActionDisambiguationModeler : NSObject

@property (retain, nonatomic) id<CNUIUserActionTargetDiscovering> targetDiscoveringHelper;
@property (retain, nonatomic) id<CNUIUserActionRanking> rankingHelper;
@property (retain, nonatomic) id<CNUIDefaultUserActionFetcher> defaultActionFetcher;
@property (retain, nonatomic) id<CNUIUserActionDiscoveringEnvironment> discoveringEnvironment;

+ (id)descriptorForRequiredKeys;

- (id)init;
- (void).cxx_destruct;
- (id)schedulerProvider;
- (void)setContactStore:(id)a0;
- (id)defaultAppsScorerForActionType:(id)a0;
- (id)initWithDiscoveringEnvironment:(id)a0;
- (id)_discoverActionsForContact:(id)a0 actionType:(id)a1;
- (id)defaultActionChangedObservable;
- (id)defaultActionFromActions:(id)a0;
- (id)discoverActionsForContact:(id)a0 actionType:(id)a1;
- (void)emptyDefaultAppsCaches;
- (BOOL)hasDefaultAppForActionType:(id)a0;
- (id)initWithTargetDiscoveringHelper:(id)a0 rankingHelper:(id)a1 defaultActionFetcher:(id)a2 discoveringEnvironment:(id)a3;
- (id)modelsWithActionType:(id)a0 defaultAction:(id)a1 actions:(id)a2 recentActions:(id)a3 sorts:(BOOL)a4 throttles:(BOOL)a5;
- (id)modelsWithContact:(id)a0 actionType:(id)a1 defaultActionItem:(id)a2;
- (id)recentActionsFromActions:(id)a0;
- (id)sortActionsOnModel:(id)a0 actionType:(id)a1;
- (id)targetsChangedObservableForActionType:(id)a0;
- (id)thirdPartyActionsForContactProperty:(id)a0;
- (id)thirdPartyTargetsForActionTypes:(id)a0;

@end
