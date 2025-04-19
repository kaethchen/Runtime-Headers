@interface UpdatePreboot : NSObject

+ (void)initialize;
+ (id)addOrModifyUsersForDisk:(id)a0 doOnlyUser:(id)a1 useExistingAdminInfo:(BOOL)a2 usersAndAttributes:(id)a3 adminUsers:(id)a4;
+ (int)backerOuterBeginForSubjectDir:(id)a0 tmpFilePath:(id *)a1;
+ (void)backerOuterEndForError:(int)a0 forSubjectDir:(id)a1 forTmpFilePath:(id)a2;
+ (int)calcAPFSContainerReferenceForVolume:(id)a0 containerReference:(id *)a1;
+ (int)calcAPFSCryptoUsersForDataVolume:(id)a0 cryptoUsers:(id *)a1;
+ (int)calcAPFSPrebootRoleVolumeForContainerReference:(id)a0 prebootVolumeBSD:(id *)a1;
+ (int)calcAPFSPrebootVolumeForVolume:(id)a0 mountPointOverride:(id)a1 prebootDisk:(id *)a2 prebootMountPoint:(id *)a3 prebootDirectory:(id *)a4;
+ (int)calcAPFSRoleVolumesForGroupedVolume:(id)a0 systemVolume:(id *)a1 dataVolume:(id *)a2;
+ (int)calcAdminUserRecoveryInfoPListEntryUserUUID:(id)a0 shortNameAndKey:(id)a1 fullName:(id)a2 authenticationAuthority:(id)a3 buildingDict:(id)a4;
+ (int)calcArrayForKeyInDictionary:(id)a0 key:(id)a1 expectedType:(Class)a2 errIfKeyNotFound:(int)a3 errIfWrongType:(int)a4 outArr:(id *)a5;
+ (int)calcArrayItemForKeyInDictionary:(id)a0 key:(id)a1 index:(unsigned long long)a2 expectedType:(Class)a3 errIfKeyNotFound:(int)a4 errIfArrCountZero:(int)a5 errIfIndexOutOfBounds:(int)a6 errIfWrongType:(int)a7 outObj:(id *)a8 outArr:(id *)a9;
+ (int)calcDMPrebootInfoPListEntryUserUUID:(id)a0 type:(id)a1 shortName:(id)a2 fullName:(id)a3 pictureData:(id)a4 pictureFormat:(id)a5 picturePathExtension:(id)a6 passwordHint:(id)a7 buildingDict:(id)a8;
+ (int)calcDiskUUIDForDisk:(id)a0 UUID:(id *)a1;
+ (int)calcEncryptedRootPListEntryFDEUserUUID:(id)a0 type:(int)a1 name:(id)a2 hint:(id)a3 secret:(id)a4 perUserEFIGraphics:(id)a5 perUserEFIUserData:(id)a6 buildingDict:(id)a7;
+ (int)calcFirstValueOfArrayForKeyInDictionary:(id)a0 key:(id)a1 expectedType:(Class)a2 errIfKeyNotFound:(int)a3 errIfArrCountZero:(int)a4 errIfArrCountTwoPlus:(int)a5 errIfWrongType:(int)a6 outFirstObj:(id *)a7 outArr:(id *)a8;
+ (int)calcIORegObjectForDisk:(id)a0 ioRegEntry:(unsigned int *)a1 ioRegProps:(struct __CFDictionary **)a2;
+ (int)calcMountPointForDisk:(id)a0 mountPoint:(id *)a1;
+ (int)calcUpdatePrebootLockAcquireForMP:(id)a0 forSD:(id)a1 cwdFD:(int *)a2 flockFD:(int *)a3;
+ (int)calcUpdatePrebootLockReleaseForCWDFD:(int *)a0 forFLOCKFD:(int *)a1;
+ (int)calcVolumeGroupUUIDForDisk:(id)a0 UUID:(id *)a1;
+ (int)copyFileFromPath:(id)a0 toDirAtPath:(id)a1 newName:(id)a2 interimDirs:(BOOL)a3 recursive:(BOOL)a4 preDelete:(BOOL)a5 flags:(unsigned int)a6 copyFileErr:(int *)a7;
+ (void)copyIfExistsFromPath:(id)a0 toDirAtPath:(id)a1 abortOnErr:(BOOL)a2 didTry:(BOOL *)a3 setErrIfErr:(int *)a4 shouldAbort:(BOOL *)a5;
+ (id)deleteUserForDisk:(id)a0 user:(id)a1;
+ (id)modifyAdminGroupForDisk:(id)a0 adminUsers:(id)a1 removeUserFromAdmin:(id)a2 addUserToAdmin:(id)a3;
+ (void)setNarrativeOutput:(BOOL)a0 redirect:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1;
+ (void)setTestPrebootRedirect:(id)a0;

- (void)dealloc;
- (id)init;
- (BOOL)calcIsAppleSilicon;

@end
