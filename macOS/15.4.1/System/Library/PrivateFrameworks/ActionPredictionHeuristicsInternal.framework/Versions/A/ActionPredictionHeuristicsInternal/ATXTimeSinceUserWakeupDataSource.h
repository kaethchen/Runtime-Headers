@class ATXHeuristicDevice;

@interface ATXTimeSinceUserWakeupDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)timeIntervalSinceUserWakeupWithCallback:(id /* block */)a0;

@end
