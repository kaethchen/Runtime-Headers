@class NSString, NSMutableArray;

@interface NTPBHeadlineAdElement : PBCodable <NSCopying> {
    struct { unsigned char channelContentProviderID : 1; unsigned char draftArticle : 1; unsigned char paidArticle : 1; unsigned char sponsoredArticle : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL hasArticleRating;
@property (retain, nonatomic) NSString *articleRating;
@property (retain, nonatomic) NSMutableArray *articleIAdCategories;
@property (nonatomic) BOOL hasPaidArticle;
@property (nonatomic) BOOL paidArticle;
@property (nonatomic) BOOL hasSponsoredArticle;
@property (nonatomic) BOOL sponsoredArticle;
@property (nonatomic) BOOL hasDraftArticle;
@property (nonatomic) BOOL draftArticle;
@property (retain, nonatomic) NSMutableArray *articleIAdSectionIDs;
@property (retain, nonatomic) NSMutableArray *channelIAdKeywords;
@property (readonly, nonatomic) BOOL hasChannelID;
@property (retain, nonatomic) NSString *channelID;
@property (readonly, nonatomic) BOOL hasChannelRating;
@property (retain, nonatomic) NSString *channelRating;
@property (retain, nonatomic) NSMutableArray *channelIAdCategories;
@property (nonatomic) BOOL hasChannelContentProviderID;
@property (nonatomic) long long channelContentProviderID;
@property (retain, nonatomic) NSMutableArray *articleIAdKeywords;

+ (Class)articleIAdCategoriesType;
+ (Class)articleIAdKeywordsType;
+ (Class)articleIAdSectionIDsType;
+ (Class)channelIAdCategoriesType;
+ (Class)channelIAdKeywordsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addArticleIAdCategories:(id)a0;
- (void)addArticleIAdKeywords:(id)a0;
- (void)addArticleIAdSectionIDs:(id)a0;
- (void)addChannelIAdCategories:(id)a0;
- (void)addChannelIAdKeywords:(id)a0;
- (id)articleIAdCategoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)articleIAdCategoriesCount;
- (id)articleIAdKeywordsAtIndex:(unsigned long long)a0;
- (unsigned long long)articleIAdKeywordsCount;
- (id)articleIAdSectionIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)articleIAdSectionIDsCount;
- (id)channelIAdCategoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)channelIAdCategoriesCount;
- (id)channelIAdKeywordsAtIndex:(unsigned long long)a0;
- (unsigned long long)channelIAdKeywordsCount;
- (void)clearArticleIAdCategories;
- (void)clearArticleIAdKeywords;
- (void)clearArticleIAdSectionIDs;
- (void)clearChannelIAdCategories;
- (void)clearChannelIAdKeywords;

@end
