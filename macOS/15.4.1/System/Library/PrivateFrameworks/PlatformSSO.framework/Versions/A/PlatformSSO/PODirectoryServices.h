@class NSString;

@interface PODirectoryServices : NSObject <POUserIdentifierProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allLocalUsers;
- (id)uidForUserName:(id)a0;
- (id)nextAvailableGroupID;
- (BOOL)isUserPlatformSSOTemporaryUser:(id)a0;
- (BOOL)_addUser:(id)a0 userNodeType:(unsigned int)a1 userNodeName:(id)a2 toGroup:(id)a3 groupNodeType:(unsigned int)a4 groupNodeName:(id)a5 returningError:(id *)a6;
- (id)_findODRecordForUserName:(id)a0;
- (id)_findUserNameForIdPUniqueIdentifier:(id)a0 userNodeType:(unsigned int)a1 userNodeName:(id)a2;
- (id)_findUserNameForLoginName:(id)a0 userNodeType:(unsigned int)a1 userNodeName:(id)a2;
- (BOOL)_removeAllPlatformSSORecords:(id)a0;
- (BOOL)_setGroups:(id)a0 groupNodeType:(unsigned int)a1 groupNodeName:(id)a2 forUser:(id)a3 userNodeType:(unsigned int)a4 userNodeName:(id)a5 returningError:(id *)a6;
- (BOOL)_setLocalAccountPasswordForUser:(id)a0 newPassword:(id)a1 node:(id)a2 error:(id *)a3;
- (BOOL)_updateSearchPolicyToAddPlatformSSO:(BOOL)a0 returningError:(id *)a1;
- (BOOL)addLocalUser:(id)a0 toLocalGroup:(id)a1 returningError:(id *)a2;
- (BOOL)addPlatformSSOToSearchPolicyReturningError:(id *)a0;
- (BOOL)addPlatformSSOUser:(id)a0 toLocalGroup:(id)a1 returningError:(id *)a2;
- (BOOL)addPlatformSSOUser:(id)a0 toPlatformSSOGroup:(id)a1 returningError:(id *)a2;
- (BOOL)addRecord:(id)a0 toGroup:(id)a1 nodeType:(unsigned int)a2 nodeName:(id)a3 returningError:(id *)a4;
- (BOOL)createOrUpdateAdminGroups:(id)a0 otherGroups:(id)a1;
- (BOOL)createPlatformSSOAdminGroupReturningError:(id *)a0;
- (unsigned long long)createTemporaryUser:(id)a0 password:(id)a1 error:(id *)a2;
- (unsigned long long)createUser:(id)a0 password:(id)a1 name:(id)a2 loginUserName:(id)a3 recordUUID:(id)a4 idpIdentifier:(id)a5 returningCreatedUserName:(id *)a6 error:(id *)a7;
- (id)findLocalUserNameForIdPUniqueIdentifier:(id)a0;
- (id)findLocalUserNameForLoginName:(id)a0;
- (id)findPlatformSSOAltSecurityIdentityForUserName:(id)a0;
- (id)findPlatformSSOUserForLoginName:(id)a0;
- (id)findPlatformSSOUserNameForIdPUniqueIdentifier:(id)a0;
- (BOOL)isGroupIDUsedInLocalNodes:(unsigned int)a0;
- (BOOL)isLocalAccountAndNotGuest:(id)a0;
- (BOOL)isLocalUser:(id)a0 memberOfGroup:(id)a1;
- (BOOL)isLoginKeychainUnlocked;
- (BOOL)isPlatformSSOUser:(id)a0 memberOfGroup:(id)a1;
- (BOOL)isUser:(id)a0 userNodeType:(unsigned int)a1 userNodeName:(id)a2 memberofGroup:(id)a3 groupNodeType:(unsigned int)a4 groupNodeName:(id)a5 returningError:(id *)a6;
- (void)registerExternalAuthentication:(BOOL)a0 userName:(id)a1;
- (BOOL)removeAllPlatformSSOGroups;
- (BOOL)removeAllPlatformSSOUsers;
- (BOOL)removeLocalUser:(id)a0 fromLocalGroup:(id)a1 returningError:(id *)a2;
- (BOOL)removePlatformSSOAdminGroupReturningError:(id *)a0;
- (BOOL)removePlatformSSOFromSearchPolicyReturningError:(id *)a0;
- (BOOL)removePlatformSSOUser:(id)a0 fromLocalGroup:(id)a1 returningError:(id *)a2;
- (BOOL)removePlatformSSOUser:(id)a0 fromPlatformSSOGroup:(id)a1 returningError:(id *)a2;
- (BOOL)removePlatformSSOUser:(id)a0 returningError:(id *)a1;
- (BOOL)removeRecord:(id)a0 fromGroup:(id)a1 nodeType:(unsigned int)a2 nodeName:(id)a3 returningError:(id *)a4;
- (BOOL)removeUser:(id)a0 userNodeType:(unsigned int)a1 userNodeName:(id)a2 toGroup:(id)a3 groupNodeType:(unsigned int)a4 groupNodeName:(id)a5 returningError:(id *)a6;
- (BOOL)setAltSecurityIdentity:(id)a0 forIdentifier:(id)a1;
- (BOOL)setFullName:(id)a0 forUser:(id)a1;
- (BOOL)setGroups:(id)a0 forLocalUser:(id)a1 returningError:(id *)a2;
- (BOOL)setGroups:(id)a0 forPlatformSSOUser:(id)a1 returningError:(id *)a2;
- (BOOL)setLocalAccountPasswordForUser:(id)a0 newPassword:(id)a1 secureTokenID:(id)a2 secureTokenPassword:(id)a3 error:(id *)a4;
- (BOOL)setLocalAccountPasswordForUser:(id)a0 oldPassword:(id)a1 withNewPassword:(id)a2 error:(id *)a3;
- (BOOL)setLocalAccountPasswordUsingBootstrapTokenForUser:(id)a0 newPassword:(id)a1 bootstrapToken:(id)a2 error:(id *)a3;
- (BOOL)setPasswordHint:(id)a0 forUser:(id)a1;
- (BOOL)setPlatformSSOUniqueIdentifier:(id)a0 forUser:(id)a1;
- (id)shortNameForUserName:(id)a0;
- (id)uniqueIdentifierForUserName:(id)a0;
- (BOOL)verifyLocalAccountPassword:(id)a0 forUser:(id)a1;

@end
