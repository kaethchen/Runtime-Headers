@class PBUnknownFields;

@interface GEOTriggerPoint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _referenceOffsetCm;
    unsigned int _time;
    BOOL _allowsShifting;
    BOOL _countBeforeReferenceOffset;
    struct { unsigned char has_referenceOffsetCm : 1; unsigned char has_time : 1; unsigned char has_allowsShifting : 1; unsigned char has_countBeforeReferenceOffset : 1; } _flags;
}

@property (nonatomic) BOOL hasTime;
@property (nonatomic) unsigned int time;
@property (nonatomic) BOOL hasReferenceOffsetCm;
@property (nonatomic) unsigned int referenceOffsetCm;
@property (nonatomic) BOOL hasCountBeforeReferenceOffset;
@property (nonatomic) BOOL countBeforeReferenceOffset;
@property (nonatomic) BOOL hasAllowsShifting;
@property (nonatomic) BOOL allowsShifting;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
