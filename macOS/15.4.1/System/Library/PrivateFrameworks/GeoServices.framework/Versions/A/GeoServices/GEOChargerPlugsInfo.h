@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOChargerPlugsInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_suggestedChargerPlugs;
    NSMutableArray *_supportedChargerPlugs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_suggestedChargerPlugs : 1; unsigned char read_supportedChargerPlugs : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *suggestedChargerPlugs;
@property (retain, nonatomic) NSMutableArray *supportedChargerPlugs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)suggestedChargerPlugType;
+ (Class)supportedChargerPlugType;

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
- (void)addSuggestedChargerPlug:(id)a0;
- (void)addSupportedChargerPlug:(id)a0;
- (void)clearSuggestedChargerPlugs;
- (void)clearSupportedChargerPlugs;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)suggestedChargerPlugAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestedChargerPlugsCount;
- (id)supportedChargerPlugAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedChargerPlugsCount;

@end
