@class WatchSportsEventIntentResponse, WatchSportsEventIntent;

@interface SiriVideoIntents.WatchSportsEventIntentHandler : NSObject <WatchSportsEventIntentHandling>

- (id)init;
- (void)confirmWatchSportsEvent:(WatchSportsEventIntent *)a0 completion:(void (^)(WatchSportsEventIntentResponse *))a1;
- (void)handleWatchSportsEvent:(WatchSportsEventIntent *)a0 completion:(void (^)(WatchSportsEventIntentResponse *))a1;

@end
