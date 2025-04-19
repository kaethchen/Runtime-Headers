@class NSString, CKDPThrottlingConfigCriteria, CKDPThrottlingConfigRateLimit;

@interface CKDPThrottlingConfig : PBCodable <NSCopying> {
    struct { unsigned char ttlSec : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL hasCriteria;
@property (retain, nonatomic) CKDPThrottlingConfigCriteria *criteria;
@property (readonly, nonatomic) BOOL hasRateLimit;
@property (retain, nonatomic) CKDPThrottlingConfigRateLimit *rateLimit;
@property (nonatomic) BOOL hasTtlSec;
@property (nonatomic) int ttlSec;

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
