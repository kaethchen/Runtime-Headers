@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOAttributionApp : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_appBundleIdentifier;
    NSMutableArray *_handledSchemes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _restaurantReservationExtensionSupport;
    BOOL _supportsRestaurantQueueing;
    BOOL _supportsRestaurantReservations;
    struct { unsigned char has_restaurantReservationExtensionSupport : 1; unsigned char has_supportsRestaurantQueueing : 1; unsigned char has_supportsRestaurantReservations : 1; unsigned char read_unknownFields : 1; unsigned char read_appBundleIdentifier : 1; unsigned char read_handledSchemes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (retain, nonatomic) NSMutableArray *handledSchemes;
@property (nonatomic) BOOL hasSupportsRestaurantReservations;
@property (nonatomic) BOOL supportsRestaurantReservations;
@property (nonatomic) BOOL hasSupportsRestaurantQueueing;
@property (nonatomic) BOOL supportsRestaurantQueueing;
@property (nonatomic) BOOL hasRestaurantReservationExtensionSupport;
@property (nonatomic) int restaurantReservationExtensionSupport;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)handledSchemesType;
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
- (int)StringAsRestaurantReservationExtensionSupport:(id)a0;
- (void)addHandledSchemes:(id)a0;
- (void)clearHandledSchemes;
- (void)clearUnknownFields:(BOOL)a0;
- (id)handledSchemesAtIndex:(unsigned long long)a0;
- (unsigned long long)handledSchemesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)restaurantReservationExtensionSupportAsString:(int)a0;

@end
