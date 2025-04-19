@interface ABAddressBookSaveOptionsSanitizer : NSObject

+ (id)log;
+ (BOOL)clientHasEntitlement:(id)a0;
+ (BOOL)isClientAllowedToBypassRestrictions;
+ (id)saveOptionsBySanitizingClientRequestedSaveOptions:(id)a0;
+ (id)saveOptionsBySanitizingIgnoresGuardianRestrictionsInOptions:(id)a0;

@end
