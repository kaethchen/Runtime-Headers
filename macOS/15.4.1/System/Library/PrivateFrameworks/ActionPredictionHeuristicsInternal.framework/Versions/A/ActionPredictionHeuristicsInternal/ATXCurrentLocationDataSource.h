@class ATXHeuristicDevice;

@interface ATXCurrentLocationDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)obtainOneTimeLocationWithCallback:(id /* block */)a0;

@end
