@interface EKPersistentAttachment : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)propertiesToUnloadOnCommit;
+ (id)propertyKeyForUniqueIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)UUID;
- (int)flags;
- (id)fileSize;
- (void)setFlags:(int)a0;
- (void)setUUID:(id)a0;
- (void)setFileSize:(id)a0;
- (id)fileFormat;
- (void)setFileFormat:(id)a0;
- (id)URLString;
- (id)externalID;
- (void)setExternalModificationTag:(id)a0;
- (id)externalModificationTag;
- (void)setExternalID:(id)a0;
- (int)entityType;
- (void)setFileNameRaw:(id)a0;
- (id)XPropertiesData;
- (id)URLWrapperForPendingFileCopy;
- (id)fileNameRaw;
- (id)localRelativePath;
- (id)securityScopedLocalURLForArchivedDataWrapper;
- (id)securityScopedLocalURLWrapper;
- (void)setLocalRelativePath:(id)a0;
- (void)setSecurityScopedLocalURLForArchivedDataWrapper:(id)a0;
- (void)setSecurityScopedLocalURLWrapper:(id)a0;
- (void)setShouldSetQuarantineAttributesOnCopiedFile:(BOOL)a0;
- (void)setURLString:(id)a0;
- (void)setURLWrapperForPendingFileCopy:(id)a0;
- (void)setXPropertiesData:(id)a0;
- (BOOL)shouldSetQuarantineAttributesOnCopiedFile;

@end
