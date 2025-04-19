@class SVXRemoraVirtualDeviceManager, SVXVirtualDevice;

@interface SVXVirtualDeviceManager : NSObject {
    SVXRemoraVirtualDeviceManager *_remoraVirtualDeviceManager;
}

@property (readonly, nonatomic) SVXVirtualDevice *hostVirtualDevice;

- (void).cxx_destruct;
- (void)getVirtualDeviceForActivationContext:(id)a0 completion:(id /* block */)a1;
- (void)getVirtualDeviceForInstanceInfo:(id)a0 completion:(id /* block */)a1;
- (id)initWithRemoraVirtualDeviceManager:(id)a0;
- (id)initWithRemoraVirtualDeviceManager:(id)a0 hostVirtualDevice:(id)a1;

@end
