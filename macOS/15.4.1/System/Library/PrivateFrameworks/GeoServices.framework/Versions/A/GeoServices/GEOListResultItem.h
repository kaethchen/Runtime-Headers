@interface GEOListResultItem : PBCodable <NSCopying> {
    unsigned long long _businessId;
    long long _latency;
    int _resultType;
    int _tappedCount;
    BOOL _eventuallyVisible;
    BOOL _initiallyVisible;
    struct { unsigned char has_businessId : 1; unsigned char has_latency : 1; unsigned char has_resultType : 1; unsigned char has_tappedCount : 1; unsigned char has_eventuallyVisible : 1; unsigned char has_initiallyVisible : 1; } _flags;
}

@property (nonatomic) BOOL hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) BOOL hasInitiallyVisible;
@property (nonatomic) BOOL initiallyVisible;
@property (nonatomic) BOOL hasEventuallyVisible;
@property (nonatomic) BOOL eventuallyVisible;
@property (nonatomic) BOOL hasLatency;
@property (nonatomic) long long latency;
@property (nonatomic) BOOL hasTappedCount;
@property (nonatomic) int tappedCount;
@property (nonatomic) BOOL hasBusinessId;
@property (nonatomic) unsigned long long businessId;

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
- (int)StringAsResultType:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)resultTypeAsString:(int)a0;

@end
