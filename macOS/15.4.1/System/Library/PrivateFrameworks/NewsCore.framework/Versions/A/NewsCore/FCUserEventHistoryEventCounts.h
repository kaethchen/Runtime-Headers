@interface FCUserEventHistoryEventCounts : NSObject

@property (class, readonly, nonatomic) FCUserEventHistoryEventCounts *empty;

@property (nonatomic) long long articleSeenEventCount;
@property (nonatomic) long long articleVisitedEventCount;
@property (nonatomic) long long articleReadEventCount;
@property (nonatomic) long long articleLikedEventCount;
@property (nonatomic) long long articleDislikedEventCount;
@property (nonatomic) long long articleSharedEventCount;
@property (nonatomic) long long articleSavedEventCount;
@property (nonatomic) long long feedViewEventCount;
@property (nonatomic) long long tagFollowedEventCount;
@property (nonatomic) long long tagUnfollowedEventCount;
@property (nonatomic) long long tagMutedEventCount;

- (id)description;
- (id)initWithArticleSeenEventCount:(long long)a0 articleVisitedEventCount:(long long)a1 articleReadEventCount:(long long)a2 articleLikedEventCount:(long long)a3 articleDislikedEventCount:(long long)a4 articleSharedEventCount:(long long)a5 articleSavedEventCount:(long long)a6 feedViewEventCount:(long long)a7 tagFollowedEventCount:(long long)a8 tagUnfollowedEventCount:(long long)a9 tagMutedEventCount:(long long)a10;

@end
