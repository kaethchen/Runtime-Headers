@class NSArray, NSMutableArray, CNUIUserActionItem;

@interface CNUIUserActionDisambiguationModelFinalizer : NSObject

@property (retain, nonatomic) CNUIUserActionItem *defaultAction;
@property (retain, nonatomic) NSMutableArray *actions;
@property (retain, nonatomic) NSArray *recentActions;
@property (retain, nonatomic) NSArray *directoryServiceActions;
@property (retain, nonatomic) NSArray *foundOnDeviceActions;
@property (nonatomic) BOOL hasDefaultApp;

+ (id)modelWithDefaultAction:(id)a0 actions:(id)a1 recentActions:(id)a2 directoryServiceActions:(id)a3 foundOnDeviceActions:(id)a4 hasDefaultApp:(BOOL)a5;

- (void).cxx_destruct;
- (id)model;
- (void)removeUninterestingItentActions;
- (id)initWithDefaultAction:(id)a0 actions:(id)a1 recentActions:(id)a2 directoryServiceActions:(id)a3 foundOnDeviceActions:(id)a4 hasDefaultApp:(BOOL)a5;
- (void)promoteLoneActionToBeDefault;
- (void)promoteLoneManagedCallProviderActionToBeDefault;
- (void)removeCallProviderOverlappingIntentActions;
- (void)removeDefaultActionFromListOfActions;
- (void)removeDiscoveredActionsAlreadyCurated;
- (void)removeDuplicateIntentActionsFromSameProvider;

@end
