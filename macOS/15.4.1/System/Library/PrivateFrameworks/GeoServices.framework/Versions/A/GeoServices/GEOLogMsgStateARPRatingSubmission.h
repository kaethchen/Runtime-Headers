@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOLogMsgStateARPRatingSubmission : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_originTarget;
    NSMutableArray *_ratings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isFromMapsSuggesions;
    BOOL _isFromRecommendationCard;
    BOOL _isPlacecardInlineSubmission;
    struct { unsigned char has_isFromMapsSuggesions : 1; unsigned char has_isFromRecommendationCard : 1; unsigned char has_isPlacecardInlineSubmission : 1; unsigned char read_unknownFields : 1; unsigned char read_originTarget : 1; unsigned char read_ratings : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasOriginTarget;
@property (retain, nonatomic) NSString *originTarget;
@property (nonatomic) BOOL hasIsFromRecommendationCard;
@property (nonatomic) BOOL isFromRecommendationCard;
@property (nonatomic) BOOL hasIsFromMapsSuggesions;
@property (nonatomic) BOOL isFromMapsSuggesions;
@property (nonatomic) BOOL hasIsPlacecardInlineSubmission;
@property (nonatomic) BOOL isPlacecardInlineSubmission;
@property (retain, nonatomic) NSMutableArray *ratings;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)ratingsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)ratingsAtIndex:(unsigned long long)a0;
- (void)addRatings:(id)a0;
- (void)clearRatings;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)ratingsCount;
- (void)readAll:(BOOL)a0;

@end
