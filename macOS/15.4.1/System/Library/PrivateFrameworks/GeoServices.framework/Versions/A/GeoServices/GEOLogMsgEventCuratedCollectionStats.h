@class PBUnknownFields;

@interface GEOLogMsgEventCuratedCollectionStats : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _savedCollectionMuids;
}

@property (readonly, nonatomic) unsigned long long savedCollectionMuidsCount;
@property (readonly, nonatomic) unsigned long long *savedCollectionMuids;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
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
- (void)addSavedCollectionMuids:(unsigned long long)a0;
- (void)clearSavedCollectionMuids;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (unsigned long long)savedCollectionMuidsAtIndex:(unsigned long long)a0;
- (void)setSavedCollectionMuids:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
