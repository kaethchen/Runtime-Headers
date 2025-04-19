@interface GEOVLPrecision : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _precisions;
}

@property (readonly, nonatomic) unsigned long long precisionsCount;
@property (readonly, nonatomic) unsigned int *precisions;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearPrecisions;
- (void)addPrecisions:(unsigned int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (unsigned int)precisionsAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (void)setPrecisions:(unsigned int *)a0 count:(unsigned long long)a1;

@end
