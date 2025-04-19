@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackQueryResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_feedbackInfos;
    unsigned int _maxResults;
    BOOL _isResultTruncated;
    struct { unsigned char has_maxResults : 1; unsigned char has_isResultTruncated : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *feedbackInfos;
@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic) BOOL hasIsResultTruncated;
@property (nonatomic) BOOL isResultTruncated;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)feedbackInfoType;
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
- (void)addFeedbackInfo:(id)a0;
- (void)clearFeedbackInfos;
- (void)clearUnknownFields:(BOOL)a0;
- (id)feedbackInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)feedbackInfosCount;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
