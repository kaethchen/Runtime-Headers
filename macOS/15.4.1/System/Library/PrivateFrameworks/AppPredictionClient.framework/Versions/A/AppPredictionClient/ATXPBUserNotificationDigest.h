@class NSString, ATXPBSharedDigestEngagementTrackingMetrics, NSMutableArray, ATXPBDigestTimeline;

@interface ATXPBUserNotificationDigest : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasRankerId;
@property (retain, nonatomic) NSString *rankerId;
@property (readonly, nonatomic) BOOL hasModeId;
@property (retain, nonatomic) NSString *modeId;
@property (retain, nonatomic) NSMutableArray *messageGroups;
@property (retain, nonatomic) NSMutableArray *highlightedGroups;
@property (retain, nonatomic) NSMutableArray *rankedGroups;
@property (retain, nonatomic) NSMutableArray *appDigests;
@property (readonly, nonatomic) BOOL hasSharedEngagementTracker;
@property (retain, nonatomic) ATXPBSharedDigestEngagementTrackingMetrics *sharedEngagementTracker;
@property (readonly, nonatomic) BOOL hasDigestTimeline;
@property (retain, nonatomic) ATXPBDigestTimeline *digestTimeline;

+ (Class)appDigestsType;
+ (Class)highlightedGroupsType;
+ (Class)messageGroupsType;
+ (Class)rankedGroupsType;

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
- (id)jsonRepresentation;
- (unsigned long long)appDigestsCount;
- (void)clearAppDigests;
- (void)addAppDigests:(id)a0;
- (void)addHighlightedGroups:(id)a0;
- (void)addMessageGroups:(id)a0;
- (void)addRankedGroups:(id)a0;
- (id)appDigestsAtIndex:(unsigned long long)a0;
- (void)clearHighlightedGroups;
- (void)clearMessageGroups;
- (void)clearRankedGroups;
- (id)highlightedGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)highlightedGroupsCount;
- (id)initFromJSON:(id)a0;
- (id)messageGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)messageGroupsCount;
- (id)rankedGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)rankedGroupsCount;

@end
