@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEORating : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_uRL;
    double _maxScore;
    NSString *_provider;
    NSString *_ratingCategoryId;
    NSMutableArray *_reviews;
    double _score;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _numberOfRatings;
    int _numberOfReviews;
    struct { unsigned char has_maxScore : 1; unsigned char has_score : 1; unsigned char has_numberOfRatings : 1; unsigned char has_numberOfReviews : 1; unsigned char read_unknownFields : 1; unsigned char read_uRL : 1; unsigned char read_provider : 1; unsigned char read_ratingCategoryId : 1; unsigned char read_reviews : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithSampleSizeForUserRatingScore:(unsigned int)a0 normalizedUserRatingScore:(float)a1;
- (id)jsonRepresentation;

@end
