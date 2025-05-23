@class NSData;

@interface OTSponsorToApplicantRound2M2 : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVoucher;
@property (retain, nonatomic) NSData *voucher;
@property (readonly, nonatomic) BOOL hasVoucherSignature;
@property (retain, nonatomic) NSData *voucherSignature;

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
