@class NSMutableArray;

@interface NTPBNoUserAction : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *visibleViews;

+ (Class)visibleViewsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addVisibleViews:(id)a0;
- (void)clearVisibleViews;
- (id)visibleViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)visibleViewsCount;

@end
