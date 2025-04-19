@interface DMCPersonaHelper : NSObject

+ (id)currentPersonaID;
+ (BOOL)isCurrentPersonaEnterprise;
+ (id)performBlockUnderPersona:(id)a0 block:(id /* block */)a1;
+ (id)createEnterprisePersonaWithPasscodeData:(id)a0 passcodeDataType:(unsigned long long)a1 error:(id *)a2;
+ (id)createEnterprisePersonaWithDevicePasscode:(id)a0 error:(id *)a1;
+ (id)currentPersonaTypeString;
+ (id)enterprisePersonaIdentifier;
+ (BOOL)personaWithUniqueIdentifierExists:(id)a0;
+ (BOOL)removePersona:(id)a0 error:(id *)a1;
+ (id)_getCurrentUserGUIDAndReturnError:(id *)a0;
+ (id)enterprisePersonaDisplayName;
+ (id)fetchDirtyPersonaIDs;
+ (id)performBlockUnderPersonalPersona:(id /* block */)a0;
+ (void)removePersonaAndAccountsWithPersonaID:(id)a0;
+ (void)setPersonaIdentifierForApps:(id)a0 personaID:(id)a1 completionHandler:(id /* block */)a2;
+ (void)trackDirtyPersona:(id)a0;
+ (void)untrackAllDirtyPersonas;
+ (void)untrackDirtyPersona:(id)a0;

@end
