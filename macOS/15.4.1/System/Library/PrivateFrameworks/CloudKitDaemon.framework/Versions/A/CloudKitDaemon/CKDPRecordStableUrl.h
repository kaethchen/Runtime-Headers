@class NSString, NSData;

@interface CKDPRecordStableUrl : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRoutingKey;
@property (retain, nonatomic) NSString *routingKey;
@property (readonly, nonatomic) BOOL hasShortTokenHash;
@property (retain, nonatomic) NSData *shortTokenHash;
@property (readonly, nonatomic) BOOL hasProtectedFullToken;
@property (retain, nonatomic) NSData *protectedFullToken;
@property (readonly, nonatomic) BOOL hasEncryptedPublicSharingKey;
@property (retain, nonatomic) NSData *encryptedPublicSharingKey;
@property (readonly, nonatomic) BOOL hasDisplayedHostname;
@property (retain, nonatomic) NSString *displayedHostname;

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
