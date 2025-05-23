@interface AWDMETRICSMCarrierComponentInfo : PBCodable <NSCopying> {
    struct { unsigned char band : 1; unsigned char bandwidth : 1; unsigned char duplex : 1; unsigned char earfcn : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasBand;
@property (nonatomic) unsigned int band;
@property (nonatomic) BOOL hasBandwidth;
@property (nonatomic) unsigned int bandwidth;
@property (nonatomic) BOOL hasEarfcn;
@property (nonatomic) unsigned int earfcn;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasDuplex;
@property (nonatomic) int duplex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsDuplex:(id)a0;
- (id)duplexAsString:(int)a0;

@end
