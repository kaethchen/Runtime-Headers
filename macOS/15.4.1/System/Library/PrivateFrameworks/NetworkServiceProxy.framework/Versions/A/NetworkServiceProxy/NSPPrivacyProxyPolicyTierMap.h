@class NSPPrivacyProxyPolicy;

@interface NSPPrivacyProxyPolicyTierMap : PBCodable <NSCopying>

@property (nonatomic) int tier;
@property (retain, nonatomic) NSPPrivacyProxyPolicy *policy;

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
- (int)StringAsTier:(id)a0;
- (id)tierAsString:(int)a0;

@end
