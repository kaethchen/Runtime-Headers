@class NSString, CSStingrayRecordClientMetadataICloudDataProtection, NSData, CSStingrayRecordClientMetadataStableMetadata, CSStingrayRecordClientMetadataKeyRegistry;

@interface CSStingrayRecordClientMetadata : PBCodable <NSCopying> {
    struct { unsigned char passwordGeneration : 1; unsigned char passwordIterations : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIcdp;
@property (retain, nonatomic) CSStingrayRecordClientMetadataICloudDataProtection *icdp;
@property (readonly, nonatomic) BOOL hasKeyRegistry;
@property (retain, nonatomic) CSStingrayRecordClientMetadataKeyRegistry *keyRegistry;
@property (readonly, nonatomic) BOOL hasStableMetadata;
@property (retain, nonatomic) CSStingrayRecordClientMetadataStableMetadata *stableMetadata;
@property (readonly, nonatomic) BOOL hasIcloudIdentityPublicData;
@property (retain, nonatomic) NSData *icloudIdentityPublicData;
@property (nonatomic) BOOL hasPasswordGeneration;
@property (nonatomic) long long passwordGeneration;
@property (nonatomic) BOOL hasPasswordIterations;
@property (nonatomic) long long passwordIterations;
@property (readonly, nonatomic) BOOL hasPasswordProtocol;
@property (retain, nonatomic) NSString *passwordProtocol;

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
