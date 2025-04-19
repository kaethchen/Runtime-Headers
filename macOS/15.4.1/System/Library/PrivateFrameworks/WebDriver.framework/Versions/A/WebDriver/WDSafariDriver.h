@interface WDSafariDriver : NSObject

+ (struct AuthorizationOpaqueRef { } *)authorizationWithUser:(id)a0 password:(id)a1;
+ (id)dictionaryForAuthenticateWebDeveloperRight;
+ (id)dictionaryForIsWebDeveloperRight;
+ (id)dictionaryForSafariDriverAllowRight;
+ (BOOL)existingRight:(id)a0 matchesExpectedRight:(id)a1;
+ (id)promptForPassword;
+ (BOOL)validateGroupMembershipRepairingIfNeeded:(BOOL)a0 withUser:(id)a1 password:(id)a2;
+ (BOOL)validateGroupsRepairingIfNeeded:(BOOL)a0 withUser:(id)a1 password:(id)a2;
+ (BOOL)validateRightsRepairingIfNeeded:(BOOL)a0 withAuthorization:(struct AuthorizationOpaqueRef { } *)a1;
+ (BOOL)validateSafariAllowsRemoteAutomationRepairingIfNeeded;

@end
