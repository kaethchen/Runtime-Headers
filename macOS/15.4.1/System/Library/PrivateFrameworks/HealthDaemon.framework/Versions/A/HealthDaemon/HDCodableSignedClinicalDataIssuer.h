@class NSString, HDCodableSyncIdentity, HDCodableMessageVersion;

@interface HDCodableSignedClinicalDataIssuer : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasWellKnownURL;
@property (retain, nonatomic) NSString *wellKnownURL;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

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
