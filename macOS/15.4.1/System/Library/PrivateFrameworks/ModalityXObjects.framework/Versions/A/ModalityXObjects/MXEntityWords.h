@class NSMutableArray;

@interface MXEntityWords : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *words;

+ (Class)wordsType;

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
- (unsigned long long)wordsCount;
- (void)addWords:(id)a0;
- (void)clearWords;
- (id)wordsAtIndex:(unsigned long long)a0;

@end
