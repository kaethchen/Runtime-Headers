@class NSMutableArray;

@interface CKDPQuery : PBCodable <NSCopying> {
    struct { unsigned char queryOperator : 1; unsigned char distinct : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *types;
@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *sorts;
@property (nonatomic) BOOL hasDistinct;
@property (nonatomic) BOOL distinct;
@property (nonatomic) BOOL hasQueryOperator;
@property (nonatomic) int queryOperator;

+ (Class)filtersType;
+ (Class)sortsType;
+ (Class)typesType;

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
- (void)addFilters:(id)a0;
- (void)clearFilters;
- (unsigned long long)filtersCount;
- (id)filtersAtIndex:(unsigned long long)a0;
- (int)StringAsQueryOperator:(id)a0;
- (void)addSorts:(id)a0;
- (void)addTypes:(id)a0;
- (void)clearSorts;
- (void)clearTypes;
- (id)queryOperatorAsString:(int)a0;
- (id)sortsAtIndex:(unsigned long long)a0;
- (unsigned long long)sortsCount;
- (id)typesAtIndex:(unsigned long long)a0;
- (unsigned long long)typesCount;

@end
