@class ATXIntentStream, ATXUserActivityStream;

@interface ATXCombinedIntentStream : NSObject {
    ATXIntentStream *_intentStream;
    ATXUserActivityStream *_activityStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)getActivityAndIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 ascending:(BOOL)a2;
- (id)getActivityAndIntentEventsFromLastMonth;
- (id)getSortedActivityAndIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 comparator:(id /* block */)a3;
- (id)initWithIntentStream:(id)a0 activityStream:(id)a1;

@end
