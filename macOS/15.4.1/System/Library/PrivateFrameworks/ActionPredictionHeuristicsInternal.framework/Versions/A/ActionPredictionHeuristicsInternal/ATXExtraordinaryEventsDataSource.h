@class ATXHeuristicDevice, PPEventStore;

@interface ATXExtraordinaryEventsDataSource : NSObject {
    ATXHeuristicDevice *_device;
    PPEventStore *_extraordinaryEventStore;
}

+ (id)_endOfDayAfterDate:(id)a0 numberOfDays:(long long)a1;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (id)_ekEventForHighlight:(id)a0 eventStore:(id)a1;
- (id)_fetchExtraordinaryEvents;
- (void)getEventsWithProminentFeature:(id)a0 callback:(id /* block */)a1;

@end
