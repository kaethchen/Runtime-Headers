@class NSMutableArray, PBUnknownFields;

@interface GEOTransitPath : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_legs;
}

@property (retain, nonatomic) NSMutableArray *legs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)legType;
+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLeg:(id)a0;
- (void)clearLegs;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)legAtIndex:(unsigned long long)a0;
- (unsigned long long)legsCount;
- (void)readAll:(BOOL)a0;

@end
