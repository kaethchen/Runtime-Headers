@class NSString;

@interface SGM2SelfIdModelScore : PBCodable <NSCopying> {
    struct { unsigned char model : 1; unsigned char supervision : 1; unsigned char result : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasModel;
@property (nonatomic) int model;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) BOOL result;
@property (nonatomic) BOOL hasSupervision;
@property (nonatomic) int supervision;

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
- (int)StringAsModel:(id)a0;
- (int)StringAsSupervision:(id)a0;
- (id)modelAsString:(int)a0;
- (id)supervisionAsString:(int)a0;

@end
