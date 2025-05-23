@class GEORPDirectionsFeedbackContext, PBDataReader, GEORPDirectionsCorrections, PBUnknownFields;

@interface GEORPDirectionsFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPDirectionsFeedbackContext *_directionsContext;
    GEORPDirectionsCorrections *_directionsCorrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _correctionType;
    struct { unsigned char has_correctionType : 1; unsigned char read_unknownFields : 1; unsigned char read_directionsContext : 1; unsigned char read_directionsCorrections : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDirectionsContext;
@property (retain, nonatomic) GEORPDirectionsFeedbackContext *directionsContext;
@property (readonly, nonatomic) BOOL hasDirectionsCorrections;
@property (retain, nonatomic) GEORPDirectionsCorrections *directionsCorrections;
@property (nonatomic) BOOL hasCorrectionType;
@property (nonatomic) int correctionType;
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
- (int)StringAsCorrectionType:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)correctionTypeAsString:(int)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
