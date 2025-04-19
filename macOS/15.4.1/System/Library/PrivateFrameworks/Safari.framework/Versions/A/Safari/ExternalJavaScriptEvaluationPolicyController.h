@interface ExternalJavaScriptEvaluationPolicyController : NSObject

- (BOOL)_canToggleSecurePreferenceWithName:(id)a0 backedByAuthorizationRight:(int)a1;
- (void)_toggleSecurePreferenceWithName:(id)a0 backedByAuthorizationRight:(int)a1;
- (BOOL)javaScriptIsAllowedFromAppleEvents;
- (BOOL)javaScriptIsAllowedInSmartSearchField;
- (void)toggleAllowJavaScriptFromAppleEvents;
- (void)toggleAllowJavaScriptInSmartSearchField;

@end
