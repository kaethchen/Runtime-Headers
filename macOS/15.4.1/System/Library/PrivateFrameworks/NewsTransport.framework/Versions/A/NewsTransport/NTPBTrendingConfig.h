@class NSString, NSMutableArray;

@interface NTPBTrendingConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFallbackLanguageTag;
@property (retain, nonatomic) NSString *fallbackLanguageTag;
@property (retain, nonatomic) NSMutableArray *languageConfigs;

+ (Class)languageConfigsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLanguageConfigs:(id)a0;
- (void)clearLanguageConfigs;
- (id)languageConfigsAtIndex:(unsigned long long)a0;
- (unsigned long long)languageConfigsCount;

@end
