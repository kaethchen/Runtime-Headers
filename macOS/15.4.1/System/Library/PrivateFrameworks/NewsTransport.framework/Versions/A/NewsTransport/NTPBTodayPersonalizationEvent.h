@class NSString, NSMutableArray;

@interface NTPBTodayPersonalizationEvent : PBCodable <NSCopying> {
    struct { unsigned char createdAt : 1; unsigned char groupType : 1; unsigned char orderInGroup : 1; unsigned char overallOrder : 1; unsigned char sectionOrder : 1; unsigned char action : 1; } _has;
}

@property (nonatomic) BOOL hasAction;
@property (nonatomic) int action;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (retain, nonatomic) NSMutableArray *headlineTopics;
@property (readonly, nonatomic) BOOL hasHeadlinePublisher;
@property (retain, nonatomic) NSString *headlinePublisher;
@property (nonatomic) BOOL hasCreatedAt;
@property (nonatomic) double createdAt;
@property (nonatomic) BOOL hasOrderInGroup;
@property (nonatomic) long long orderInGroup;
@property (nonatomic) BOOL hasOverallOrder;
@property (nonatomic) long long overallOrder;
@property (nonatomic) BOOL hasSectionOrder;
@property (nonatomic) long long sectionOrder;
@property (readonly, nonatomic) BOOL hasPersonalizationSectionFeatureId;
@property (retain, nonatomic) NSString *personalizationSectionFeatureId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) long long groupType;

+ (Class)headlineTopicsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addHeadlineTopics:(id)a0;
- (void)clearHeadlineTopics;
- (id)headlineTopicsAtIndex:(unsigned long long)a0;
- (unsigned long long)headlineTopicsCount;

@end
