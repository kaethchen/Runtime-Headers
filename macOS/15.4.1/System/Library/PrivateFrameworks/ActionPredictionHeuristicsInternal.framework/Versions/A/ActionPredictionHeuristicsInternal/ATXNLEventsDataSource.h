@class ATXHeuristicDevice;

@interface ATXNLEventsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)nlEventsWithCallback:(id /* block */)a0;

@end
