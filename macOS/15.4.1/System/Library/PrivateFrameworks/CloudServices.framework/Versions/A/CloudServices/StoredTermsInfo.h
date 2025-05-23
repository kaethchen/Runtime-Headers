@class SecureBackupTermsInfo;

@interface StoredTermsInfo : PBCodable <NSCopying> {
    struct { unsigned char storageVersion : 1; } _has;
}

@property (nonatomic) BOOL hasStorageVersion;
@property (nonatomic) unsigned long long storageVersion;
@property (readonly, nonatomic) BOOL hasTermsInfo;
@property (retain, nonatomic) SecureBackupTermsInfo *termsInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
