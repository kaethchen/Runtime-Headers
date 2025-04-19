@interface CNObservableContractEnforcementPreferences : NSObject

+ (BOOL)primitiveShouldEnforceRxProtocols;
+ (BOOL)primitiveShouldSwizzleNilResults;
+ (BOOL)shouldEnforceRxProtocols;
+ (BOOL)shouldSwizzleNilResults;

@end
