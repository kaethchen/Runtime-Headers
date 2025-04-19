@class ATXHeuristicDevice;

@interface ATXChangeAlarmBeforeHolidayDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)predictedBedTimeWithCallback:(id /* block */)a0;
- (void)scheduledBedTimeWithCallback:(id /* block */)a0;

@end
