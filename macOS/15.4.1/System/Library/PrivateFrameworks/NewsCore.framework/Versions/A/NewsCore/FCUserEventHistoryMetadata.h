@class FCUserEventHistoryEventCounts, FCUserEventHistoryAggregateStoreData;

@interface FCUserEventHistoryMetadata : NSObject

@property (nonatomic) long long aggregateStoreGenerationTime;
@property (nonatomic) long long aggregateTotalCount;
@property (nonatomic) double meanCountOfEvents;
@property (nonatomic) long long sessionsOnDiskSize;
@property (nonatomic) double standardDeviationOfEvents;
@property (nonatomic) long long totalEventsCount;
@property (nonatomic) long long headlineEventCount;
@property (nonatomic) long long headlinesWithValidTitleEmbeddingsEventCount;
@property (nonatomic) long long headlinesWithInvalidTitleEmbeddingsEventCount;
@property (nonatomic) long long headlinesWithValidBodyEmbeddingsEventCount;
@property (nonatomic) long long headlinesWithInvalidBodyEmbeddingsEventCount;
@property (retain, nonatomic) FCUserEventHistoryEventCounts *eventCounts;
@property (retain, nonatomic) FCUserEventHistoryAggregateStoreData *aggregateStoreData;

+ (id)emptyWithSessionsOnDiskSize:(long long)a0 personalizationAnalyticsEnabled:(BOOL)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAggregateStoreGenerationTime:(long long)a0 aggregateTotalCount:(long long)a1 meanCountOfEvents:(double)a2 sessionsOnDiskSize:(long long)a3 standardDeviationOfEvents:(double)a4 totalEventsCount:(long long)a5 headlineEventCount:(long long)a6 headlinesWithValidTitleEmbeddingsEventCount:(long long)a7 headlinesWithInvalidTitleEmbeddingsEventCount:(long long)a8 headlinesWithValidBodyEmbeddingsEventCount:(long long)a9 headlinesWithInvalidBodyEmbeddingsEventCount:(long long)a10 eventCounts:(id)a11 aggregateStoreData:(id)a12;

@end
