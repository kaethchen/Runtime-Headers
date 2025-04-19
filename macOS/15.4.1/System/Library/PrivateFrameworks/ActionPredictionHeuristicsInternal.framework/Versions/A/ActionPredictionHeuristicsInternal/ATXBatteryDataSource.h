@class ATXHeuristicDevice;

@interface ATXBatteryDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)batteryInformationWithCallback:(id /* block */)a0;

@end
