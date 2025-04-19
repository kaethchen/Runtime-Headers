@class IADefaultsDataStore;

@interface IASGenmojiUsageAnalyzer : IASAnalyzer

@property (retain, nonatomic) IADefaultsDataStore *dataStore;

+ (id)getDaterangeObjectWithName:(id)a0 dataStore:(id)a1;
+ (BOOL)isSpecialCaseUsageSignal:(id)a0;
+ (BOOL)isUsageSignal:(id)a0;

- (void).cxx_destruct;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (void)handleGenmojiUsageSignal:(id)a0;
- (void)handleImageInsertedSignal:(id)a0;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (void)recordEngagementForTodayWithDatastoreObjectName:(id)a0;
- (void)recordUsageForToday;
- (BOOL)shouldBeGarbageCollected;

@end
