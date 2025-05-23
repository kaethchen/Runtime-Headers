@class NSArray, NSString;

@interface AVFigRouteDescriptorOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> {
    NSArray *_routeDescriptors;
    struct OpaqueFigRouteDiscoverer { } *_routeDiscoverer;
}

@property (readonly, nonatomic) NSArray *allDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)initWithRouteDescriptors:(id)a0 routeDiscoverer:(struct OpaqueFigRouteDiscoverer { } *)a1;

@end
