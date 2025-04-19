@interface AWDCoreRoutineLocationAwarenessBasicHistogram : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _counts;
}

@property (readonly, nonatomic) unsigned long long countsCount;
@property (readonly, nonatomic) int *counts;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addCount:(int)a0;
- (void)clearCounts;
- (int)countAtIndex:(unsigned long long)a0;
- (void)setCounts:(int *)a0 count:(unsigned long long)a1;

@end
