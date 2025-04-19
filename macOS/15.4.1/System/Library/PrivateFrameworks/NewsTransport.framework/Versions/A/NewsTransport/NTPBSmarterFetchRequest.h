@class NTPBPersonalizationParams, NSMutableArray, NTPBUserInfo;

@interface NTPBSmarterFetchRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasUserInfo;
@property (retain, nonatomic) NTPBUserInfo *userInfo;
@property (readonly, nonatomic) BOOL hasPersonalizationParams;
@property (retain, nonatomic) NTPBPersonalizationParams *personalizationParams;
@property (retain, nonatomic) NSMutableArray *tagsFolloweds;
@property (retain, nonatomic) NSMutableArray *todayFeedPoolRequests;

+ (Class)tagsFollowedType;
+ (Class)todayFeedPoolRequestsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTagsFollowed:(id)a0;
- (void)addTodayFeedPoolRequests:(id)a0;
- (void)clearTagsFolloweds;
- (void)clearTodayFeedPoolRequests;
- (id)tagsFollowedAtIndex:(unsigned long long)a0;
- (unsigned long long)tagsFollowedsCount;
- (id)todayFeedPoolRequestsAtIndex:(unsigned long long)a0;
- (unsigned long long)todayFeedPoolRequestsCount;

@end
