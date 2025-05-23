@class NSString, CKDPContactInformation;

@interface CKDPUserInformationRequestAccess : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL hasContactInformation;
@property (retain, nonatomic) CKDPContactInformation *contactInformation;

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
