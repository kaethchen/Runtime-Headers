@class PBDataReader;

@interface GEORPAmenityCorrections : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _addedAmenities;
    struct { int *list; unsigned long long count; unsigned long long size; } _removedAmenities;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_addedAmenities : 1; unsigned char read_removedAmenities : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long addedAmenitiesCount;
@property (readonly, nonatomic) int *addedAmenities;
@property (readonly, nonatomic) unsigned long long removedAmenitiesCount;
@property (readonly, nonatomic) int *removedAmenities;

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
- (int)StringAsRemovedAmenities:(id)a0;
- (int)StringAsAddedAmenities:(id)a0;
- (void)addAddedAmenities:(int)a0;
- (void)addRemovedAmenities:(int)a0;
- (id)addedAmenitiesAsString:(int)a0;
- (int)addedAmenitiesAtIndex:(unsigned long long)a0;
- (void)clearAddedAmenities;
- (void)clearRemovedAmenities;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)removedAmenitiesAsString:(int)a0;
- (int)removedAmenitiesAtIndex:(unsigned long long)a0;
- (void)setAddedAmenities:(int *)a0 count:(unsigned long long)a1;
- (void)setRemovedAmenities:(int *)a0 count:(unsigned long long)a1;

@end
