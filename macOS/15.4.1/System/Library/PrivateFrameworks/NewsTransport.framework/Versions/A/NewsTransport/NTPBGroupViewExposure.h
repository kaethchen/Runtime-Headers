@class NSString, NSMutableArray, NSData;

@interface NTPBGroupViewExposure : PBCodable <NSCopying> {
    struct { unsigned char curatedContentType : 1; unsigned char feedAutoSubscribeType : 1; unsigned char groupArticleCountInForYou : 1; unsigned char groupDisplayMode : 1; unsigned char groupDisplayRankInForYou : 1; unsigned char groupFormationReason : 1; unsigned char groupLocation : 1; unsigned char groupLocationFeedType : 1; unsigned char groupPresentationReason : 1; unsigned char groupType : 1; unsigned char screenfulsFromTop : 1; unsigned char topStoryMandatoryArticleCount : 1; unsigned char topStoryOptionalArticleCount : 1; unsigned char isIssueContext : 1; unsigned char isSubscribedToGroupFeed : 1; unsigned char reachedEndOfGroup : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (retain, nonatomic) NSString *groupFeedId;
@property (retain, nonatomic) NSMutableArray *groupedArticleIds;
@property (nonatomic) BOOL hasGroupDisplayRankInForYou;
@property (nonatomic) int groupDisplayRankInForYou;
@property (nonatomic) BOOL hasGroupArticleCountInForYou;
@property (nonatomic) int groupArticleCountInForYou;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic) BOOL hasIsSubscribedToGroupFeed;
@property (nonatomic) BOOL isSubscribedToGroupFeed;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) BOOL hasTopStoryMandatoryArticleCount;
@property (nonatomic) int topStoryMandatoryArticleCount;
@property (nonatomic) BOOL hasTopStoryOptionalArticleCount;
@property (nonatomic) int topStoryOptionalArticleCount;
@property (nonatomic) BOOL hasGroupPresentationReason;
@property (nonatomic) int groupPresentationReason;
@property (nonatomic) BOOL hasGroupFormationReason;
@property (nonatomic) int groupFormationReason;
@property (nonatomic) BOOL hasFeedAutoSubscribeType;
@property (nonatomic) int feedAutoSubscribeType;
@property (nonatomic) BOOL hasReachedEndOfGroup;
@property (nonatomic) BOOL reachedEndOfGroup;
@property (nonatomic) BOOL hasCuratedContentType;
@property (nonatomic) int curatedContentType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;
@property (nonatomic) BOOL hasGroupDisplayMode;
@property (nonatomic) int groupDisplayMode;
@property (nonatomic) BOOL hasGroupLocation;
@property (nonatomic) int groupLocation;
@property (nonatomic) BOOL hasGroupLocationFeedType;
@property (nonatomic) int groupLocationFeedType;
@property (readonly, nonatomic) BOOL hasGroupExposedInLocationId;
@property (retain, nonatomic) NSString *groupExposedInLocationId;
@property (readonly, nonatomic) BOOL hasGroupExposedInSourceChannelId;
@property (retain, nonatomic) NSString *groupExposedInSourceChannelId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) BOOL hasScreenfulsFromTop;
@property (nonatomic) int screenfulsFromTop;
@property (retain, nonatomic) NSMutableArray *groupedIssueIds;
@property (nonatomic) BOOL hasIsIssueContext;
@property (nonatomic) BOOL isIssueContext;
@property (retain, nonatomic) NSMutableArray *sectionIds;
@property (readonly, nonatomic) BOOL hasCuratedSubtype;
@property (retain, nonatomic) NSString *curatedSubtype;
@property (readonly, nonatomic) BOOL hasCuratedBatchId;
@property (retain, nonatomic) NSString *curatedBatchId;
@property (retain, nonatomic) NSMutableArray *layoutIds;

+ (Class)groupedArticleIdsType;
+ (Class)groupedIssueIdsType;
+ (Class)layoutIdsType;
+ (Class)sectionIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFeedAutoSubscribeType:(id)a0;
- (int)StringAsGroupLocation:(id)a0;
- (int)StringAsGroupPresentationReason:(id)a0;
- (void)clearSectionIds;
- (int)StringAsCuratedContentType:(id)a0;
- (int)StringAsGroupFormationReason:(id)a0;
- (int)StringAsGroupLocationFeedType:(id)a0;
- (int)StringAsGroupType:(id)a0;
- (unsigned long long)sectionIdsCount;
- (void)addGroupedArticleIds:(id)a0;
- (void)addGroupedIssueIds:(id)a0;
- (void)addLayoutIds:(id)a0;
- (void)addSectionIds:(id)a0;
- (void)clearGroupedArticleIds;
- (void)clearGroupedIssueIds;
- (void)clearLayoutIds;
- (id)curatedContentTypeAsString:(int)a0;
- (id)feedAutoSubscribeTypeAsString:(int)a0;
- (id)groupFormationReasonAsString:(int)a0;
- (id)groupLocationAsString:(int)a0;
- (id)groupLocationFeedTypeAsString:(int)a0;
- (id)groupPresentationReasonAsString:(int)a0;
- (id)groupTypeAsString:(int)a0;
- (id)groupedArticleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)groupedArticleIdsCount;
- (id)groupedIssueIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)groupedIssueIdsCount;
- (id)layoutIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)layoutIdsCount;
- (id)sectionIdsAtIndex:(unsigned long long)a0;

@end
