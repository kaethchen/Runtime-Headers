@class ATXUserActivityStream, NSString, _ATXDataStore, NSDate, ATXIntentStream;
@protocol ATXPETEventTracker2Protocol;

@interface ATXCoreDuetLogger : NSObject {
    _ATXDataStore *_dataStore;
    ATXIntentStream *_intentStream;
    ATXUserActivityStream *_activityStream;
    NSDate *_currentDate;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSString *_abGroup;
}

- (id)init;
- (void).cxx_destruct;
- (id)abGroup;
- (BOOL)actionTypeIsActivity:(id)a0;
- (id)initWithDataStore:(id)a0 intentStream:(id)a1 activityStream:(id)a2 currentDate:(id)a3 tracker:(id)a4;
- (void)logCoreDuetActionLogDonationMetrics;
- (void)logDonationCountWithAlogEventCount:(unsigned long long)a0 forIntents:(BOOL)a1;
- (void)logDonationRatioWithDuetEventCount:(unsigned long long)a0 alogEventCount:(unsigned long long)a1 forIntents:(BOOL)a2;
- (void)setabGroup:(id)a0;

@end
