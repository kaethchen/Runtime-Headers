@interface AWDMultitouchHardwareStatus : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _openRows;
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long openRowsCount;
@property (readonly, nonatomic) unsigned int *openRows;

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
- (void)addOpenRows:(unsigned int)a0;
- (void)clearOpenRows;
- (unsigned int)openRowsAtIndex:(unsigned long long)a0;
- (void)setOpenRows:(unsigned int *)a0 count:(unsigned long long)a1;

@end
