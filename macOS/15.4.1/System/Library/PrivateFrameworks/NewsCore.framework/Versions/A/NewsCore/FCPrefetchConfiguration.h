@class NSDictionary;

@interface FCPrefetchConfiguration : NSObject {
    NSDictionary *_configDict;
}

@property (readonly, nonatomic, getter=isBackgroundFetchEnabled) BOOL backgroundFetchEnabled;
@property (readonly, nonatomic) double minimumBackgroundFetchInterval;
@property (readonly, nonatomic) BOOL shouldPrefetchForYouFeed;
@property (readonly, nonatomic) NSDictionary *scheduledBGFetchTimes;
@property (readonly, nonatomic) long long scheduledBGFetchTimeJitter;
@property (readonly, nonatomic) NSDictionary *scheduledMicroUpdateTimes;
@property (readonly, nonatomic) long long scheduledMicroUpdateTimeJitter;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)initWithConfigDictionary:(id)a0;

@end
