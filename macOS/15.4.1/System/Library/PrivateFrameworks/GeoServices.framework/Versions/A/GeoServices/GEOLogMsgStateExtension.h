@class PBUnknownFields;

@interface GEOLogMsgStateExtension : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _hasRideBookingAppEnabled;
    BOOL _hasRideBookingAppInstalled;
    BOOL _hasTableBookingAppEnabled;
    BOOL _hasTableBookingAppInstalled;
    struct { unsigned char has_hasRideBookingAppEnabled : 1; unsigned char has_hasRideBookingAppInstalled : 1; unsigned char has_hasTableBookingAppEnabled : 1; unsigned char has_hasTableBookingAppInstalled : 1; } _flags;
}

@property (nonatomic) BOOL hasHasRideBookingAppInstalled;
@property (nonatomic) BOOL hasRideBookingAppInstalled;
@property (nonatomic) BOOL hasHasRideBookingAppEnabled;
@property (nonatomic) BOOL hasRideBookingAppEnabled;
@property (nonatomic) BOOL hasHasTableBookingAppInstalled;
@property (nonatomic) BOOL hasTableBookingAppInstalled;
@property (nonatomic) BOOL hasHasTableBookingAppEnabled;
@property (nonatomic) BOOL hasTableBookingAppEnabled;
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
