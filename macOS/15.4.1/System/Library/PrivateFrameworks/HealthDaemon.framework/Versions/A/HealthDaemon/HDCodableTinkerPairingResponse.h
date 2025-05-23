@class NSString, HDCodableSharingSetupMetadata, HDCodableError;

@interface HDCodableTinkerPairingResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) BOOL hasSetupMetadata;
@property (retain, nonatomic) HDCodableSharingSetupMetadata *setupMetadata;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) HDCodableError *error;

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
