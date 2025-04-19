@class ATXHeuristicDevice;

@interface ATXFlightStatusDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)flightStatusForFlight:(id)a0 callback:(id /* block */)a1;
- (BOOL)_flightIDIsValid:(id)a0;

@end
