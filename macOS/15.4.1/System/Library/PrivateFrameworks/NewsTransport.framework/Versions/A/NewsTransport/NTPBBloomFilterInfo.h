@class NSData;

@interface NTPBBloomFilterInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *bloomFilterData;
@property (nonatomic) int hashFunctionCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
