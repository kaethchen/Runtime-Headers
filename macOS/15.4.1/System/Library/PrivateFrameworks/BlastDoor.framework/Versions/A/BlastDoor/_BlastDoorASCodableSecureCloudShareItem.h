@class NSString, NSData;

@interface _BlastDoorASCodableSecureCloudShareItem : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasShareURL;
@property (retain, nonatomic) NSString *shareURL;
@property (readonly, nonatomic) BOOL hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) BOOL hasInvitationToken;
@property (retain, nonatomic) NSData *invitationToken;

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
