@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDAmenities : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_amenityV2s;
    NSMutableArray *_amenitys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_amenityV2s : 1; unsigned char read_amenitys : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *amenitys;
@property (retain, nonatomic) NSMutableArray *amenityV2s;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)amenityType;
+ (Class)amenityV2Type;
+ (id)amentiesForPlaceData:(id)a0;
+ (id)enumBasedAmenityValuesForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;
+ (id)stringBasedAmenityValuesForPlaceData:(id)a0;

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
- (id)amenityAtIndex:(unsigned long long)a0;
- (unsigned long long)amenityV2sCount;
- (void)clearAmenityV2s;
- (void)addAmenity:(id)a0;
- (void)addAmenityV2:(id)a0;
- (id)amenityV2AtIndex:(unsigned long long)a0;
- (unsigned long long)amenitysCount;
- (void)clearAmenitys;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
