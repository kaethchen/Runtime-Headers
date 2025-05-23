@class NSString, NSMutableArray;

@interface NTPBTrendingLanguageConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLanguageTag;
@property (retain, nonatomic) NSString *languageTag;
@property (retain, nonatomic) NSMutableArray *trendingTopics;

+ (Class)trendingTopicsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTrendingTopics:(id)a0;
- (void)clearTrendingTopics;
- (id)trendingTopicsAtIndex:(unsigned long long)a0;
- (unsigned long long)trendingTopicsCount;

@end
