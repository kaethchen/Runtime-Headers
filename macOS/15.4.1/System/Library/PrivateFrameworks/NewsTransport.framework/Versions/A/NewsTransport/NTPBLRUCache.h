@class NSMutableArray;

@interface NTPBLRUCache : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *entries;

+ (Class)entriesType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)entriesAtIndex:(unsigned long long)a0;
- (void)addEntries:(id)a0;
- (void)clearEntries;
- (unsigned long long)entriesCount;

@end
