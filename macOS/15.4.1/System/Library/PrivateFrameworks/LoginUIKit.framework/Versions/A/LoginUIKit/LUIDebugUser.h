@interface LUIDebugUser : LUIUser

- (id)init;
- (id)password;
- (BOOL)isSuspended;
- (id)initWithAttributes:(id)a0;
- (long long)authenticate:(id)a0;
- (BOOL)canLogin;
- (BOOL)canResetPasswordWithAppleID;
- (long long)changePassword:(id)a0 toNewPassword:(id)a1 hint:(id)a2;
- (BOOL)hasComplexPassword;
- (BOOL)hasSACLAccess;
- (BOOL)isLocalUser;
- (id)passwordPolicy;

@end
