@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDHikeAssociatedInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _encryptedTourMuid;
    NSMutableArray *_endMuids;
    NSMutableArray *_intermediateMuids;
    NSMutableArray *_startMuids;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_encryptedTourMuid : 1; unsigned char read_unknownFields : 1; unsigned char read_endMuids : 1; unsigned char read_intermediateMuids : 1; unsigned char read_startMuids : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasEncryptedTourMuid;
@property (nonatomic) unsigned long long encryptedTourMuid;
@property (retain, nonatomic) NSMutableArray *startMuids;
@property (retain, nonatomic) NSMutableArray *endMuids;
@property (retain, nonatomic) NSMutableArray *intermediateMuids;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)endMuidType;
+ (id)hikeAssociatedInfoWithPlaceData:(id)a0;
+ (Class)intermediateMuidType;
+ (BOOL)isValid:(id)a0;
+ (Class)startMuidType;

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
- (void)clearStartMuids;
- (id)endMuidAtIndex:(unsigned long long)a0;
- (unsigned long long)startMuidsCount;
- (void)addEndMuid:(id)a0;
- (void)addIntermediateMuid:(id)a0;
- (void)addStartMuid:(id)a0;
- (void)clearEndMuids;
- (void)clearIntermediateMuids;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)endMuidsCount;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)intermediateMuidAtIndex:(unsigned long long)a0;
- (unsigned long long)intermediateMuidsCount;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)startMuidAtIndex:(unsigned long long)a0;

@end
