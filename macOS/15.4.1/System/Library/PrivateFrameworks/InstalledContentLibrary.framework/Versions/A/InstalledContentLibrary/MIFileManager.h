@interface MIFileManager : NSObject

+ (id)defaultManager;
+ (id)_sanitizeFilePathForVarOrTmpSymlink:(id)a0 error:(id *)a1;

- (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)removeItemAtURL:(id)a0 error:(id *)a1;
- (BOOL)createSymbolicLinkAtURL:(id)a0 withDestinationURL:(id)a1 error:(id *)a2;
- (BOOL)moveItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)enumerateURLsForItemsInDirectoryAtURL:(id)a0 ignoreSymlinks:(BOOL)a1 withBlock:(id /* block */)a2;
- (BOOL)bundleAtURLIsPlaceholder:(id)a0;
- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 mode:(unsigned short)a2 class:(int)a3 error:(id *)a4;
- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 mode:(unsigned short)a2 error:(id *)a3;
- (id)dataForExtendedAttributeNamed:(id)a0 length:(unsigned long long)a1 fromURL:(id)a2 error:(id *)a3;
- (unsigned long long)diskUsageForURL:(id)a0;
- (BOOL)itemDoesNotExistAtURL:(id)a0;
- (BOOL)markBundleAsPlaceholder:(id)a0 withError:(id *)a1;
- (BOOL)setData:(id)a0 forExtendedAttributeNamed:(id)a1 onURL:(id)a2 error:(id *)a3;
- (BOOL)_moveItemAtURL:(id)a0 toURL:(id)a1 failIfSrcMissing:(BOOL)a2 error:(id *)a3;
- (id)_realPathForURL:(id)a0 allowNonExistentPathComponents:(BOOL)a1;
- (BOOL)_removeACLAtPath:(const char *)a0 isDir:(BOOL)a1 error:(id *)a2;
- (BOOL)_validateSymlink:(id)a0 withStartingDepth:(unsigned int)a1 andEndingDepth:(unsigned int *)a2;
- (BOOL)copyItemIfExistsAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)createTemporaryDirectoryInDirectoryURL:(id)a0 error:(id *)a1;
- (BOOL)dataProtectionClassOfItemAtURL:(id)a0 class:(int *)a1 error:(id *)a2;
- (id)destinationOfSymbolicLinkAtURL:(id)a0 error:(id *)a1;
- (BOOL)itemExistsAtURL:(id)a0;
- (BOOL)itemExistsAtURL:(id)a0 error:(id *)a1;
- (BOOL)moveItemIfExistsAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)realPathForURL:(id)a0 ifChildOfURL:(id)a1;
- (BOOL)removeItemAtURL:(id)a0 keepParent:(BOOL)a1 error:(id *)a2;
- (BOOL)setDataProtectionClassOfItemAtURL:(id)a0 toClass:(int)a1 ifPredicate:(id /* block */)a2 error:(id *)a3;
- (id)urlsForItemsInDirectoryAtURL:(id)a0 ignoringSymlinks:(BOOL)a1 error:(id *)a2;
- (BOOL)_bulkSetPropertiesForPath:(const char *)a0 existingFD:(int)a1 UID:(unsigned int)a2 GID:(unsigned int)a3 mode:(unsigned short)a4 flags:(unsigned int)a5 dataProtectionClass:(int)a6 removeACL:(BOOL)a7 error:(id *)a8;
- (BOOL)_copyItemAtURL:(id)a0 toURL:(id)a1 failIfSrcMissing:(BOOL)a2 alwaysClone:(BOOL)a3 ignoreErrors:(BOOL)a4 error:(id *)a5;
- (id)_dataForExtendedAttributeNamed:(id)a0 length:(unsigned long long)a1 onURL:(id)a2 orFD:(int)a3 error:(id *)a4;
- (id)_insecureCachedAppIdentifierIfMarkedWithEAFlag:(const char *)a0 bundleURL:(id)a1 allowPlaceholders:(BOOL)a2 error:(id *)a3;
- (BOOL)_itemIsType:(unsigned short)a0 withDescription:(id)a1 atURL:(id)a2 error:(id *)a3;
- (BOOL)_markEAFlag:(const char *)a0 forAppIdentifier:(id)a1 insecurelyCachedOnBundle:(id)a2 error:(id *)a3;
- (id)_realPathWhatExistsInPath:(id)a0 isDirectory:(BOOL)a1;
- (BOOL)_setData:(id)a0 forExtendedAttributeNamed:(id)a1 onURL:(id)a2 orFD:(int)a3 error:(id *)a4;
- (BOOL)_stageURLByCopying:(id)a0 toItemName:(id)a1 inStagingDir:(id)a2 stagingMode:(int)a3 settingUID:(unsigned int)a4 gid:(unsigned int)a5 dataProtectionClass:(int)a6 hasSymlink:(BOOL *)a7 error:(id *)a8;
- (id)aclTextFromURL:(id)a0 error:(id *)a1;
- (BOOL)bulkSetPropertiesForPath:(const char *)a0 UID:(unsigned int)a1 GID:(unsigned int)a2 mode:(unsigned short)a3 flags:(unsigned int)a4 dataProtectionClass:(int)a5 removeACL:(BOOL)a6 error:(id *)a7;
- (BOOL)bulkSetPropertiesForPath:(const char *)a0 withOpenFD:(int)a1 UID:(unsigned int)a2 GID:(unsigned int)a3 mode:(unsigned short)a4 flags:(unsigned int)a5 dataProtectionClass:(int)a6 removeACL:(BOOL)a7 error:(id *)a8;
- (BOOL)captureStoreDataFromDirectory:(id)a0 toDirectory:(id)a1 doCopy:(BOOL)a2 failureIsFatal:(BOOL)a3 includeiTunesMetadata:(BOOL)a4 withError:(id *)a5;
- (BOOL)clearPlaceholderStatusForBundle:(id)a0 withError:(id *)a1;
- (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 alwaysClone:(BOOL)a2 error:(id *)a3;
- (BOOL)copyItemIgnoringErrorsAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)dataForExtendedAttributeNamed:(id)a0 length:(unsigned long long)a1 fromFD:(int)a2 fdLocation:(id)a3 error:(id *)a4;
- (id)debugDescriptionForItemAtURL:(id)a0;
- (int)deviceForURLOrFirstAvailableParent:(id)a0 error:(id *)a1;
- (id)extendedAttributesFromURL:(id)a0 error:(id *)a1;
- (id)insecureCachedAppIdentifierIfAppClipForBundle:(id)a0 error:(id *)a1;
- (id)insecureCachedAppIdentifierIfValidatedByFreeProfileForBundle:(id)a0 error:(id *)a1;
- (id)installTypeFromExtendedAttributeOnBundle:(id)a0 error:(id *)a1;
- (BOOL)itemDoesNotExistOrIsNotDirectoryAtURL:(id)a0;
- (BOOL)itemIsDirectoryAtURL:(id)a0 error:(id *)a1;
- (BOOL)itemIsFIFOAtURL:(id)a0 error:(id *)a1;
- (BOOL)itemIsFileAtURL:(id)a0 error:(id *)a1;
- (BOOL)itemIsSocketAtURL:(id)a0 error:(id *)a1;
- (BOOL)itemIsSymlinkAtURL:(id)a0 error:(id *)a1;
- (void)logAccessPermissionsForURL:(id)a0;
- (id)modificationDateForURL:(id)a0 error:(id *)a1;
- (id)realPathForURL:(id)a0 allowNonExistentPathComponents:(BOOL)a1 isDirectory:(BOOL)a2 error:(id *)a3;
- (BOOL)removeExtendedAttributeNamed:(id)a0 fromURL:(id)a1 error:(id *)a2;
- (BOOL)secureRenameFromSourceURL:(id)a0 toDestinationURL:(id)a1 destinationStatus:(unsigned char)a2 error:(id *)a3;
- (BOOL)setAppClipAppIdentifier:(id)a0 insecurelyCachedOnBundle:(id)a1 error:(id *)a2;
- (BOOL)setData:(id)a0 forExtendedAttributeNamed:(id)a1 onFD:(int)a2 fdLocation:(id)a3 error:(id *)a4;
- (BOOL)setInstallType:(id)a0 inExtendedAttributeOnBundle:(id)a1 error:(id *)a2;
- (BOOL)setModificationDateToNowForURL:(id)a0 error:(id *)a1;
- (BOOL)setOwnerOfURL:(id)a0 toUID:(unsigned int)a1 gid:(unsigned int)a2 error:(id *)a3;
- (BOOL)setPermissionsForURL:(id)a0 toMode:(unsigned short)a1 error:(id *)a2;
- (BOOL)setValidatedByFreeProfileAppIdentifier:(id)a0 insecurelyCachedOnBundle:(id)a1 error:(id *)a2;
- (BOOL)stageURL:(id)a0 toItemName:(id)a1 inStagingDir:(id)a2 stagingMode:(int)a3 settingUID:(unsigned int)a4 gid:(unsigned int)a5 hasSymlink:(BOOL *)a6 error:(id *)a7;
- (BOOL)stageURLByMoving:(id)a0 toItemName:(id)a1 inStagingDir:(id)a2 settingUID:(unsigned int)a3 gid:(unsigned int)a4 dataProtectionClass:(int)a5 breakHardlinks:(BOOL)a6 hasSymlink:(BOOL *)a7 error:(id *)a8;
- (BOOL)standardizeOwnershipAtURL:(id)a0 toUID:(unsigned int)a1 GID:(unsigned int)a2 removeACLs:(BOOL)a3 setProtectionClass:(BOOL)a4 foundSymlink:(BOOL *)a5 error:(id *)a6;
- (id)traverseDirectoryAtURL:(id)a0 withBlock:(id /* block */)a1;
- (id)upToFirstFourBytesFromURL:(id)a0 error:(id *)a1;
- (BOOL)validateSymlinksInURLDoNotEscapeURL:(id)a0 error:(id *)a1;

@end
