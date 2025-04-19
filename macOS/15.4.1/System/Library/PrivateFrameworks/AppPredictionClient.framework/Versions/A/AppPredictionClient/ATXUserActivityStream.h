@interface ATXUserActivityStream : NSObject

- (id)getActivityIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2;
- (void)_enumerateActivityIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 reversed:(BOOL)a3 block:(id /* block */)a4;
- (id)_getActivityEventFromBMAppActivity:(id)a0 bundleIdFilter:(id)a1;
- (id)getActivityIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)getActivityIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 bundleIdFilter:(id)a2 limit:(unsigned long long)a3;
- (unsigned long long)numberOfActivityEventsBetweenStartDate:(id)a0 endDate:(id)a1;

@end
