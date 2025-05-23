@class NSString, PBDataReader, PBUnknownFields;

@interface GEOMatchedToken : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _geoIds;
    NSString *_matchedToken;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _geoType;
    struct { unsigned char has_geoType : 1; unsigned char read_unknownFields : 1; unsigned char read_geoIds : 1; unsigned char read_matchedToken : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *matchedToken;
@property (nonatomic) BOOL hasGeoType;
@property (nonatomic) int geoType;
@property (readonly, nonatomic) unsigned long long geoIdsCount;
@property (readonly, nonatomic) unsigned long long *geoIds;
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
- (void)addGeoId:(unsigned long long)a0;
- (void)clearGeoIds;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)geoIdAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)setGeoIds:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
