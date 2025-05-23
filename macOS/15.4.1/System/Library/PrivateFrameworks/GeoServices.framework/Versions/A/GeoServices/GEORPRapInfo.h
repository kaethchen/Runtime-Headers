@class PBDataReader, NSString, GEORPRapResponse, PBUnknownFields;

@interface GEORPRapInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_rapId;
    GEORPRapResponse *_rapResponse;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _rapDisplayMenu;
    BOOL _isReviewed;
    struct { unsigned char has_rapDisplayMenu : 1; unsigned char has_isReviewed : 1; unsigned char read_unknownFields : 1; unsigned char read_rapId : 1; unsigned char read_rapResponse : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasIsReviewed;
@property (nonatomic) BOOL isReviewed;
@property (readonly, nonatomic) BOOL hasRapId;
@property (retain, nonatomic) NSString *rapId;
@property (readonly, nonatomic) BOOL hasRapResponse;
@property (retain, nonatomic) GEORPRapResponse *rapResponse;
@property (nonatomic) BOOL hasRapDisplayMenu;
@property (nonatomic) int rapDisplayMenu;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

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
- (int)StringAsRapDisplayMenu:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)rapDisplayMenuAsString:(int)a0;
- (void)readAll:(BOOL)a0;

@end
