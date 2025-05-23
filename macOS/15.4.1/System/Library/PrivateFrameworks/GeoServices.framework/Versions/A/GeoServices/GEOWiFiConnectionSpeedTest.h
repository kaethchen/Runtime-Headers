@interface GEOWiFiConnectionSpeedTest : PBCodable <NSCopying> {
    float _avgDL;
    float _avgUL;
    struct { unsigned char has_avgDL : 1; unsigned char has_avgUL : 1; } _flags;
}

@property (nonatomic) BOOL hasAvgUL;
@property (nonatomic) float avgUL;
@property (nonatomic) BOOL hasAvgDL;
@property (nonatomic) float avgDL;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
