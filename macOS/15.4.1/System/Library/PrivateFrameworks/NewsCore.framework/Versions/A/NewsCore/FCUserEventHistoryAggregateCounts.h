@interface FCUserEventHistoryAggregateCounts : NSObject

@property (class, readonly, nonatomic) FCUserEventHistoryAggregateCounts *empty;

@property (nonatomic) long long tag;
@property (nonatomic) long long channelTopic;
@property (nonatomic) long long group;

@end
