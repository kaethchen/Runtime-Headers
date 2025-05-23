@interface MLMetalDeviceObserver : NSObject

- (void)stopObserving:(id)a0;
- (id)copyAllMTLDevicesWithHandler:(id /* block */)a0 deviceObserver:(id *)a1;
- (id)startObservingWithBlock:(id /* block */)a0 deviceObserver:(id *)a1;

@end
