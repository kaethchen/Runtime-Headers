@class NSString;

@interface SKCSDisk : SKDisk <SKEncryptedDiskProtocol>

@property (retain) NSString *csDiskUUID;
@property (retain) NSString *csLVGUUID;
@property (retain) NSString *csFamilyUUID;
@property BOOL isEncrypted;
@property BOOL isConverting;
@property BOOL isDisallowedForCSOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (BOOL)unlockWithiCloudRecoveryPCSSet:(struct _PCSIdentitySetData { } *)a0;
- (id)minimalDictionaryRepresentation;
- (BOOL)_iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1 addingUsers:(id)a2 removingUsers:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (BOOL)_iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1 addingUsers:(id)a2 removingUsers:(id)a3 resettingUserPasswords:(id)a4 handlingProgress:(id /* block */)a5 withCompletionBlock:(id /* block */)a6;
- (BOOL)_unlockWithiCloudRecovery:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1;
- (BOOL)canResize;
- (BOOL)changeDiskOldPassword:(id)a0 toNewPassword:(id)a1 withHint:(id)a2;
- (id)copyRootEncyrptionContext;
- (id)decryptWithPassword:(id)a0;
- (id)decryptWithPassword:(id)a0 forUser:(id)a1;
- (BOOL)establishReserveKEK:(id)a0;
- (id)getFDEUserDictionaries;
- (id)getFDEUsers;
- (BOOL)iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (BOOL)iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (BOOL)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(struct _PCSIdentitySetData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (BOOL)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(struct _PCSIdentitySetData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (id)innerDescriptionWithPrivateData:(BOOL)a0;
- (BOOL)isVirtualDiskType;
- (BOOL)manageFDEUsersWithPassword:(id)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (BOOL)manageFDEUsersWithPassword:(id)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (BOOL)matchesDictionary:(id)a0;
- (id)supportedFilesystems;
- (id)unlockWithPassword:(id)a0 forUser:(id)a1;
- (BOOL)unlockWithiCloudRecovery:(struct _PCSIdentityData { } *)a0;
- (BOOL)validateEncryptionPassword:(id)a0;
- (id)validateEncryptionPassword:(id)a0 forUser:(id)a1;

@end
