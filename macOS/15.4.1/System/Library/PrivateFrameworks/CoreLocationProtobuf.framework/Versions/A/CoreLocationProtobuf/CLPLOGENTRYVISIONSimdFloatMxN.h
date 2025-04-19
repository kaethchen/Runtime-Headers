@class NSMutableArray;

@interface CLPLOGENTRYVISIONSimdFloatMxN : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *columns;

+ (Class)columnsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addColumns:(id)a0;
- (id)columnsAtIndex:(unsigned long long)a0;
- (void)clearColumns;
- (unsigned long long)columnsCount;

@end
