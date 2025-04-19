@class NSMutableArray;

@interface SECSFAVersionMatch : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *versions;

+ (Class)versionsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addVersions:(id)a0;
- (void)clearVersions;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)versionsAtIndex:(unsigned long long)a0;
- (unsigned long long)versionsCount;
- (void)writeTo:(id)a0;

@end
