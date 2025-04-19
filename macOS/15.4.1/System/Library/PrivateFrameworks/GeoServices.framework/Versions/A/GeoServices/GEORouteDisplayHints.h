@class PBDataReader, NSArray, GEORequestOptions, PBUnknownFields;
@protocol GEOSurchargeOption;

@interface GEORouteDisplayHints : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _availablePaymentTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _availablePrioritizations;
    GEORequestOptions *_transitSurchargeOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _showTransitSchedules;
    struct { unsigned char has_showTransitSchedules : 1; unsigned char read_unknownFields : 1; unsigned char read_availablePaymentTypes : 1; unsigned char read_availablePrioritizations : 1; unsigned char read_transitSurchargeOptions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) id<GEOSurchargeOption> surchargeOptions;
@property (readonly, nonatomic) NSArray *prioritizationOptions;
@property (nonatomic) BOOL hasShowTransitSchedules;
@property (nonatomic) BOOL showTransitSchedules;
@property (readonly, nonatomic) unsigned long long availablePrioritizationsCount;
@property (readonly, nonatomic) int *availablePrioritizations;
@property (readonly, nonatomic) unsigned long long availablePaymentTypesCount;
@property (readonly, nonatomic) int *availablePaymentTypes;
@property (readonly, nonatomic) BOOL hasTransitSurchargeOptions;
@property (retain, nonatomic) GEORequestOptions *transitSurchargeOptions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
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
- (int)StringAsAvailablePaymentTypes:(id)a0;
- (void)setAvailablePaymentTypes:(int *)a0 count:(unsigned long long)a1;
- (int)StringAsAvailablePrioritizations:(id)a0;
- (int)availablePrioritizationAtIndex:(unsigned long long)a0;
- (void)addAvailablePaymentType:(int)a0;
- (void)addAvailablePrioritization:(int)a0;
- (int)availablePaymentTypeAtIndex:(unsigned long long)a0;
- (id)availablePaymentTypesAsString:(int)a0;
- (id)availablePrioritizationsAsString:(int)a0;
- (void)clearAvailablePaymentTypes;
- (void)clearAvailablePrioritizations;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)setAvailablePrioritizations:(int *)a0 count:(unsigned long long)a1;

@end
