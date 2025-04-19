@class NSMutableArray;

@interface NTPBURLMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *domains;

+ (Class)domainsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearDomains;
- (unsigned long long)domainsCount;
- (id)domainsAtIndex:(unsigned long long)a0;
- (void)addDomains:(id)a0;

@end
