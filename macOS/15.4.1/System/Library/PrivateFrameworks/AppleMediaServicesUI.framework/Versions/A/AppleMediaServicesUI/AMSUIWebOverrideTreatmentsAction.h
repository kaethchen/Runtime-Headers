@class NSDictionary;

@interface AMSUIWebOverrideTreatmentsAction : AMSUIWebAction

@property (retain) NSDictionary *treatmentOverrides;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
