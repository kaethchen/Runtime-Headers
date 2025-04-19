@interface DESBinary64Transport : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _datas;
}

@property (readonly, nonatomic) unsigned long long datasCount;
@property (readonly, nonatomic) double *datas;

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
- (double)dataAtIndex:(unsigned long long)a0;
- (void)addData:(double)a0;
- (void)setDatas:(double *)a0 count:(unsigned long long)a1;
- (void)clearDatas;

@end
