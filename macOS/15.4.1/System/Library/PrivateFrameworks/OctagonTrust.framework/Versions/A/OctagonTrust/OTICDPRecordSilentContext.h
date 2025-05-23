@class OTCDPRecoveryInformation, OTEscrowAuthenticationInformation;

@interface OTICDPRecordSilentContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCdpInfo;
@property (retain, nonatomic) OTCDPRecoveryInformation *cdpInfo;
@property (readonly, nonatomic) BOOL hasAuthInfo;
@property (retain, nonatomic) OTEscrowAuthenticationInformation *authInfo;

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
