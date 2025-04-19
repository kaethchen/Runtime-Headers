@class NSNumber;

@interface AMSUIWebWalletPassAction : AMSUIWebAction

@property BOOL attemptLynxProvisioning;
@property (retain) NSNumber *lookupFeature;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
