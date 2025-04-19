@class NSString, HDCodableMessageVersion, NSData, HDCodableMetadataDictionary, NSMutableArray, HDCodableSyncIdentity;

@interface HDCodableOriginalSignedClinicalDataRecord : PBCodable <NSCopying> {
    struct { unsigned char firstSeenDate : 1; unsigned char lastModifiedDate : 1; unsigned char receivedDate : 1; unsigned char signatureStatus : 1; unsigned char sourceType : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (readonly, nonatomic) BOOL hasSyncIdentifier;
@property (retain, nonatomic) NSData *syncIdentifier;
@property (readonly, nonatomic) BOOL hasGatewayExternalID;
@property (retain, nonatomic) NSString *gatewayExternalID;
@property (readonly, nonatomic) BOOL hasIssuerIdentifier;
@property (retain, nonatomic) NSString *issuerIdentifier;
@property (readonly, nonatomic) BOOL hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (readonly, nonatomic) BOOL hasRawContent;
@property (retain, nonatomic) NSData *rawContent;
@property (retain, nonatomic) NSMutableArray *types;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) HDCodableMetadataDictionary *metadata;
@property (nonatomic) BOOL hasReceivedDate;
@property (nonatomic) double receivedDate;
@property (readonly, nonatomic) BOOL hasReceivedDateTimeZoneName;
@property (retain, nonatomic) NSString *receivedDateTimeZoneName;
@property (nonatomic) BOOL hasFirstSeenDate;
@property (nonatomic) double firstSeenDate;
@property (readonly, nonatomic) BOOL hasFirstSeenDateTimeZoneName;
@property (retain, nonatomic) NSString *firstSeenDateTimeZoneName;
@property (nonatomic) BOOL hasSignatureStatus;
@property (nonatomic) long long signatureStatus;
@property (readonly, nonatomic) BOOL hasUniquenessChecksum;
@property (retain, nonatomic) NSData *uniquenessChecksum;
@property (nonatomic) BOOL hasLastModifiedDate;
@property (nonatomic) double lastModifiedDate;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;
@property (nonatomic) BOOL hasSourceType;
@property (nonatomic) long long sourceType;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

+ (Class)typeType;

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
- (void)addType:(id)a0;
- (void)clearTypes;
- (unsigned long long)typesCount;
- (id)typeAtIndex:(unsigned long long)a0;

@end
