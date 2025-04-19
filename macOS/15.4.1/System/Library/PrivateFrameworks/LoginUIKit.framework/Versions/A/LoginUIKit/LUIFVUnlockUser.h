@class NSDate;

@interface LUIFVUnlockUser : LUIUser

@property (retain) NSDate *backOffEndDate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)node;
- (BOOL)isManaged;
- (BOOL)isAdminUser;
- (id)appleIDs;
- (long long)authenticate:(id)a0;
- (id)ODRecord;
- (BOOL)isFileVaultUser;
- (struct __CSIdentity { } *)_identityRef;
- (BOOL)authenticationAllowed;
- (double)backOffSeconds;
- (BOOL)canLogin;
- (BOOL)canModifyPassword;
- (BOOL)canResetPasswordWithAppleID;
- (long long)changePassword:(id)a0 toNewPassword:(id)a1 hint:(id)a2;
- (BOOL)hasComplexPassword;
- (BOOL)hasSACLAccess;
- (BOOL)isContinuityUnlockEnabled;
- (BOOL)isLocalUser;
- (BOOL)isMBSetupUser;
- (BOOL)isMobileHomeUser;
- (BOOL)isNetworkUser;
- (BOOL)isXcodeUser;
- (BOOL)migratedFromWindows;
- (BOOL)minutesUntilPasswordExpires:(unsigned long long *)a0;
- (id)mobileHomeUserNode;
- (BOOL)newPasswordRequired;
- (id)passwordPolicy;
- (unsigned int)primaryGroupID;
- (BOOL)resetSecureTokenWithOldPassphrase:(id)a0 toNewPassphrase:(id)a1;
- (BOOL)setCredentialsWithBootstrapToken:(id)a0;
- (void)setODRecord:(id)a0;
- (BOOL)usesBasicPassword;

@end
