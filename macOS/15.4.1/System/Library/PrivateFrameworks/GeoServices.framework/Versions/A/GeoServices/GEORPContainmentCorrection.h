@class PBDataReader, PBUnknownFields;

@interface GEORPContainmentCorrection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _addedMuids;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _originalMuids;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _removedMuids;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_addedMuids : 1; unsigned char read_originalMuids : 1; unsigned char read_removedMuids : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long addedMuidsCount;
@property (readonly, nonatomic) unsigned long long *addedMuids;
@property (readonly, nonatomic) unsigned long long removedMuidsCount;
@property (readonly, nonatomic) unsigned long long *removedMuids;
@property (readonly, nonatomic) unsigned long long originalMuidsCount;
@property (readonly, nonatomic) unsigned long long *originalMuids;
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
- (void)addRemovedMuid:(unsigned long long)a0;
- (void)clearAddedMuids;
- (void)addAddedMuid:(unsigned long long)a0;
- (void)addOriginalMuid:(unsigned long long)a0;
- (unsigned long long)addedMuidAtIndex:(unsigned long long)a0;
- (void)clearOriginalMuids;
- (void)clearRemovedMuids;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)originalMuidAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)removedMuidAtIndex:(unsigned long long)a0;
- (void)setAddedMuids:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setOriginalMuids:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setRemovedMuids:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
