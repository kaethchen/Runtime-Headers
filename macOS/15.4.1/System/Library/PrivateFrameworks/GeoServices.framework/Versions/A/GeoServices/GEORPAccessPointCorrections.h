@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEORPAccessPointCorrections : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_addeds;
    NSMutableArray *_editeds;
    NSMutableArray *_removeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_addeds : 1; unsigned char read_editeds : 1; unsigned char read_removeds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *addeds;
@property (retain, nonatomic) NSMutableArray *removeds;
@property (retain, nonatomic) NSMutableArray *editeds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)addedType;
+ (Class)editedType;
+ (BOOL)isValid:(id)a0;
+ (Class)removedType;

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
- (id)removedAtIndex:(unsigned long long)a0;
- (void)addAdded:(id)a0;
- (void)addEdited:(id)a0;
- (void)addRemoved:(id)a0;
- (id)addedAtIndex:(unsigned long long)a0;
- (unsigned long long)addedsCount;
- (void)clearAddeds;
- (void)clearEditeds;
- (void)clearRemoveds;
- (void)clearUnknownFields:(BOOL)a0;
- (id)editedAtIndex:(unsigned long long)a0;
- (unsigned long long)editedsCount;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (unsigned long long)removedsCount;

@end
