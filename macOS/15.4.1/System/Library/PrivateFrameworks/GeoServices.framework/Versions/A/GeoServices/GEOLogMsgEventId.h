@class PBUnknownFields;

@interface GEOLogMsgEventId : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _high;
    unsigned long long _low;
    unsigned int _deanonymizeId;
    BOOL _isPaidAccount;
    struct { unsigned char has_high : 1; unsigned char has_low : 1; unsigned char has_deanonymizeId : 1; unsigned char has_isPaidAccount : 1; } _flags;
}

@property (nonatomic) BOOL hasHigh;
@property (nonatomic) unsigned long long high;
@property (nonatomic) BOOL hasLow;
@property (nonatomic) unsigned long long low;
@property (nonatomic) BOOL hasDeanonymizeId;
@property (nonatomic) unsigned int deanonymizeId;
@property (nonatomic) BOOL hasIsPaidAccount;
@property (nonatomic) BOOL isPaidAccount;
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
