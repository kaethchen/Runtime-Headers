@class NSString, PBUnknownFields;

@interface GEOLogMsgStateARPPhotoSubmission : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_originTarget;
    unsigned int _numberOfAprSuggestedPhotos;
    unsigned int _numberOfPhotos;
    BOOL _isFromMapsSuggesions;
    BOOL _isFromRecommendationCard;
    BOOL _isPlacecardInlineSubmission;
    struct { unsigned char has_numberOfAprSuggestedPhotos : 1; unsigned char has_numberOfPhotos : 1; unsigned char has_isFromMapsSuggesions : 1; unsigned char has_isFromRecommendationCard : 1; unsigned char has_isPlacecardInlineSubmission : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasOriginTarget;
@property (retain, nonatomic) NSString *originTarget;
@property (nonatomic) BOOL hasIsFromRecommendationCard;
@property (nonatomic) BOOL isFromRecommendationCard;
@property (nonatomic) BOOL hasIsFromMapsSuggesions;
@property (nonatomic) BOOL isFromMapsSuggesions;
@property (nonatomic) BOOL hasIsPlacecardInlineSubmission;
@property (nonatomic) BOOL isPlacecardInlineSubmission;
@property (nonatomic) BOOL hasNumberOfPhotos;
@property (nonatomic) unsigned int numberOfPhotos;
@property (nonatomic) BOOL hasNumberOfAprSuggestedPhotos;
@property (nonatomic) unsigned int numberOfAprSuggestedPhotos;
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
