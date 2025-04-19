@class ATXHeuristicDevice;

@interface ATXModeCorrelatedAppsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)modeCorrelatedAppsInCurrentModeWithCallback:(id /* block */)a0;

@end
