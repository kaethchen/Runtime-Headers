@interface PPM2DonationInterval : PBCodable <NSCopying> {
    struct { unsigned char domain : 1; unsigned char interval : 1; unsigned char source : 1; unsigned char isFirstDonation : 1; } _has;
}

@property (nonatomic) BOOL hasDomain;
@property (nonatomic) int domain;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasIsFirstDonation;
@property (nonatomic) BOOL isFirstDonation;
@property (nonatomic) BOOL hasInterval;
@property (nonatomic) unsigned int interval;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (int)StringAsDomain:(id)a0;
- (id)domainAsString:(int)a0;

@end
