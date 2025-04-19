@class NSString, NSMutableDictionary;

@interface TIAnalyticsServiceProviderMock : NSObject <TIAnalyticsServiceProvider>

@property (readonly, nonatomic) NSMutableDictionary *allEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (long long)countEvent:(id)a0;
- (void)dispatchEventWithName:(id)a0 payload:(id)a1;
- (id)eventsWithName:(id)a0;
- (long long)countEvent:(id)a0 filteredWithPredicate:(id)a1;
- (double)sumFloatField:(id)a0 forEvent:(id)a1;
- (double)sumFloatField:(id)a0 forEvent:(id)a1 filteredWithPredicate:(id)a2;
- (double)sumFloatField:(id)a0 forEvents:(id)a1;
- (long long)sumIntegerField:(id)a0 forEvent:(id)a1;
- (long long)sumIntegerField:(id)a0 forEvent:(id)a1 filteredWithPredicate:(id)a2;
- (long long)sumIntegerField:(id)a0 forEvents:(id)a1;

@end
