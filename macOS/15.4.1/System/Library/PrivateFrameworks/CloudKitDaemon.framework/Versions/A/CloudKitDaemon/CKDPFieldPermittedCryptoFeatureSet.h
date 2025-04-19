@interface CKDPFieldPermittedCryptoFeatureSet : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _assetKeyEncryptionTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _encryptedFieldContextTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _mmcsVersions;
    struct { unsigned char minimumSchemaVersion : 1; } _has;
}

@property (nonatomic) BOOL hasMinimumSchemaVersion;
@property (nonatomic) int minimumSchemaVersion;
@property (readonly, nonatomic) unsigned long long mmcsVersionsCount;
@property (readonly, nonatomic) int *mmcsVersions;
@property (readonly, nonatomic) unsigned long long encryptedFieldContextTypesCount;
@property (readonly, nonatomic) int *encryptedFieldContextTypes;
@property (readonly, nonatomic) unsigned long long assetKeyEncryptionTypesCount;
@property (readonly, nonatomic) int *assetKeyEncryptionTypes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearEncryptedFieldContextTypes;
- (void)addMmcsVersion:(int)a0;
- (void)addAssetKeyEncryptionType:(int)a0;
- (void)addEncryptedFieldContextType:(int)a0;
- (int)assetKeyEncryptionTypeAtIndex:(unsigned long long)a0;
- (void)clearAssetKeyEncryptionTypes;
- (void)clearMmcsVersions;
- (int)encryptedFieldContextTypeAtIndex:(unsigned long long)a0;
- (int)mmcsVersionAtIndex:(unsigned long long)a0;
- (void)setAssetKeyEncryptionTypes:(int *)a0 count:(unsigned long long)a1;
- (void)setEncryptedFieldContextTypes:(int *)a0 count:(unsigned long long)a1;
- (void)setMmcsVersions:(int *)a0 count:(unsigned long long)a1;

@end
