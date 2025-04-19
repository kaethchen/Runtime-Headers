@interface IFMakeInstallPlanElement : IFInstallQueueElement

- (id)description;
- (long long)run;
- (id)logDescription;
- (BOOL)_resolveActions;
- (BOOL)_noteComponents;
- (BOOL)_applyHints;
- (BOOL)_setupPlan;

@end
