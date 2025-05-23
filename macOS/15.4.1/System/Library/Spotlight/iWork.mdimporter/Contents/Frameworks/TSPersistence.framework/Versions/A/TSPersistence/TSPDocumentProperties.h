@class NSUUID, TSPDocumentRevision, NSDictionary;

@interface TSPDocumentProperties : NSObject <NSCopying> {
    NSUUID *_shareUUID;
    NSUUID *_versionUUID;
    NSUUID *_stableDocumentUUID;
    NSUUID *_privateUUID;
}

@property (copy, nonatomic) NSUUID *documentUUID;
@property (nonatomic) unsigned long long fileFormatVersion;
@property (copy, nonatomic) TSPDocumentRevision *revision;
@property (copy, nonatomic) NSDictionary *additionalProperties;
@property (readonly, nonatomic) NSUUID *versionUUID;
@property (readonly, nonatomic) NSUUID *shareUUID;
@property (readonly, copy, nonatomic) NSUUID *stableDocumentUUID;

+ (BOOL)documentIsEncryptedAtURL:(id)a0;
+ (id)documentPropertiesRelativePath;
+ (id)documentRevisionAtURL:(id)a0;
+ (id)documentUUIDAtURL:(id)a0;
+ (id)keychainGenericItemForDocumentUUID:(id)a0;
+ (id)shareIdentifierRelativePath;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)UUIDFromDocumentProperties:(id)a0 key:(id)a1;
- (BOOL)writeToDocumentBundleURL:(id)a0 error:(id *)a1;
- (void)clearIsNotClean;
- (id)encodedPropertyListWithError:(id *)a0;
- (id)hashPrivateUUIDWithDigest:(id)a0;
- (id)initWithDocumentBundleURL:(id)a0 allowMissingPropertyList:(BOOL)a1 error:(id *)a2;
- (id)initWithDocumentFileURL:(id)a0 allowMissingPropertyList:(BOOL)a1 error:(id *)a2;
- (id)initWithDocumentURL:(id)a0 allowMissingPropertyList:(BOOL)a1 error:(id *)a2;
- (id)initWithDocumentURL:(id)a0 error:(id *)a1;
- (id)initWithFilePackageURL:(id)a0 zipArchive:(id)a1 allowMissingPropertyList:(BOOL)a2 error:(id *)a3;
- (id)initWithPropertiesURL:(id)a0 error:(id *)a1;
- (void)readDocumentPropertiesFromDictionary:(id)a0;
- (void)resetDocumentRevision;
- (void)updateDocumentUUID;
- (void)updateDocumentUUIDAndPreserveShareUUID:(BOOL)a0 preserveStableDocumentUUID:(BOOL)a1;
- (void)updateVersionUUID;
- (BOOL)writeToDocumentURL:(id)a0 writerBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)writeToPackageWriter:(id)a0 error:(id *)a1;
- (BOOL)writeToPropertiesURL:(id)a0 error:(id *)a1;

@end
