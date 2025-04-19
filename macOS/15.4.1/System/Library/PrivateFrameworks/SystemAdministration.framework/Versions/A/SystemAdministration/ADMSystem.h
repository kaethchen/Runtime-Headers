@class NSString, NSUUID, NSArray;

@interface ADMSystem : NSObject

@property (readonly, copy) NSString *volume;
@property (readonly, copy) NSString *_mountPath;
@property (readonly, retain) NSUUID *volumeUUID;
@property (readonly) BOOL _isPreInstall;
@property (readonly) NSString *_clonedUserDataPath;
@property (readonly) BOOL hasDiskUser;
@property (readonly) BOOL hasInstallUser;
@property (readonly) BOOL hasSecureTokens;
@property (readonly) BOOL hasOwners;
@property (readonly, retain) NSArray *localUsers;

+ (id)_dataVolumeForSystemMountedAtPath:(id)a0 error:(id *)a1;
+ (id)_mountPathForVolume:(id)a0 error:(id *)a1;
+ (id)_volumeForSystemMountedAtPath:(id)a0 error:(id *)a1;
+ (id)currentSystem;
+ (id)systemMountedAtPath:(id)a0 error:(id *)a1;
+ (id)systemWithDataTargetMountedAtPath:(id)a0 pathForClonedUserData:(id)a1 error:(id *)a2;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)redactedDescription;
- (id)node;
- (id)_nodeWithError:(id *)a0;
- (BOOL)hasSecureTokens;
- (BOOL)_transferOwnershipWithOwner:(id)a0 uuid:(id)a1 password:(id)a2 currentSystemAdminCredential:(id)a3 existingSecureTokenCredential:(id)a4 error:(id *)a5;
- (BOOL)_validateOwnershipTransferWithOwner:(id)a0 password:(id)a1 currentSystemAdminCredential:(id)a2 existingSecureTokenCredential:(id)a3 error:(id *)a4;
- (BOOL)hasDiskUser;
- (BOOL)hasInstallUser;
- (BOOL)hasOwners;
- (id)initWithDataVolume:(id)a0 mountPath:(id)a1 isPreInstall:(BOOL)a2 pathForClonedUserData:(id)a3;
- (id)localUserWithName:(id)a0 error:(id *)a1;
- (id)localUserWithUUID:(id)a0 error:(id *)a1;
- (id)localUsers;
- (BOOL)primeOwnershipAndCloneOwner:(id)a0 currentSystemAdminCredential:(id)a1 existingSecureTokenCredential:(id)a2 error:(id *)a3;
- (BOOL)primeOwnershipWithoutCloningOwner:(id)a0 currentSystemAdminCredential:(id)a1 existingSecureTokenCredential:(id)a2 error:(id *)a3;
- (BOOL)provisionSecureTokenUsers:(id)a0 andGrantOwnershipUsingOwner:(id)a1 currentSystemAdminCredential:(id)a2 existingSecureTokenCredential:(id)a3 error:(id *)a4;

@end
