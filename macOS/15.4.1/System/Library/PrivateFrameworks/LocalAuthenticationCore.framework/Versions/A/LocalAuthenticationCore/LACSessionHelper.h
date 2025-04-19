@interface LACSessionHelper : NSObject

+ (id)currentSession;

- (long long)authenticationRequirementsForMechanismEvent:(long long)a0;
- (long long)authenticationRequirementsForUIController:(long long)a0;
- (BOOL)canCurrentSessionSatisfyAuthenticationRequirements:(long long)a0 error:(id *)a1;
- (id)_canCurrentSessionPresentUiWithSessionDict:(id)a0 physicalPresenceRequired:(BOOL)a1;
- (id)_canCurrentSessionSatisfyAuthenticationRequirements:(long long)a0;
- (id)_currentSessionDictionary;
- (BOOL)_isScreenWatcherPresent;

@end
