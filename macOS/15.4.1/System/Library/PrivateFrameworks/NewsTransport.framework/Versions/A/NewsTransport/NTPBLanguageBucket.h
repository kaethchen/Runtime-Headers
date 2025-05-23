@class NSString, NSMutableArray, NTPBGroupingFlags;

@interface NTPBLanguageBucket : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *values;
@property (readonly, nonatomic) BOOL hasGroupingFlags;
@property (retain, nonatomic) NTPBGroupingFlags *groupingFlags;

+ (Class)valuesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearValues;
- (unsigned long long)valuesCount;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;

@end
