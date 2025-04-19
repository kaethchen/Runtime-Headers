@class ATXHeuristicDevice;

@interface ATXHolidaysDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (id)_holidayCalendarForEventStore:(id)a0;
- (void)holidaysFromStartDate:(id)a0 toEndDate:(id)a1 callback:(id /* block */)a2;

@end
