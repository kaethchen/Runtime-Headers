@class NSMutableArray, PBUnknownFields;

@interface GEORPRapQueryParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_feedbackIds;
    int _querySource;
    struct { unsigned char has_querySource : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *feedbackIds;
@property (nonatomic) BOOL hasQuerySource;
@property (nonatomic) int querySource;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)feedbackIdType;
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
- (int)StringAsQuerySource:(id)a0;
- (void)addFeedbackId:(id)a0;
- (void)clearFeedbackIds;
- (void)clearUnknownFields:(BOOL)a0;
- (id)feedbackIdAtIndex:(unsigned long long)a0;
- (unsigned long long)feedbackIdsCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)querySourceAsString:(int)a0;
- (void)readAll:(BOOL)a0;

@end
