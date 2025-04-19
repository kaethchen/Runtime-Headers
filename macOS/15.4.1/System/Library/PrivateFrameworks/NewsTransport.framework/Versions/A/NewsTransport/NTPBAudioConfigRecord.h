@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBAudioConfigRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) NSString *configuration;
@property (readonly, nonatomic) BOOL hasDailyBriefingArticleID;
@property (retain, nonatomic) NSString *dailyBriefingArticleID;
@property (readonly, nonatomic) BOOL hasFeaturedAudioArticleListID;
@property (retain, nonatomic) NSString *featuredAudioArticleListID;
@property (retain, nonatomic) NSMutableArray *heroArticleIDs;
@property (readonly, nonatomic) BOOL hasLatestAudioArticleListID;
@property (retain, nonatomic) NSString *latestAudioArticleListID;
@property (readonly, nonatomic) BOOL hasFeedConfiguration;
@property (retain, nonatomic) NSString *feedConfiguration;
@property (readonly, nonatomic) BOOL hasCuratedArticleIDs;
@property (retain, nonatomic) NSString *curatedArticleIDs;

+ (Class)heroArticleIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addHeroArticleIDs:(id)a0;
- (void)clearHeroArticleIDs;
- (id)heroArticleIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)heroArticleIDsCount;

@end
