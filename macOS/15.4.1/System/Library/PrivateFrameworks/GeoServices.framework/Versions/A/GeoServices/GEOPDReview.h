@class PBDataReader, NSString, GEOPDRating, GEOPDUser, NSMutableArray, PBUnknownFields;

@interface GEOPDReview : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDRating *_rating;
    NSString *_reviewId;
    double _reviewTime;
    GEOPDUser *_reviewer;
    NSMutableArray *_snippets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_reviewTime : 1; unsigned char read_unknownFields : 1; unsigned char read_rating : 1; unsigned char read_reviewId : 1; unsigned char read_reviewer : 1; unsigned char read_snippets : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)reviewsForPlaceData:(id)a0;

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
- (id)_bestSnippet;
- (id)_bestSnippetLocale;
- (id)jsonRepresentation;

@end
